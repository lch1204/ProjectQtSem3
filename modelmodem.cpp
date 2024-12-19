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

float ModelModem::calcDist()
{
    // Вычисляем расстояние между точками
    float distance = std::sqrt(std::pow(xModem - xAUV, 2) + std::pow(yModem - yAUV, 2));
    qDebug() << "distance" << distance;
    // Применяем дисперсию
    float modifiedDistance = distance * dispersion;

    // Добавляем математическое ожидание
    modifiedDistance += expection;

    // Учитываем смещение
    modifiedDistance += offset;

    // Применяем коэффициент вариации
    modifiedDistance *= (1 + variation);

    return modifiedDistance;
}

void ModelModem::tick()
{
    qDebug() << "timeEl->elapsed()"<<timeEl->elapsed();
    timeCounter += 10;
    float dist = calcDist();

    emit setTD(timeCounter/1000, dist);
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

void ModelModem::setModem(float x, float y)
{
    xModem = x;
    yModem = y;
}

void ModelModem::setAUV(float x, float y)
{
    xAUV = x;
    yAUV = y;
}
