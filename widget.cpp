#include "widget.h"

#include <QDebug>
#include <QStackedWidget>

// using namespace;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    data = new GansData();

    latLineEdit->setText("40");
    longLineEdit->setText("40");
    depthLineEdit->setText("10");
    speedLineEdit->setText("1500");

    xminMLineEdit->setText("0");
    xmaxMLineEdit->setText("40");
    yminMLineEdit->setText("0");
    ymaxMLineEdit->setText("40");

    xModemLineEdit->setText("0");
    yModemLineEdit->setText("0");
    numberModemLineEdit->setText("0");
    numberDelModemLineEdit->setText("1");

    xAUVLineEdit->setText("0");
    yAUVLineEdit->setText("40");
    speedAUVLineEdit->setText("1");
    distGALSLineEdit->setText("1");

    on_pbUpdate_clicked();
    connect(data, &GansData::dataModemDel, this, &Widget::delModemMap);
    stackedWidget->setCurrentIndex(0);
}

Widget::~Widget()
{
}

void Widget::on_setNewObjComboBox_textActivated(const QString &arg1)
{
    if (arg1 == "Модем")
    {
        qDebug() << "Модем";
        stackedWidget->setCurrentIndex(0);
    }
    if (arg1 == "АНПА")
    {
        qDebug() << "АНПА";
        stackedWidget->setCurrentIndex(1);
    }

}


void Widget::on_trajectoryComboBox_textActivated(const QString &arg1)
{
    if (arg1 == "ГАЛС горизонтальный")
    {
        qDebug() << "ГАЛС горизонтальный";
        trajectoryStackedWidget->setCurrentIndex(0);
    }
    if (arg1 == "ГАЛС вертикальный")
    {
        qDebug() << "ГАЛС вертикальный";
        trajectoryStackedWidget->setCurrentIndex(0);
    }
    if (arg1 == "Окружность")
    {
        qDebug() << "Окружность";
        trajectoryStackedWidget->setCurrentIndex(1);
    }
    if (arg1 == "Ломаная")
    {
        qDebug() << "Ломаная";
        // stackedWidget->setCurrentIndex(0);
    }
}


void Widget::on_changeMapComboBox_textActivated(const QString &arg1)
{
    if (arg1 == "Карта")
    {
        qDebug() << "Карта";
        changeMapStackedWidget->setCurrentIndex(0);
    }
    if (arg1 == "График")
    {
        qDebug() << "График";
        changeMapStackedWidget->setCurrentIndex(1);
    }
}


void Widget::on_pbUpdate_clicked()
{
    qDebug() << "clicked update";
    QString xMin = xminMLineEdit->text();
    QString xMax = xmaxMLineEdit->text();
    QString yMin = yminMLineEdit->text();
    QString yMax = ymaxMLineEdit->text();

    mapPage->xAxis->setRange(xMin.toInt(),xMax.toInt());
    mapPage->yAxis->setRange(yMin.toInt(),yMax.toInt());

    QString height = latLineEdit->text();
    QString width = longLineEdit->text();
    data->setAuqa(height.toUInt(), width.toUInt());
    mapPage->setAuqa(height.toUInt(), width.toUInt());
    mapPage->updateZeroAxes();
}


void Widget::on_pbSet_clicked()
{
    QString x = xModemLineEdit->text();
    QString y = yModemLineEdit->text();
    QString address = numberModemLineEdit->text();
    if (x.toInt()>=0 and y.toInt()>=0)
    {
        bool addMod = data->addModem(x.toInt(), y.toInt(), address.toInt());
        if (addMod)
        {
            log->appendPlainText("addModem: x = " + x + "; y = " + y + "; address = " + address +"; number = " + QString::number(data->numberFix));
            mapPage->addMarker(y.toInt(), x.toInt());
            labelErrorSetModem->setText("Установлено!");
            labelErrorDelModem->setText("");
            labelErrorSetModem->setStyleSheet("color: black;");
            return;
        }
        else
        {
            labelErrorSetModem->setText("Дурак, дурак! Подумай ещё раз");
            labelErrorDelModem->setText("");
            labelErrorSetModem->setStyleSheet("color: red;");
            return;
        }
    }
    else
    {
        labelErrorSetModem->setText("Дурак, дурак! Подумай ещё раз");
        labelErrorDelModem->setText("");
        labelErrorSetModem->setStyleSheet("color: red;");
        return;
    }

}


void Widget::on_pbDel_clicked()
{
    QString number = numberDelModemLineEdit->text();
    bool delMod = data->delModemVector(number.toInt());
    if (delMod)
    {
        log->appendPlainText("delModem: number = " + number);
        labelErrorDelModem->setText("Удалено!");
        labelErrorSetModem->setText("");
        labelErrorDelModem->setStyleSheet("color: black;");
    }
    else
    {
        labelErrorSetModem->setText("");
        labelErrorDelModem->setText("Ну совсем дурак! Подумай ещё раз");
        labelErrorDelModem->setStyleSheet("color: red;");
    }
}

void Widget::delModemMap(quint8 x, quint8 y)
{
    mapPage->delMarker(y,x);
}




void Widget::on_pbSetAUV_toggled(bool checked)
{
    if (checked)
    {
        labelErrorStart1->setText("");
        labelErrorStart2->setText("");
        QString x = xAUVLineEdit->text();
        QString y = yAUVLineEdit->text();

        qDebug() << "checked" << checked;
        mapPage->addAUV(y.toInt(),x.toInt());
    }
    else
    {
        qDebug() << "checked" << checked;
        mapPage->delAUV();
    }
}





void Widget::on_pbStart_clicked(bool checked)
{
    if (checked)
    {
        if (pbSetAUV->isChecked())
        {
            qDebug() << "start";
            QString V = speedAUVLineEdit->text();
            mapPage->startMove(V.toInt());
            pbStart->setText("Стоп");

        }
        else
        {
            labelErrorStart1->setStyleSheet("color: red;");
            labelErrorStart1->setText("Дурак,");
            labelErrorStart2->setStyleSheet("color: red;");
            labelErrorStart2->setText("аппарат вначале задай");
            pbStart->setChecked(false);
        }
    }
    else
    {
        mapPage->stopMove();
        pbStart->setText("Старт");
    }
}




void Widget::on_checkBoxIdael_clicked(bool checked)
{
    if (checked)
    {

    }
}

