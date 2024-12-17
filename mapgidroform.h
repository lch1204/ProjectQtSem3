#ifndef MAPGIDROFORM_H
#define MAPGIDROFORM_H

#include <QWidget>
#include <QtCharts>
#include <QPen>
#include <QColor>
#include <QSvgRenderer>
#include <QPainter>
#include <QFile>
#include "ui_mapgidroform.h"
#include "moveauv.h"
#include "CustomScatterSeries.h"

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

    QLineSeries *upperSeries = nullptr;
    QLineSeries *lowerSeries = nullptr;
    QAreaSeries *areaRect = nullptr;

    QGraphicsLineItem *zeroAxisX = nullptr;
    QGraphicsLineItem *zeroAxisY = nullptr;

    QPointF line_start_point ;


    QGraphicsPixmapItem *modemItem = nullptr;

    QScatterSeries *modemPosition = nullptr;
    QScatterSeries *auvPosition = nullptr;

    QGraphicsItemGroup *group = nullptr;

    void setAuqa(quint8 heightX,quint8 widthY);
    void addMarker(quint8 x,quint8 y);
    void delMarker(quint8 x,quint8 y);

    void addAUV(quint8 x,quint8 y);
    void delAUV();

    MoveAUV moveAUV;

    QPen aquamarine; // Фиолетовый цвет (RGB: 128, 64, 255)

    void updateZeroAxes();

    void startMove(qint8 V);
    void stopMove();


    void setCustomMarker(const QString &filePath) {
        QPixmap pixmap(filePath);
        m_markerPixmap = pixmap.scaled(25, 25, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    }

    QPixmap m_markerPixmap;

    void clearGroup(QGraphicsItemGroup* group);

public slots:
    void tickMove(float X,float Y);
};

#endif // MAPGIDROFORM_H
