#include "widget.h"

#include <QDebug>
#include <QStackedWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    data = new GansData();

    latLineEdit->setText("40");
    longLineEdit->setText("50");
    depthLineEdit->setText("10");
    speedLineEdit->setText("1500");

    xminMLineEdit->setText("0");
    xmaxMLineEdit->setText("40");
    yminMLineEdit->setText("0");
    ymaxMLineEdit->setText("50");

    xModemLineEdit->setText("0");
    yModemLineEdit->setText("0");
    numberModemLineEdit->setText("0");
    numberDelModemLineEdit->setText("1");

    xAUVLineEdit->setText("0");
    yAUVLineEdit->setText("25");
    speedAUVLineEdit->setText("1");
    distGALSLineEdit->setText("1");

    LineEditDispersion->setText("1");
    LineEditExpection->setText("1");
    LineEditOffset->setText("1");
    LineEditVariation->setText("1");
    LineEditTime->setText("5");

    pushButtonTheme->setStyleSheet("QPushButton { border: none; outline: none; }");
    setFixedSize(1500, 900);


    on_pbUpdate_clicked();
    on_trajectoryComboBox_textActivated(0);
    connect(data, &GansData::dataModemDel, this, &Widget::delModemMap);
    stackedWidget->setCurrentIndex(0);

    redPalette.setColor(QPalette::Button, Qt::red);

    mainPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    mainPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    mainPalette.setColor(QPalette::WindowText, Qt::white);
    mainPalette.setColor(QPalette::Base, QColor(25, 25, 25));
    mainPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
    mainPalette.setColor(QPalette::ToolTipBase, Qt::white);
    mainPalette.setColor(QPalette::ToolTipText, Qt::white);
    mainPalette.setColor(QPalette::Text, Qt::white);
    mainPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    mainPalette.setColor(QPalette::ButtonText, Qt::white);
    mainPalette.setColor(QPalette::BrightText, Qt::red);
    mainPalette.setColor(QPalette::Link, QColor(42, 130, 218));
    mainPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
    mainPalette.setColor(QPalette::HighlightedText, Qt::black);

    lightPalette.setColor(QPalette::Button, QColor(127, 255, 212)); // Белые кнопки.setColor(QPalette::Button, QColor(255, 255, 255)); // Белые кнопки
    lightPalette.setColor(QPalette::Window, QColor(255, 255, 255)); // Светло-голубой фон окна.setColor(QPalette::Window, QColor(240, 248, 255)); // Светло-голубой фон окна
    lightPalette.setColor(QPalette::WindowText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст.setColor(QPalette::WindowText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст
    lightPalette.setColor(QPalette::Base, QColor(255, 255, 255)); // Белая основа.setColor(QPalette::Base, QColor(255, 255, 255)); // Белая основа
    lightPalette.setColor(QPalette::AlternateBase, QColor(240, 255, 255)); // Бело-голубая альтернатива.setColor(QPalette::AlternateBase, QColor(240, 255, 255)); // Бело-голубая альтернатива
    lightPalette.setColor(QPalette::ToolTipBase, QColor(255, 255, 255)); // Белый для подсказок.setColor(QPalette::ToolTipBase, QColor(255, 255, 255)); // Белый для подсказок
    lightPalette.setColor(QPalette::ToolTipText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст подсказок.setColor(QPalette::ToolTipText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст подсказок
    lightPalette.setColor(QPalette::Text, QColor(0, 51, 51)); // Текст.setColor(QPalette::Text, QColor(0, 51, 51)); // Текст
    lightPalette.setColor(QPalette::Button, QColor(127, 255, 212)); // Светло-голубые кнопки.setColor(QPalette::Button, QColor(240, 255, 255)); // Светло-голубые кнопки
    lightPalette.setColor(QPalette::ButtonText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст на кнопках.setColor(QPalette::ButtonText, QColor(0, 51, 51)); // Тёмно-аквамариновый текст на кнопках
    lightPalette.setColor(QPalette::BrightText, QColor(255, 69, 0)); // Яркий текст (например, предупреждения).setColor(QPalette::BrightText, QColor(255, 69, 0)); // Яркий текст (например, предупреждения)
    lightPalette.setColor(QPalette::Link, QColor(127, 255, 212)); // Аквамариновая ссылка.setColor(QPalette::Link, QColor(127, 255, 212)); // Аквамариновая ссылка
    lightPalette.setColor(QPalette::Highlight, QColor(127, 255, 212)); // Аквамариновое выделение.setColor(QPalette::Highlight, QColor(127, 255, 212)); // Аквамариновое выделение
    lightPalette.setColor(QPalette::HighlightedText, QColor(0, 0, 0)); // Чёрный текст на выделении.setColor(QPalette::HighlightedText, QColor(0, 0, 0)); // Чёрный текст на выделении

    setPalette(lightPalette);

//    mapPage->moveAUV.setTimeModel("5");
//    graphPage->setTime("5");

    ///прокидываем связь
    protocol = new Pult::PC_Protocol(ConfigFile,"pult");
    qDebug() << "---start exchange";

    sender_ip->setText(protocol->ip_sender().toString());
    sender_port->setNum(protocol->port_sender());
    receiver_port->setNum(protocol->port_receiver());
    receiver_ip->setText(protocol->ip_receiver().toString());
    qDebug() << "sender ip " << protocol->ip_sender();

    connect(&timer, &QTimer::timeout, this, &Widget::tick);



}

Widget::~Widget()
{
}

void Widget::tick()
{
    label_send->setNum(protocol->udpProtocol->counter_s);
    sendData();
    recieveData();

}


void Widget::sendData()
{
    protocol->send_data.data.startAlgorithm = startModeling;
}

void Widget::recieveData()
{
    mapPage->setVelocityVector_ekf(protocol->rec_data.payload.map.ekf_vx,
                                   protocol->rec_data.payload.map.ekf_vy);
    mapPage->setVelocityVector_real(protocol->rec_data.payload.map.real_vx,
                                   protocol->rec_data.payload.map.real_vy);
    mapPage->setCircle(protocol->rec_data.payload.map.circle_radius);
    mapPage->setXY_auv_ekf(protocol->rec_data.payload.map.ekf_x,
                           protocol->rec_data.payload.map.ekf_y);
    mapPage->setXY_auv_real(protocol->rec_data.payload.map.real_x,
                            protocol->rec_data.payload.map.real_y);
    qDebug() << "real_x" <<protocol->rec_data.payload.map.real_x;
    qDebug() << "real_y" <<protocol->rec_data.payload.map.real_y;
    qDebug() << "y" << protocol->rec_data.payload.graph.y;
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
        updateTrajectory('g');
    }
    if (arg1 == "ГАЛС вертикальный")
    {
        qDebug() << "ГАЛС вертикальный";
        trajectoryStackedWidget->setCurrentIndex(0);
        updateTrajectory('v');
    }
    if (arg1 == "Окружность")
    {
        qDebug() << "Окружность";
        trajectoryStackedWidget->setCurrentIndex(1);
        updateTrajectory('o');
    }
    if (arg1 == "Ломаная")
    {
        qDebug() << "Ломаная";
        updateTrajectory('l');
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
    qDebug() << "height" << height;
    QString width = longLineEdit->text();
    qDebug() << "width" << width;
    data->setAuqa(height.toUInt(), width.toUInt());
//    mapPage->setAuqa(height.toUInt(), width.toUInt());
//    mapPage->updateZeroAxes();
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
//            mapPage->addMarker(x.toInt(), y.toInt());
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

void Widget::delModemMap(double x, double y)
{
}




void Widget::on_pbSetAUV_toggled(bool checked)
{
    QString x = xAUVLineEdit->text();
    QString y = yAUVLineEdit->text();
    if (checked)
    {
        qDebug() << "checked" << checked;
    }
    else
    {
        qDebug() << "checked" << checked;
    }
    ///для передачи в модель
    emit setModemForCalc(x.toFloat(), y.toFloat());
}





void Widget::on_pbStart_clicked(bool checked)
{
    if (checked)
    {
        if (pbSetAUV->isChecked())
        {
            qDebug() << "start";
            QString V = speedAUVLineEdit->text();
//            mapPage->startMove();
            pbStart->setText("Стоп");
            pbSetAUV->setEnabled(false);
            pbStart->setPalette(redPalette);

        }
        else
        {
            pbStart->setChecked(false);
            pbSetAUV->setEnabled(true);
            pbStart->setPalette(tabWidget->palette());
        }
    }
    else
    {
//        mapPage->stopMove();
        pbStart->setText("Старт");
        pbStart->setChecked(false);
        pbSetAUV->setEnabled(true);
        pbStart->setPalette(tabWidget->palette());
    }
}




void Widget::on_checkBoxIdael_clicked(bool checked)
{
    if (checked)
    {
//        mapPage->trajectoryAUV->show();
    }
    else
    {
//        mapPage->trajectoryAUV->hide();
    }
}


void Widget::on_distGALSLineEdit_editingFinished()
{
    QString str = distGALSLineEdit->text();
    emit updateGALSDist(str.toFloat());
}


void Widget::on_speedAUVLineEdit_editingFinished()
{
    QString str = speedAUVLineEdit->text();
    emit updateSpeed(str.toFloat());
}


void Widget::on_checkBoxShowXY_clicked(bool checked)
{
    if (checked)
    {
//        mapPage->zeroAxisX->show();
//        mapPage->zeroAxisY->show();
    }
    else
    {
//        mapPage->zeroAxisX->hide();
//        mapPage->zeroAxisY->hide();
    }
}


void Widget::on_pushButtonTheme_clicked(bool checked)
{
    if (!checked)
    {
        setPalette(lightPalette);
        mapPage->xAxis->setTitleBrush(QBrush(Qt::black));
        mapPage->yAxis->setTitleBrush(QBrush(Qt::black));
        mapPage->xAxis->setLabelsBrush(QBrush(Qt::black));
        mapPage->yAxis->setLabelsBrush(QBrush(Qt::black));
        mapPage->chart->setBackgroundBrush(QBrush(Qt::white));

        graphPage->xAxis->setTitleBrush(QBrush(Qt::black));
        graphPage->yAxis->setTitleBrush(QBrush(Qt::black));
        graphPage->xAxis->setLabelsBrush(QBrush(Qt::black));
        graphPage->yAxis->setLabelsBrush(QBrush(Qt::black));
        graphPage->chart->setBackgroundBrush(QBrush(Qt::white));
    }
    else
    {
        setPalette(mainPalette);
        mapPage->xAxis->setTitleBrush(QBrush(Qt::white));
        mapPage->yAxis->setTitleBrush(QBrush(Qt::white));
        mapPage->xAxis->setLabelsBrush(QBrush(Qt::white));
        mapPage->yAxis->setLabelsBrush(QBrush(Qt::white));
        mapPage->chart->setBackgroundBrush(QColor(53, 53, 53));

        graphPage->xAxis->setTitleBrush(QBrush(Qt::white));
        graphPage->yAxis->setTitleBrush(QBrush(Qt::white));
        graphPage->xAxis->setLabelsBrush(QBrush(Qt::white));
        graphPage->yAxis->setLabelsBrush(QBrush(Qt::white));
        graphPage->chart->setBackgroundBrush(QColor(53, 53, 53));
    }
}


void Widget::on_pushButtonAbort_clicked()
{
    qDebug() << pbStart->isChecked();
    if (pbStart->isChecked())
    {
        qDebug() << "pbStart->isCheckable";
        pbStart->setChecked(false);
        on_pbStart_clicked(false);
        pbSetAUV->setChecked(false);
    }
    pbSetAUV->setChecked(false);
//    graphPage->clearTD();
//    mapPage->modelModem.timeCounter = 0;
}


void Widget::on_cbReady_clicked(bool checked)
{
    if (checked)
    {
//        QString disp = LineEditDispersion->text();
//        QString exp  = LineEditExpection->text();
//        QString off  = LineEditOffset->text();
//        QString var  = LineEditVariation->text();
//        emit modemData(disp.toFloat(), exp.toFloat(), off.toFloat(), var.toFloat());
        startModeling = true;

    }
    else
    {
        startModeling = false;
    }
}


void Widget::on_verticalSlider_sliderMoved(int position)
{
    qDebug() << "position"<<position;
//    graphPage->dAxis->setRange(0,position);
}



void Widget::on_pushButton_connect_clicked(bool checked)
{
    if (checked)
    {
        pushButton_connect->setText("Отключить");
        timer.start(1000/t);
        protocol->udpProtocol->frequency = t;
        protocol->startExchange();
    }
    else
    {
        pushButton_connect->setText("Подключить");
        timer.stop();
        counter_resive = 0;
        counter_send = 0;
        protocol->stopExhange();
    }
}


void Widget::on_spinBox_valueChanged(int arg1)
{
    t = arg1;
    counter_resive = 0;
    counter_send = 0;
}

