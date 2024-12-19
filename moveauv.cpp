#include "moveauv.h"
#include <QDebug>

MoveAUV::MoveAUV(QObject *parent)
    : QObject{parent}
{
    time = new QTimer (this);
    timeModel = new QTimer (this);
    connect(time,SIGNAL(timeout()), SLOT(tick()));
    dt = 1;
    time->setInterval(50);
    connect(timeModel, &QTimer::timeout, [this] {
        time->stop();
        timeModel->stop();
        emit endMove(false);
    });
}

void MoveAUV::moveGALSgor()
{
    if (move == Move::reight)
    {
        if (Y<Ymax)
        {
            Y+=dt*0.05*speed;
            if (Y>Ymax) Y = Ymax;
            fixX = X+distGALS;
        }
        else if (Y==Ymax)
        {
            if (X>=Xmax)
            {
                X = Xmax;
                time->stop();
                emit endMove(false);
                return;
            }
            if (X==fixX)
            {
                move = Move::left;
            }
            if (X<fixX)
            {
                X+=dt*0.05*speed;
                if (X>fixX)
                {
                    X=fixX;
                    move = Move::left;
                }

            }
        }
    }
    else if (move == Move::left)
    {
        if (Ymin<Y)
        {
            Y-=dt*0.05*speed;
            if (Ymin>Y) Y = Ymin;
            fixX = X+distGALS;
        }
        else if (Y==Ymin)
        {
            if (X>=Xmax)
            {
                X = Xmax;
                time->stop();
                emit endMove(false);
                return;
            }
            if (X==fixX)
            {
                move = Move::reight;
            }
            if (X<fixX)
            {
                X+=dt*0.05*speed;
                if (X>fixX)
                {
                    X=fixX;
                    move = Move::reight;
                }

            }
        }
    }
}

void MoveAUV::moveGALSver()
{
    if (moveVer == MoveVer::up)
    {
        qDebug() << "X" << X;
        if (X<Xmax)
        {
            X+=dt*0.05*speed;
            if (X>Xmax) X = Xmax;
            fixY = Y+distGALS;
        }
        else if (X==Xmax)
        {
            if (Y>=Ymax)
            {
                Y = Ymax;
                time->stop();
                emit endMove(false);
                return;
            }
            if (Y==fixY)
            {
                moveVer = MoveVer::down;
            }
            if (Y<fixY)
            {
                Y+=dt*0.05*speed;
                if (Y>fixY)
                {
                    Y=fixY;
                    moveVer = MoveVer::down;
                }

            }
        }
    }
    else if (moveVer == MoveVer::down)
    {
        if (Xmin<X)
        {
            X-=dt*0.05*speed;
            if (Xmin>X) X = Xmin;
            fixY = Y+distGALS;
        }
        else if (X==Xmin)
        {
            if (Y>=Ymax)
            {
                Y = Ymax;
                time->stop();
                emit endMove(false);
                return;
            }
            if (Y==fixY)
            {
                moveVer = MoveVer::up;
            }
            if (Y<fixY)
            {
                Y+=dt*0.05*speed;
                if (Y>fixY)
                {
                    Y=fixY;
                    moveVer = MoveVer::up;
                }

            }
        }
    }
}

void MoveAUV::moveCircle()
{

}

void MoveAUV::movePolyline()
{

}

void MoveAUV::setTimeModel(QString t)
{
    qDebug() << "time" << t;
    timeModel->setInterval(t.toFloat()*1000);
}

void MoveAUV::updateBorder(qint8 minX, qint8 minY, qint8 maxX, qint8 maxY)
{
    Xmin = minX;
    Xmax = maxX;
    Ymin = minY;
    Ymax = maxY;
    qDebug() << "Xmin" << Xmin << "; Xmax" << Xmax << "; Ymin" << Ymin << "; Ymax" << Ymax;
}

void MoveAUV::tick()
{
    switch (trajEnum)
    {
    case gorizont:
        moveGALSgor();
        break;
    case vertical:
        moveGALSver();
        break;
    case circle:
        moveCircle();
        break;
    case polyline:
        movePolyline();
        break;
    };
    // qDebug() << "X" << X << "; Y" << Y;
    emit updateAUV(Y, X);
}

void MoveAUV::setAUV_XY(qint8 setX, qint8 setY)
{

    Y =fixX = setX;
    X =fixY = setY;
    emit updateAUV(Y, X);
    qDebug() << "setAUV_XY X" << X << "; Y" << Y;
}

void MoveAUV::tipeTrajectory(char tr)
{
    qDebug() << "trajectory" << tr;
    trajectory = tr;
    if (trajectory == 'g')
    {
        trajEnum = tipeTr::gorizont;
    }
    else if (trajectory == 'v')
    {
        trajEnum = tipeTr::vertical;
    }
    else if (trajectory == 'o')
    {
        trajEnum = tipeTr::circle;
    }
    else if (trajectory == 'l')
    {
        trajEnum = tipeTr::polyline;
    }
}

void MoveAUV::updateGALSDist(float d)
{
    distGALS = d;
    qDebug() << "distGALS" << distGALS;
}

void MoveAUV::setSpeed(float sp)
{
    speed = sp;
}
