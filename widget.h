#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include "ui_widget.h"
#include "gansdata.h"


class Widget : public QWidget, private Ui::Widget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    GansData *data = nullptr;
    QPalette redPalette;
    QPalette mainPalette;
    QPalette lightPalette;

private slots:
    void on_setNewObjComboBox_textActivated(const QString &arg1);

    void on_trajectoryComboBox_textActivated(const QString &arg1);
    void on_changeMapComboBox_textActivated(const QString &arg1);
    void on_pbUpdate_clicked();
    void on_pbSet_clicked();
    void on_pbDel_clicked();
    void delModemMap(quint8 x, quint8 y);
    void on_pbSetAUV_toggled(bool checked);
    void on_pbStart_clicked(bool checked);
    void on_checkBoxIdael_clicked(bool checked);
    void on_distGALSLineEdit_editingFinished();

    void on_speedAUVLineEdit_editingFinished();

    void on_checkBoxShowXY_clicked(bool checked);



    void on_pushButtonTheme_clicked(bool checked);

    void on_pushButtonAbort_clicked();

    void on_cbReady_clicked(bool checked);

    void on_verticalSlider_sliderMoved(int position);


signals:
    void updateTrajectory(char regim);
    void updateGALSDist(float d);
    void updateSpeed(float sp);
    void modemData(float disp, float exp, float off, float var);
    void setModemForCalc(float x, float y);
};
#endif // WIDGET_H
