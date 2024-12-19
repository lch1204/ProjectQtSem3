#include "graphform.h"

GraphForm::GraphForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    // Инициализация графика и виджета
    chart = new QChart();
    chartView = new QChartView(this);
    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(chartView);
    setLayout(hLayout);
    chartView->setChart(chart);

    graphModem = new QLineSeries;
    chart->addSeries(graphModem);


    // Настройка осей
    tAxis = new QValueAxis(chart);
    dAxis = new QValueAxis(chart);
    tAxis->setRange(-0, 100);
    tAxis->setTickCount(10);
    tAxis->setTitleText("T, c");
    dAxis->setRange(0, 5);
    dAxis->setTickCount(10);
    dAxis->setTitleText("D, m");



    chart->addAxis(dAxis, Qt::AlignLeft);
    chart->addAxis(tAxis, Qt::AlignBottom);

    chart->setPlotAreaBackgroundVisible(true);
    chart->layout()->setContentsMargins(0, 0, 0, 0);
    chart->setMargins(QMargins(0, 0, 0, 0));
    chartView->setInteractive(true);
    // chartView->setDragMode(QGraphicsView::ScrollHandDrag);
    // chartView->setRubberBand(QChartView::RectangleRubberBand);

    QFont axisFont = dAxis->titleFont();
    axisFont.setPointSize(8);
    dAxis->setTitleFont(axisFont);
    tAxis->setTitleFont(axisFont);
    dAxis->setLabelsFont(QFont("Times New Roman", 10));
    tAxis->setLabelsFont(QFont("Times New Roman", 10));
    dAxis->setTitleFont(QFont("Times New Roman", 10));
    tAxis->setTitleFont(QFont("Times New Roman", 10));
    dAxis->setTitleBrush(QBrush(Qt::black));
    tAxis->setTitleBrush(QBrush(Qt::black));
    dAxis->setLabelsBrush(QBrush(Qt::black));
    tAxis->setLabelsBrush(QBrush(Qt::black));
    dAxis->setGridLineColor(Qt::gray);
    tAxis->setGridLineColor(Qt::gray);
    chart->legend()->hide();

    graphModem->attachAxis(tAxis);
    graphModem->attachAxis(dAxis);
}

GraphForm::~GraphForm()
{
}

void GraphForm::setTD(double T, double D)
{
    // qDebug() << "append(T,D)";
    qDebug() << "T" << T << "; D" << D;
    graphModem->append(T,D);
}

void GraphForm::clearTD()
{
    if (graphModem)
    graphModem->clear();
}

void GraphForm::setTime(QString t)
{
    tAxis->setRange(0, t.toDouble());
}
