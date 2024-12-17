#include "mapgidroform.h"

MapGidroForm::MapGidroForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    aquamarine = QPen(QColor("#20B2AA"), 2,  Qt::SolidLine);

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
    xAxis->setTitleText("Y, m");
    yAxis->setRange(-0, 100);
    yAxis->setTickCount(10);
    yAxis->setTitleText("X, m");

    chart->addAxis(xAxis, Qt::AlignBottom);
    chart->addAxis(yAxis, Qt::AlignLeft);

    // Серии
    trajectoryAUV = new QSplineSeries(chart);
    auvPosition = new QScatterSeries(chart);
    chart->addSeries(trajectoryAUV);
    chart->addSeries(auvPosition);
    trajectoryAUV->attachAxis(xAxis);
    trajectoryAUV->attachAxis(yAxis);
    auvPosition->attachAxis(xAxis);
    auvPosition->attachAxis(yAxis);

    // Настройка внешнего вида
    chart->setBackgroundBrush(QBrush(Qt::white));
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
    xAxis->setLabelsFont(QFont("Arial", 8));
    yAxis->setLabelsFont(QFont("Arial", 8));
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

    areaRect->setLowerSeries(lowerSeries);
    areaRect->setUpperSeries(upperSeries);
    chart->addSeries(areaRect);

    areaRect->attachAxis(xAxis);
    areaRect->attachAxis(yAxis);



    modemPosition = new QScatterSeries(chart);


    chart->addSeries(modemPosition);

    modemPosition->attachAxis(xAxis);
    modemPosition->attachAxis(yAxis);

    // Устанавливаем изображение как маркер
    // modemPosition->setMarkerShape(QScatterSeries::MarkerShapeCircle); // Временная форма

    // modemPosition->setMarkerSize(20); // Размер маркера
    // modemPosition->setBrush(QBrush(QColorConstants::Cyan)); // Устанавливаем маркер

    // auvPosition->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    // auvPosition->setMarkerSize(25);
    // auvPosition->setColor(QColorConstants::Blue);
    updateZeroAxes();
    connect(&moveAUV, &MoveAUV::updateAUV, this, &MapGidroForm::tickMove);
    connect(xAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);
    connect(yAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);
}

MapGidroForm::~MapGidroForm()
{

}

void MapGidroForm::setAuqa(quint8 heightX, quint8 widthY)
{
    // if (areaRect)
    // chart->removeSeries(areaRect);

    upperSeries->clear();
    lowerSeries->clear();
    qDebug() << "widthY" << widthY;
    qDebug() << "heightX" << heightX;
    upperSeries->append(0,widthY);
    upperSeries->append(heightX,widthY);
    lowerSeries->append(0,0);
    lowerSeries->append(heightX,0);

    areaRect->setPen(aquamarine); // Синяя рамка
    areaRect->setBrush(QBrush(QColor(32, 178, 170, 50))); // Полупрозрачная заливка
}

void MapGidroForm::addMarker(quint8 x, quint8 y)
{
    modemPosition->append(x,y);

    QImage markerImage("../../pictures/superhero_2503243.png");

    for (const QPointF& point : modemPosition->points()) {
        // QGraphicsPixmapItem* item1 = new QGraphicsPixmapItem(QPixmap("../../pictures/superhero_2503243.png"));
        CustomMarker* marker = new CustomMarker(markerImage.transformed(QTransform::fromScale(0.08, 0.08)), point, chart);
        qDebug() << "тута";
        if (group) {
            group->addToGroup(marker);
        } else {
            qDebug() << "Group is null!";
        }
        // group->addToGroup(marker);
        // group.;
        qDebug() << "тутатута";
    }

}

void MapGidroForm::delMarker(quint8 x, quint8 y)
{
    modemPosition->remove(x,y);

    QImage markerImage("../../pictures/superhero_2503243.png");

    clearGroup(group);
    if (!modemPosition->points().isEmpty())
    {
        for (const QPointF& point : modemPosition->points()) {
            CustomMarker* marker = new CustomMarker(markerImage.transformed(QTransform::fromScale(0.08, 0.08)), point, chart);
            group->addToGroup(marker);
            qDebug() << "add";
        }
    }
}

void MapGidroForm::addAUV(quint8 x, quint8 y)
{
    auvPosition->append(x,y);
    moveAUV.setAUV_XY(x,y);
}

void MapGidroForm::delAUV()
{
    auvPosition->clear();
    trajectoryAUV->clear();
}

void MapGidroForm::updateZeroAxes()
{
    // Получаем текущие диапазоны осей
    double xMin = xAxis->min();
    double xMax = xAxis->max();
    double yMin = yAxis->min();
    double yMax = yAxis->max();

    QRectF plotArea = chart->plotArea();

    // Привязываем нулевую линию оси X к масштабу
    if (yMin <= 0 && yMax >= 0) {
        double yZeroPos = plotArea.bottom() - (plotArea.height() * (0 - yMin) / (yMax - yMin));
        zeroAxisX->setLine(plotArea.left(), yZeroPos, plotArea.right(), yZeroPos);
        zeroAxisX->setVisible(true);
    } else {
        zeroAxisX->setVisible(false); // Скрываем линию, если 0 не входит в диапазон оси Y
    }

    // Привязываем нулевую линию оси Y к масштабу
    if (xMin <= 0 && xMax >= 0) {
        double xZeroPos = plotArea.left() + (plotArea.width() * (0 - xMin) / (xMax - xMin));
        zeroAxisY->setLine(xZeroPos, plotArea.top(), xZeroPos, plotArea.bottom());
        zeroAxisY->setVisible(true);
    } else {
        zeroAxisY->setVisible(false); // Скрываем линию, если 0 не входит в диапазон оси X
    }

    QImage markerImage("../../pictures/superhero_2503243.png");

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



void MapGidroForm::startMove(qint8 V)
{
    moveAUV.time->start();
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
    qDebug() << "tickMove";
    trajectoryAUV->append(X,Y);
    auvPosition->clear();
    auvPosition->append(X,Y);
}

