#ifndef GANSDATA_H
#define GANSDATA_H

#include <QObject>

class GansData : public QObject
{
    Q_OBJECT
public:
    explicit GansData(QObject *parent = nullptr);

    void setAuqa(quint8 heightX,quint8 widthY)
    {
        height = heightX;
        width = widthY;
    }

    bool addModem(qint8 x, qint8 y,quint8 addres);

// private:
    quint8 height = 0;
    quint8 width = 0;

signals:
};

#endif // GANSDATA_H
