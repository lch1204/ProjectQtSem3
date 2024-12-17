#include "moveauv.h"
#include <QDebug>

MoveAUV::MoveAUV(QObject *parent)
    : QObject{parent}
{
    time = new QTimer (this);
    connect(time,SIGNAL(timeout()), SLOT(tick()));
    dt = 1;
}

void MoveAUV::tick()
{
    X+=dt*0.01;
    Y+=dt*0.01;
    qDebug() << "X" << X << "; Y" << Y;
    emit updateAUV(X, Y);
}

void MoveAUV::setAUV_XY(qint8 setX, qint8 setY)
{

    X = setX;
    Y = setY;
}
