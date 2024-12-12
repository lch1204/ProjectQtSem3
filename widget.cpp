#include "widget.h"

#include <QDebug>
#include <QStackedWidget>

// using namespace;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    data = new GansData();

    latLineEdit->setText("20");
    longLineEdit->setText("40");
    depthLineEdit->setText("10");
    speedLineEdit->setText("1500");

    xminMLineEdit->setText("-50");
    xmaxMLineEdit->setText("50");
    yminMLineEdit->setText("-50");
    ymaxMLineEdit->setText("50");

    xModemLineEdit->setText("0");
    yModemLineEdit->setText("0");
    numberModemLineEdit->setText("0");
    numberDelModemLineEdit->setText("0");

    on_pbUpdate_clicked();

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
}


void Widget::on_pbSet_clicked()
{

}

