#include "gansdata.h"
#include "qdebug.h"

GansData::GansData(QObject *parent)
    : QObject{parent}
{}

bool GansData::addModem(qint8 x, qint8 y, quint8 address)
{
    if ((x <= height) && (y <= width))
    {
        counter +=1;
        addModemVector(x,y,address);
        return true;
    }
    else
        return false;
}

void GansData::addModemVector(qint8 x, qint8 y, qint8 address)
{
    numberFix += 1;
    qDebug() << "nomberFix" << numberFix;
    Modem newModem = {x, y, address, numberFix};
    modems.append(newModem);
}

bool GansData::delModemVector(quint8 number)
{
    quint8 size = modems.size();
    qDebug() << "size" << size;
    for (quint8 i = 0; i <size; i+=1)
    {
        Modem mod = modems.at(i);
        if (mod.nomberFix == number)
        {
            emit dataModemDel(mod.x, mod.y);
            modems.remove(i);
            counter -=1;
            return true;
        }
    }
    return false;
}
