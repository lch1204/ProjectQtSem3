#include "mapgidroform.h"


MapGidroForm::MapGidroForm(QWidget *parent)
    : QWidget(parent)
{
    // setupUi(this);
    // chart = new QChart();
    // chartView = new QChartView(this);
    // hLayout = new QHBoxLayout();
    // hLayout->addWidget(chartView);
    // setLayout(hLayout);
    // chartView->setChart(chart);

    // chartView->setChart(chart);
    // xAxis = new QValueAxis(chart);
    // yAxis = new QValueAxis(chart);

    // trajectoryAUV = new QSplineSeries(chart);
    // auvPosition = new QScatterSeries(chart);

    // trajectoryAUV->setPen(QPen(Qt::green,3));
    // auvPosition->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    // auvPosition->setBrush(QBrush(Qt::red));

    // chart->addSeries(trajectoryAUV);
    // chart->addSeries(auvPosition);

    // xAxis->setRange(-100,100);
    // xAxis->setTickCount(10);
    // xAxis->setTitleText("X, m");


    // yAxis->setRange(-100,100);
    // yAxis->setTickCount(10);
    // yAxis->setTitleText("Y, m");

    // chart->addAxis(xAxis, Qt::AlignLeft);
    // chart->addAxis(yAxis, Qt::AlignBottom);

    // trajectoryAUV->attachAxis(xAxis);
    // trajectoryAUV->attachAxis(yAxis);
    // auvPosition->attachAxis(xAxis);
    // auvPosition->attachAxis(yAxis);

    // //    trajectoryAUV->append(0,0);
    // //    trajectoryAUV->append(10,20);
    // //    trajectoryAUV->append(30,50);
    // //    auvPosition->append(30,50);

    // chart->layout()->setContentsMargins(0,0,0,0);
    // chartView->setInteractive(true);
    // chartView->setDragMode(QGraphicsView::ScrollHandDrag);
    // chartView->setMinimumSize(100,100);
    // chartView->setRubberBand(QChartView::RectangleRubberBand);
    setupUi(this);
    chart = new QChart(); // Создаем объект QChart для отображения графика.
    chartView = new QChartView(this); // Создаем виджет для отображения графика и устанавливаем его родителем текущий виджет.
    hLayout = new QHBoxLayout(); // Создаем горизонтальный слой для размещения chartView.
    hLayout->addWidget(chartView); // Добавляем виджет графика в слой.
    setLayout(hLayout); // Устанавливаем слой как основной для текущего виджета.
    chartView->setChart(chart); // Связываем объект графика с виджетом отображения.

    xAxis = new QValueAxis(chart); // Создаем ось X для графика.
    yAxis = new QValueAxis(chart); // Создаем ось Y для графика.


    // Настройка sizePolicy для растягивания графика на все окно:
    QSizePolicy policy(QSizePolicy::Expanding, QSizePolicy::Expanding); // Политика расширения по обеим осям.
    chartView->setSizePolicy(policy); // Применяем политику к виджету отображения графика.

    trajectoryAUV = new QSplineSeries(chart); // Создаем сплайн-серию для отображения траектории AUV.
    auvPosition = new QScatterSeries(chart); // Создаем серию точек для отображения текущего положения AUV.

    // trajectoryAUV->setPen(QPen(Qt::green, 3)); // Устанавливаем стиль линии для траектории AUV (зеленая, ширина 3).
    // auvPosition->setMarkerShape(QScatterSeries::MarkerShapeCircle); // Задаем форму маркера (круг).
    // auvPosition->setBrush(QBrush(Qt::red)); // Устанавливаем цвет маркеров (красный).

    chart->addSeries(trajectoryAUV); // Добавляем серию с траекторией на график.
    chart->addSeries(auvPosition); // Добавляем серию с положением AUV на график.

    // xAxis->setRange(0, 100); // Устанавливаем диапазон значений для оси X.
    // xAxis->setTickCount(10); // Устанавливаем количество меток на оси X.
    // xAxis->setTitleText("X, m"); // Устанавливаем заголовок оси X.

    // yAxis->setRange(0, 100); // Устанавливаем диапазон значений для оси Y.
    // yAxis->setTickCount(10); // Устанавливаем количество меток на оси Y.
    // yAxis->setTitleText("Y, m"); // Устанавливаем заголовок оси Y.

    chart->addAxis(xAxis, Qt::AlignLeft); // Привязываем ось X к левой стороне графика.
    chart->addAxis(yAxis, Qt::AlignBottom); // Привязываем ось Y к нижней стороне графика.

    trajectoryAUV->attachAxis(xAxis); // Привязываем серию траектории к оси X.
    trajectoryAUV->attachAxis(yAxis); // Привязываем серию траектории к оси Y.
    auvPosition->attachAxis(xAxis); // Привязываем серию с положением AUV к оси X.
    auvPosition->attachAxis(yAxis); // Привязываем серию с положением AUV к оси Y.

    //    trajectoryAUV->append(0, 0); // Пример добавления точек в серию траектории.
    //    trajectoryAUV->append(10, 20);
    //    trajectoryAUV->append(30, 50);
    //    auvPosition->append(30, 50);


    chart->setBackgroundBrush(QBrush(Qt::white)); // Устанавливаем белый фон для графика.
    // chart->setBackgroundPen(QPen(Qt::black, 2)); // Устанавливаем черную обводку шириной 2 пикселя.
    // chart->setPlotAreaBackgroundBrush(QBrush(Qt::lightGray)); // (Опционально) Задаем фон внутри области построения графика.
    chart->setPlotAreaBackgroundVisible(true); // (Опционально) Включаем видимость фона внутри области построения.

    chart->zoomOut();
    chart->zoom(0.5);

    QRectF currentPlotArea = chart->plotArea(); // Получаем текущую область построения.
    QRectF newPlotArea(currentPlotArea.x(), currentPlotArea.y(), currentPlotArea.width() * 1.5, currentPlotArea.height() * 1.5);
    chart->setPlotArea(newPlotArea); // Увеличиваем размеры области.


    chart->layout()->setContentsMargins(0, 0, 0, 0); // Убираем отступы вокруг графика, чтобы занять все пространство.
    chart->setMargins(QMargins(0,0,0,0));
    chartView->setInteractive(true); // Включаем интерактивность (масштабирование и перемещение).
    chartView->setDragMode(QGraphicsView::ScrollHandDrag); // Устанавливаем режим перемещения мышью.

    chartView->setMinimumSize(0, 0); // Устанавливаем минимальные размеры виджета графика.
    chartView->setRubberBand(QChartView::RectangleRubberBand); // Добавляем возможность выделения области графика.

    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Уменьшаем шрифт заголовка осей
    QFont axisFont = xAxis->titleFont();
    axisFont.setPointSize(8); // Устанавливаем размер шрифта меньше.
    xAxis->setTitleFont(axisFont);
    yAxis->setTitleFont(axisFont);

    // Уменьшаем шрифт меток на осях
    xAxis->setLabelsFont(QFont("Arial", 8)); // Устанавливаем шрифт для меток оси X.
    yAxis->setLabelsFont(QFont("Arial", 8)); // Устанавливаем шрифт для меток оси Y.

    // Уменьшаем шрифт заголовка графика
    QFont chartTitleFont = chart->titleFont();
    chartTitleFont.setPointSize(10); // Уменьшаем размер шрифта.
    chart->setTitleFont(chartTitleFont);

    // Уменьшаем шрифт легенды (если она есть)
    QFont legendFont = chart->legend()->font();
    legendFont.setPointSize(8);
    chart->legend()->setFont(legendFont);

    QRectF plotArea = chart->plotArea(); // Получаем текущую область построения.
    chart->setPlotArea(QRectF(plotArea.x(), plotArea.y(), plotArea.width(), plotArea.height())); // Уменьшаем отступы.

    xAxis->setLabelFormat("%d"); // Устанавливаем простой формат меток.
    yAxis->setLabelFormat("%d");

    xAxis->setTickCount(5); // Уменьшаем количество меток на осях.
    yAxis->setTickCount(5);

    chart->legend()->hide();
}

MapGidroForm::~MapGidroForm()
{

}
