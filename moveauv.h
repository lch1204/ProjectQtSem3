#ifndef MOVEAUV_H
#define MOVEAUV_H

#include <QObject>
#include <QTimer>
#include <QTime>

enum tipeTr
{
    gorizont =0,
    vertical,
    circle,
    polyline
};

enum Move
{
    reight,
    left
};

enum MoveVer
{
    up,
    down
};

class MoveAUV : public QObject
{
    Q_OBJECT
public:
    explicit MoveAUV(QObject *parent = nullptr);
    QTimer * time;
    QTimer * timeModel;
    int dt;
    float X, Y, V, fixX, fixY;
    float distGALS = 1;
    float speed = 1;
    float Xmin, Ymin, Xmax, Ymax;
    char trajectory = 'g';
    tipeTr trajEnum{gorizont};
    void moveGALSgor();
    void moveGALSver();
    void moveCircle();
    void movePolyline();

    Move move{reight};
    MoveVer moveVer{up};
public slots:
    void setTimeModel(QString t);
    void updateBorder(qint8 minX, qint8 minY, qint8 maxX, qint8 maxY);
    void tick();
    void setAUV_XY(qint8 setX, qint8 setY);
    void tipeTrajectory(char tr);
    void updateGALSDist(float d);
    void setSpeed(float sp);
signals:
    void updateAUV(float X, float Y);
    void endMove(bool checked);
};

#endif // MOVEAUV_H
