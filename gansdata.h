#ifndef GANSDATA_H
#define GANSDATA_H

#include <QObject>
#include <QVector>

struct Modem
{
    double x;
    double y;
    qint8 address;
    quint8 nomberFix;
};

class GansData : public QObject
{
    Q_OBJECT
public:
    explicit GansData(QObject *parent = nullptr);

    quint8 counter = 0;
    quint8 numberFix = 0;

    quint8 returnCount()
    {
        return counter;
    }

    void setAuqa(double heightX,double widthY)
    {
        height = heightX;
        width = widthY;
    }

    bool addModem(double x, double y,quint8 address);

    double height = 0;
    double width = 0;

    QVector<Modem> modems;

    void addModemVector(double x, double y, qint8 address);
    bool delModemVector(quint8 number);

signals:
    void dataModemDel(double x, double y);
};

#endif // GANSDATA_H
