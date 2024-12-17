#ifndef MOVEAUV_H
#define MOVEAUV_H

#include <QObject>
#include <QTimer>
#include <QTime>

class MoveAUV : public QObject
{
    Q_OBJECT
public:
    explicit MoveAUV(QObject *parent = nullptr);
    QTimer * time;
    int dt;
    float X, Y, V;
public slots:
    void tick();
    void setAUV_XY(qint8 setX, qint8 setY);
signals:
    void updateAUV(float X, float Y);
};

#endif // MOVEAUV_H
