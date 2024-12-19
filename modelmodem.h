#ifndef MODELMODEM_H
#define MODELMODEM_H

#include <QObject>
#include <QTimer>
#include <QElapsedTimer>

class ModelModem : public QObject
{
    Q_OBJECT
public:
    explicit ModelModem(QObject *parent = nullptr);

    bool request = false;
    void calcTime();
    void calcDist();
    void tick();
    float dispersion = 0;
    float expection = 0;
    float offset = 0;
    float variation = 0;

    QElapsedTimer *timeEl = nullptr;
    QTimer *timeTick;

signals:
    void setTD(double T, double D);
public slots:
    void modemData(float disp, float exp, float off, float var);
};

#endif // MODELMODEM_H
