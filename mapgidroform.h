#ifndef MAPGIDROFORM_H
#define MAPGIDROFORM_H

#include <QWidget>
#include <QtCharts>
#include "ui_mapgidroform.h"

using namespace QtCharts;


class MapGidroForm : public QWidget, public Ui::MapGidroForm
{
    Q_OBJECT

public:
    explicit MapGidroForm(QWidget *parent = nullptr);
    ~MapGidroForm();

public:
    QChartView * chartView;
    QChart *chart = nullptr;
    QHBoxLayout *hLayout;

    QValueAxis *xAxis = nullptr;
    QValueAxis *yAxis = nullptr;
    QSplineSeries *trajectoryAUV = nullptr;
    QScatterSeries *auvPosition = nullptr;
};

#endif // MAPGIDROFORM_H
