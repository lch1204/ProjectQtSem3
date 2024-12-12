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

    // Настройка осей
    xAxis = new QValueAxis(chart);
    yAxis = new QValueAxis(chart);
    xAxis->setRange(-100, 100);
    xAxis->setTickCount(10);
    xAxis->setTitleText("Y, m");
    yAxis->setRange(-100, 100);
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

    // // Обновление нулевых осей при изменении области построения
    connect(chart, &QChart::plotAreaChanged, this, [this]() {
        QRectF plotArea = chart->plotArea();
        zeroAxisX->setLine(plotArea.left(), plotArea.center().y(), plotArea.right(), plotArea.center().y());
        zeroAxisY->setLine(plotArea.center().x(), plotArea.top(), plotArea.center().x(), plotArea.bottom());
    });

    connect(xAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);
    connect(yAxis, &QValueAxis::rangeChanged, this, &MapGidroForm::updateZeroAxes);

    QRectF plotArea = chart->plotArea(); // Получаем текущую область построения.
    chart->setPlotArea(QRectF(plotArea.x(), plotArea.y(), plotArea.width(), plotArea.height())); // Уменьшаем отступы.

    upperSeries = new QLineSeries();
    lowerSeries = new QLineSeries();
    areaRect = new QAreaSeries();

    areaRect->setLowerSeries(lowerSeries);
    areaRect->setUpperSeries(upperSeries);
    chart->addSeries(areaRect);

    areaRect->attachAxis(xAxis);
    areaRect->attachAxis(yAxis);

    // Первичное обновление осей
    updateZeroAxes();

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
}
