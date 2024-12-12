#ifndef MAPGIDROFORM_H
#define MAPGIDROFORM_H

#include <QWidget>
#include <QtCharts>
#include <QPen>
#include <QColor>
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

    QLineSeries *upperSeries = nullptr;
    QLineSeries *lowerSeries = nullptr;
    QAreaSeries *areaRect = nullptr;

    QGraphicsLineItem *zeroAxisX = nullptr;
    QGraphicsLineItem *zeroAxisY = nullptr;

    void setAuqa(quint8 heightX,quint8 widthY);

    QPen aquamarine; // Фиолетовый цвет (RGB: 128, 64, 255)

private:
    void updateZeroAxes();
};

#endif // MAPGIDROFORM_H
