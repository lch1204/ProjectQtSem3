#include "modelmodem.h"
#include "qdebug.h"

ModelModem::ModelModem(QObject *parent)
    : QObject{parent}
{
    timeEl = new QElapsedTimer();
    timeTick = new QTimer();
    connect(timeTick, &QTimer::timeout, this, &ModelModem::tick);
    timeTick->setInterval(10);
    timeEl->start();
}

void ModelModem::calcTime()
{

}

void ModelModem::calcDist()
{

}

void ModelModem::tick()
{
    timeEl->elapsed();
    emit setTD(timeEl->elapsed()/1000, 1);
}

void ModelModem::modemData(float disp, float exp, float off, float var)
{
    dispersion = disp;
    expection = exp;
    offset = off;
    variation = var;
    qDebug() << "dispersion" << dispersion << "; expection" <<
        expection << "; offset" << offset << "; variation" << variation;
}
