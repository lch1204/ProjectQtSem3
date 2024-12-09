#include "widget.h"

#include <QDebug>
#include <QStackedWidget>

// using namespace;
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

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
    QString lat = latLineEdit->text();
    QString longg = longLineEdit->text();
    mapPage->xAxis->setRange(0,lat.toInt());
    mapPage->yAxis->setRange(0,longg.toInt());

}

