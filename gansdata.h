#ifndef GANSDATA_H
#define GANSDATA_H

#include <QObject>
#include <QVector>

struct Modem
{
    qint8 x;
    qint8 y;
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

    void setAuqa(quint8 heightX,quint8 widthY)
    {
        height = heightX;
        width = widthY;
    }

    bool addModem(qint8 x, qint8 y,quint8 address);

    quint8 height = 0;
    quint8 width = 0;

    QVector<Modem> modems;

    void addModemVector(qint8 x, qint8 y, qint8 address);
    bool delModemVector(quint8 number);

signals:
    void dataModemDel(quint8 x, quint8 y);
};

#endif // GANSDATA_H
