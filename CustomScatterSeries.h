#ifndef CUSTOMSCATTERSERIES_H
#define CUSTOMSCATTERSERIES_H

#include <QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QChart>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

QT_CHARTS_USE_NAMESPACE

    // Класс для добавления кастомного изображения на точку графика
    class CustomMarker : public QGraphicsPixmapItem {
public:
    CustomMarker(const QImage& image, const QPointF& point, QChart* chart)
        : QGraphicsPixmapItem(QPixmap::fromImage(image)), chart(chart) {
        // Устанавливаем позицию маркера в координатах графика
        setPos(chart->mapToPosition(point) - QPointF(image.width() / 2, image.height() / 2));
    }

    void updatePosition(const QPointF& point) {
        setPos(chart->mapToPosition(point) - QPointF(pixmap().width() / 2, pixmap().height() / 2));
    }

private:
    QChart* chart;
};

#endif // CUSTOMSCATTERSERIES_H
