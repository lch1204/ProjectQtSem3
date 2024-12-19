#ifndef GRAPHFORM_H
#define GRAPHFORM_H

#include "ui_mapgidroform.h"
#include <QWidget>
#include <QtCharts>


class GraphForm : public QWidget, public Ui::MapGidroForm
{
    Q_OBJECT

public:
    explicit GraphForm(QWidget *parent = nullptr);
    ~GraphForm();

    QValueAxis *tAxis = nullptr;
    QValueAxis *dAxis = nullptr;

    QHBoxLayout *hlay;
    QChartView * chartView;
    QChart *chart = nullptr;

    QLineSeries *graphModem = nullptr;

public slots:
    void setTD(double T, double D);
    void clearTD();
    void setTime(QString t);
};

#endif // GRAPHFORM_H
