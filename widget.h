#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ui_widget.h"


class Widget : public QWidget, private Ui::Widget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_setNewObjComboBox_textActivated(const QString &arg1);

    void on_trajectoryComboBox_textActivated(const QString &arg1);
    void on_changeMapComboBox_textActivated(const QString &arg1);
    void on_pbUpdate_clicked();
};
#endif // WIDGET_H
