#include "mapgidroform.h"

MapGidroForm::MapGidroForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    aquamarine = QPen(QColor("#20B2AA"), 2,  Qt::SolidLine);
    redTriad = QPen(QColor("#FD2E33"), 2,  Qt::SolidLine);

    // Инициализация графика и виджета
    chart = new QChart();
    chartView = new QChartView(this);
    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(chartView);
    setLayout(hLayout);
    chartView->setChart(chart);

    // QGraphicsItemGroup *group = new QGraphicsItemGroup();
    group = chart->scene()->createItemGroup({});
    // chart->scene()->addItem(group);

    // Настройка осей
    xAxis = new QValueAxis(chart);
    yAxis = new QValueAxis(chart);
    xAxis->setRange(-0, 100);
    xAxis->setTickCount(10);
    xAxis->setTitleText("X, m");
    yAxis->setRange(-0, 100);
    yAxis->setTickCount(10);
    yAxis->setTitleText("Y, m");

    chart->addAxis(xAxis, Qt::AlignLeft);
    chart->addAxis(yAxis, Qt::AlignBottom);

    // Серии
    auvPosition = new QScatterSeries(chart);
    modemPosition = new QScatterSeries(chart);
    chart->addSeries(modemPosition);
    chart->addSeries(auvPosition);

    qDebug() << "xAxis"<<modemPosition->attachAxis(yAxis);
    qDebug() << "yAxis"<<modemPosition->attachAxis(xAxis);

    auvPosition->attachAxis(xAxis);
    auvPosition->attachAxis(yAxis);

    // Настройка внешнего вида
    // chart->setBackgroundBrush(QBrush(QColor(53, 53, 53)));
    // chart->setTitleFont(QFont());
    chart->setPlotAreaBackgroundVisible(true);
    chart->layout()->setContentsMargins(0, 0, 0, 0);
    chart->setMargins(QMargins(0, 0, 0, 0));
    chartView->setInteractive(true);
    chartView->setDragMode(QGraphicsView::ScrollHandDrag);
    chartView->setRubberBand(QChartView::RectangleRubberBand);

    QFont axisFont = xAxis->titleFont();
    axisFont.setPointSize(8);
    xAxis->setTitleFont(axisFont);
    yAxis->setTitleFont(axisFont);
    xAxis->setLabelsFont(QFont("Times New Roman", 10));
    yAxis->setLabelsFont(QFont("Times New Roman", 10));
    xAxis->setTitleFont(QFont("Times New Roman", 10));
    yAxis->setTitleFont(QFont("Times New Roman", 10));
    xAxis->setTitleBrush(QBrush(Qt::black));
    yAxis->setTitleBrush(QBrush(Qt::black));
    xAxis->setLabelsBrush(QBrush(Qt::black));
    yAxis->setLabelsBrush(QBrush(Qt::black));
    xAxis->setGridLineColor(Qt::gray);
    yAxis->setGridLineColor(Qt::gray);
    chart->legend()->hide();

    // Линии для нулевых осей
    zeroAxisX = new QGraphicsLineItem();
    zeroAxisY = new QGraphicsLineItem();
    zeroAxisX->setPen(aquamarine);
    zeroAxisY->setPen(aquamarine);
    chart->scene()->addItem(zeroAxisX);
    chart->scene()->addItem(zeroAxisY);

    zeroAxisX->setZValue(0);
    zeroAxisY->setZValue(1);
    group->setZValue(2);

    QRectF plotArea = chart->plotArea();

    chart->setPlotArea(QRectF(plotArea.x(), plotArea.y(), plotArea.width(), plotArea.height())); // Уменьшаем отступы.

    upperSeries = new QLineSeries();
    lowerSeries = new QLineSeries();
    areaRect = new QAreaSeries();
    chart->addSeries(areaRect);

    areaRect->setLowerSeries(lowerSeries);
    areaRect->setUpperSeries(upperSeries);


    areaRect->attachAxis(xAxis);
    areaRect->attachAxis(yAxis);

    auvPosition->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    auvPosition->setMarkerSize(17);
    auvPosition->setPen(redTriad);
    auvPosition->setBrush(QBrush(QColor(253, 46, 51, 50)));


    updateZeroAxes();
    connect(&moveAUV, &MoveAUV::updateAUV, this, &MapGidroForm::tickMove);
    connect(this, &MapGidroForm::newDataAqua, &moveAUV, &MoveAUV::updateBorder);
    connect(xAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);
    connect(yAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);

    trajectoryAUV = new QSplineSeries(chart);
    chart->addSeries(trajectoryAUV);
    trajectoryAUV->attachAxis(xAxis);
    trajectoryAUV->attachAxis(yAxis);
    trajectoryAUV->setPen(redTriad);
}

MapGidroForm::~MapGidroForm()
{

}

