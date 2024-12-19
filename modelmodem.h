#ifndef MODELMODEM_H
#define MODELMODEM_H

#include <QObject>
#include <QTimer>
#include <QElapsedTimer>
#include "cmath"

class ModelModem : public QObject
{
    Q_OBJECT
public:
    explicit ModelModem(QObject *parent = nullptr);

    bool request = false;
    void calcTime();
    float calcDist();
    void tick();
    float dispersion = 0;
    float expection = 0;
    float offset = 0;
    float variation = 0;
    double timeCounter = 0;

    float xModem = 0;
    float yModem = 0;
    float xAUV =0;
    float yAUV = 0;

    QElapsedTimer *timeEl = nullptr;
    QTimer *timeTick;

signals:
    void setTD(double T, double D);
public slots:
    void modemData(float disp, float exp, float off, float var);
    void setModem(float x, float y);
    void setAUV(float x, float y);
};

#endif // MODELMODEM_H
