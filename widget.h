#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ui_widget.h"
#include "gansdata.h"


class Widget : public QWidget, private Ui::Widget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    GansData *data = nullptr;

private slots:
    void on_setNewObjComboBox_textActivated(const QString &arg1);

    void on_trajectoryComboBox_textActivated(const QString &arg1);
    void on_changeMapComboBox_textActivated(const QString &arg1);
    void on_pbUpdate_clicked();
    void on_pbSet_clicked();
    void on_pbDel_clicked();
    void delModemMap(quint8 x, quint8 y);
    void on_pbSetAUV_toggled(bool checked);
};
#endif // WIDGET_H