void MapGidroForm::setAuqa(quint8 heightX, quint8 widthY)
{
    // if (areaRect)
    // chart->removeSeries(areaRect);
    float delta = 0;
    upperSeries->clear();
    lowerSeries->clear();
    qDebug() << "widthY" << widthY;
    qDebug() << "heightX" << heightX;
    upperSeries->append(0-delta,heightX+delta);
    upperSeries->append(widthY+delta,heightX+delta);
    lowerSeries->append(0+delta,0-delta);
    lowerSeries->append(widthY-delta,0-delta);

    areaRect->setPen(aquamarine); // Синяя рамка
    areaRect->setBrush(QBrush(QColor(32, 178, 170, 50))); // Полупрозрачная заливка
    emit newDataAqua(0, 0,heightX, widthY);
}

void MapGidroForm::addMarker(quint8 x, quint8 y)
{
    modemPosition->append(y,x);

    QImage markerImage("../../pictures/stingray_11064643.png");

    for (const QPointF& point : modemPosition->points()) {
        // QGraphicsPixmapItem* item1 = new QGraphicsPixmapItem(QPixmap("../../pictures/superhero_2503243.png"));
        CustomMarker* marker = new CustomMarker(markerImage.transformed(QTransform::fromScale(0.08, 0.08)), point, chart);
        if (group) {
            group->addToGroup(marker);
        } else {
            qDebug() << "Group is null!";
        }
    }

}

void MapGidroForm::delMarker(quint8 x, quint8 y)
{
    modemPosition->remove(y,x);

    QImage markerImage("../../pictures/stingray_11064643.png");

    clearGroup(group);
    if (!modemPosition->points().isEmpty())
    {
        for (const QPointF& point : modemPosition->points()) {
            CustomMarker* marker = new CustomMarker(markerImage.transformed(QTransform::fromScale(0.08, 0.08)), point, chart);
            group->addToGroup(marker);
            qDebug() << "del";
        }
    }
}

void MapGidroForm::addAUV(quint8 x, quint8 y)
{
    auvPosition->append(y,x);
    moveAUV.setAUV_XY(y,x);
}

void MapGidroForm::delAUV()
{
    auvPosition->clear();
    trajectoryAUV->clear();
}

void MapGidroForm::updateZeroAxes()
{
    if (checkBoxShowXY)
    {
        // Получаем текущие диапазоны осей
        double yMin = xAxis->min();
        double yMax = xAxis->max();
        double xMin = yAxis->min();
        double xMax = yAxis->max();

        QRectF plotArea = chart->plotArea();

        // Привязываем нулевую линию оси X к масштабу
        if (yMin <= 0 && yMax >= 0) {
            double yZeroPos = plotArea.bottom() - (plotArea.height() * (0 - yMin) / (yMax - yMin));
            zeroAxisY->setLine(plotArea.left(), yZeroPos, plotArea.right(), yZeroPos);
            zeroAxisY->setVisible(true);
        } else {
            zeroAxisY->setVisible(false); // Скрываем линию, если 0 не входит в диапазон оси Y
        }

        // Привязываем нулевую линию оси Y к масштабу
        if (xMin <= 0 && xMax >= 0) {
            double xZeroPos = plotArea.left() + (plotArea.width() * (0 - xMin) / (xMax - xMin));
            zeroAxisX->setLine(xZeroPos, plotArea.top(), xZeroPos, plotArea.bottom());
            zeroAxisX->setVisible(true);
        } else {
            zeroAxisX->setVisible(false); // Скрываем линию, если 0 не входит в диапазон оси X
        }

        QImage markerImage("../../pictures/stingray_11064643.png");

        if (!modemPosition->points().isEmpty())
        {
            clearGroup(group);
            for (const QPointF& point : modemPosition->points()) {
                CustomMarker* marker = new CustomMarker(markerImage.transformed(QTransform::fromScale(0.08, 0.08)), point, chart);
                group->addToGroup(marker);
                qDebug() << "add";
            }
        }
    }
}



void MapGidroForm::startMove()
{
    moveAUV.time->start();
    moveAUV.timeModel->start();
    modelModem.timeEl->restart();
    modelModem.timeTick->start();
    qDebug() << "timer start";
}

void MapGidroForm::stopMove()
{
    moveAUV.time->stop();
}

void MapGidroForm::clearGroup(QGraphicsItemGroup *group) {

    if (!group) return;
    // Удаляем все дочерние элементы из сцены
    for (QGraphicsItem* item : group->childItems()) {
        group->scene()->removeItem(item); // Удаляем элемент из сцены
        delete item; // Удаляем сам объект
    }
}

void MapGidroForm::tickMove(float X, float Y)
{
    trajectoryAUV->append(X,Y);
    auvPosition->clear();
    auvPosition->append(X,Y);
}

void MapGidroForm::checkXY(bool checked)
{
    checkBoxShowXY = checked;
    updateZeroAxes();
}

void MapGidroForm::endMove(bool checked)
{
    // modelModem.timeEl.;
    modelModem.timeTick->stop();
}

