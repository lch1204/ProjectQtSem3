/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphform.h"
#include "mapgidroform.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *mission;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QToolBox *toolBox;
    QWidget *setAqua;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *Label_6;
    QLineEdit *latLineEdit;
    QLabel *Label_7;
    QLineEdit *longLineEdit;
    QLabel *depthLabel;
    QLineEdit *depthLineEdit;
    QLabel *speedLabel;
    QLineEdit *speedLineEdit;
    QPushButton *pbClear;
    QPushButton *pbUpdate;
    QWidget *setObject;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *maikFolder;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_10;
    QComboBox *setNewObjComboBox;
    QStackedWidget *stackedWidget;
    QWidget *modem;
    QVBoxLayout *verticalLayout_9;
    QFormLayout *formLayout;
    QLabel *xLabel;
    QLineEdit *xLineEdit;
    QLabel *yLabel;
    QLineEdit *yLineEdit;
    QPushButton *pbSet;
    QLabel *label;
    QLabel *Label;
    QLineEdit *numerModemLineEdit;
    QLabel *label_2;
    QPushButton *pbDel;
    QLineEdit *numberModemLineEdit;
    QLabel *Label_11;
    QWidget *auv;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_11;
    QFormLayout *formLayout_4;
    QLabel *xAUVLabel;
    QLineEdit *xAUVLineEdit;
    QLabel *yAUVLabel;
    QLineEdit *yAUVLineEdit;
    QLabel *psiLabel;
    QLineEdit *psiLineEdit;
    QPushButton *pbSetAUV;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *trajectoryComboBox;
    QStackedWidget *trajectoryStackedWidget;
    QWidget *galsTraj;
    QVBoxLayout *verticalLayout_12;
    QFormLayout *formLayout_5;
    QLabel *Label_8;
    QLineEdit *distGALSLineEdit;
    QWidget *cirlceTraj;
    QVBoxLayout *verticalLayout_14;
    QFormLayout *formLayout_6;
    QLabel *Label_10;
    QLineEdit *radiusLineEdit;
    QLabel *xLabel_2;
    QLineEdit *xCircleLineEdit;
    QLabel *yLabel_2;
    QLineEdit *yCircleLineEdit;
    QWidget *setAlgoritm;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pbOpen;
    QLineEdit *readFileLineEdit;
    QFormLayout *formLayout_2;
    QLabel *Label_2;
    QLineEdit *LineEdit;
    QLabel *Label_3;
    QLineEdit *LineEdit_2;
    QLabel *Label_4;
    QLineEdit *LineEdit_3;
    QLabel *Label_5;
    QLineEdit *LineEdit_4;
    QLabel *Label_9;
    QLineEdit *timeLineEdit;
    QCheckBox *checkBox;
    QWidget *diagn;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_17;
    QComboBox *changeMapComboBox;
    QPlainTextEdit *log;
    QStackedWidget *changeMapStackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_15;
    MapGidroForm *mapPage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_16;
    GraphForm *graphPage;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1044, 672);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(143, 240, 164, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(199, 247, 209, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(72, 120, 82, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(95, 160, 109, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush8(QColor(239, 239, 239, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush9(QColor(202, 202, 202, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        QBrush brush10(QColor(159, 159, 159, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        QBrush brush11(QColor(184, 184, 184, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush12(QColor(118, 118, 118, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        QBrush brush13(QColor(247, 247, 247, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush15(QColor(177, 177, 177, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        Widget->setPalette(palette);
        Widget->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_19 = new QVBoxLayout(Widget);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush16(QColor(153, 253, 217, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        tabWidget->setPalette(palette1);
        tabWidget->setFocusPolicy(Qt::TabFocus);
        tabWidget->setContextMenuPolicy(Qt::NoContextMenu);
        mission = new QWidget();
        mission->setObjectName(QString::fromUtf8("mission"));
        verticalLayout_7 = new QVBoxLayout(mission);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 9, 0, 0);
        pushButton = new QPushButton(mission);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(mission);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(mission);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(mission);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        label_6 = new QLabel(mission);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6, 0, Qt::AlignHCenter);

        checkBox_2 = new QCheckBox(mission);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_5->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(mission);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_5->addWidget(checkBox_3);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_2);

        toolBox = new QToolBox(mission);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        setAqua = new QWidget();
        setAqua->setObjectName(QString::fromUtf8("setAqua"));
        setAqua->setGeometry(QRect(0, 0, 381, 349));
        horizontalLayout_5 = new QHBoxLayout(setAqua);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        Label_6 = new QLabel(setAqua);
        Label_6->setObjectName(QString::fromUtf8("Label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Label_6);

        latLineEdit = new QLineEdit(setAqua);
        latLineEdit->setObjectName(QString::fromUtf8("latLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, latLineEdit);

        Label_7 = new QLabel(setAqua);
        Label_7->setObjectName(QString::fromUtf8("Label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, Label_7);

        longLineEdit = new QLineEdit(setAqua);
        longLineEdit->setObjectName(QString::fromUtf8("longLineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, longLineEdit);

        depthLabel = new QLabel(setAqua);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, depthLabel);

        depthLineEdit = new QLineEdit(setAqua);
        depthLineEdit->setObjectName(QString::fromUtf8("depthLineEdit"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, depthLineEdit);

        speedLabel = new QLabel(setAqua);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, speedLabel);

        speedLineEdit = new QLineEdit(setAqua);
        speedLineEdit->setObjectName(QString::fromUtf8("speedLineEdit"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, speedLineEdit);

        pbClear = new QPushButton(setAqua);
        pbClear->setObjectName(QString::fromUtf8("pbClear"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pbClear);

        pbUpdate = new QPushButton(setAqua);
        pbUpdate->setObjectName(QString::fromUtf8("pbUpdate"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pbUpdate);


        horizontalLayout_5->addLayout(formLayout_3);

        toolBox->addItem(setAqua, QString::fromUtf8("\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\272\320\262\320\260\321\202\320\276\321\200\320\270\320\270"));
        setObject = new QWidget();
        setObject->setObjectName(QString::fromUtf8("setObject"));
        setObject->setGeometry(QRect(0, 0, 381, 349));
        verticalLayout_8 = new QVBoxLayout(setObject);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        maikFolder = new QGroupBox(setObject);
        maikFolder->setObjectName(QString::fromUtf8("maikFolder"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        maikFolder->setPalette(palette2);
        QFont font;
        font.setPointSize(9);
        maikFolder->setFont(font);
        horizontalLayout_7 = new QHBoxLayout(maikFolder);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        horizontalLayout_7->addLayout(verticalLayout_3);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        setNewObjComboBox = new QComboBox(maikFolder);
        setNewObjComboBox->addItem(QString());
        setNewObjComboBox->addItem(QString());
        setNewObjComboBox->setObjectName(QString::fromUtf8("setNewObjComboBox"));

        verticalLayout_10->addWidget(setNewObjComboBox);

        stackedWidget = new QStackedWidget(maikFolder);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        modem = new QWidget();
        modem->setObjectName(QString::fromUtf8("modem"));
        verticalLayout_9 = new QVBoxLayout(modem);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        xLabel = new QLabel(modem);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, xLabel);

        xLineEdit = new QLineEdit(modem);
        xLineEdit->setObjectName(QString::fromUtf8("xLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, xLineEdit);

        yLabel = new QLabel(modem);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, yLabel);

        yLineEdit = new QLineEdit(modem);
        yLineEdit->setObjectName(QString::fromUtf8("yLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, yLineEdit);

        pbSet = new QPushButton(modem);
        pbSet->setObjectName(QString::fromUtf8("pbSet"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pbSet);

        label = new QLabel(modem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        Label = new QLabel(modem);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(7, QFormLayout::LabelRole, Label);

        numerModemLineEdit = new QLineEdit(modem);
        numerModemLineEdit->setObjectName(QString::fromUtf8("numerModemLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, numerModemLineEdit);

        label_2 = new QLabel(modem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_2);

        pbDel = new QPushButton(modem);
        pbDel->setObjectName(QString::fromUtf8("pbDel"));

        formLayout->setWidget(8, QFormLayout::FieldRole, pbDel);

        numberModemLineEdit = new QLineEdit(modem);
        numberModemLineEdit->setObjectName(QString::fromUtf8("numberModemLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, numberModemLineEdit);

        Label_11 = new QLabel(modem);
        Label_11->setObjectName(QString::fromUtf8("Label_11"));

        formLayout->setWidget(4, QFormLayout::LabelRole, Label_11);


        verticalLayout_9->addLayout(formLayout);

        stackedWidget->addWidget(modem);
        auv = new QWidget();
        auv->setObjectName(QString::fromUtf8("auv"));
        verticalLayout_13 = new QVBoxLayout(auv);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        xAUVLabel = new QLabel(auv);
        xAUVLabel->setObjectName(QString::fromUtf8("xAUVLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, xAUVLabel);

        xAUVLineEdit = new QLineEdit(auv);
        xAUVLineEdit->setObjectName(QString::fromUtf8("xAUVLineEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, xAUVLineEdit);

        yAUVLabel = new QLabel(auv);
        yAUVLabel->setObjectName(QString::fromUtf8("yAUVLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, yAUVLabel);

        yAUVLineEdit = new QLineEdit(auv);
        yAUVLineEdit->setObjectName(QString::fromUtf8("yAUVLineEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, yAUVLineEdit);

        psiLabel = new QLabel(auv);
        psiLabel->setObjectName(QString::fromUtf8("psiLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, psiLabel);

        psiLineEdit = new QLineEdit(auv);
        psiLineEdit->setObjectName(QString::fromUtf8("psiLineEdit"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, psiLineEdit);

        pbSetAUV = new QPushButton(auv);
        pbSetAUV->setObjectName(QString::fromUtf8("pbSetAUV"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, pbSetAUV);


        verticalLayout_11->addLayout(formLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(auv);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        trajectoryComboBox = new QComboBox(auv);
        trajectoryComboBox->addItem(QString());
        trajectoryComboBox->addItem(QString());
        trajectoryComboBox->addItem(QString());
        trajectoryComboBox->addItem(QString());
        trajectoryComboBox->setObjectName(QString::fromUtf8("trajectoryComboBox"));

        horizontalLayout_8->addWidget(trajectoryComboBox);


        verticalLayout_11->addLayout(horizontalLayout_8);


        verticalLayout_13->addLayout(verticalLayout_11);

        trajectoryStackedWidget = new QStackedWidget(auv);
        trajectoryStackedWidget->setObjectName(QString::fromUtf8("trajectoryStackedWidget"));
        galsTraj = new QWidget();
        galsTraj->setObjectName(QString::fromUtf8("galsTraj"));
        verticalLayout_12 = new QVBoxLayout(galsTraj);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        Label_8 = new QLabel(galsTraj);
        Label_8->setObjectName(QString::fromUtf8("Label_8"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, Label_8);

        distGALSLineEdit = new QLineEdit(galsTraj);
        distGALSLineEdit->setObjectName(QString::fromUtf8("distGALSLineEdit"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, distGALSLineEdit);


        verticalLayout_12->addLayout(formLayout_5);

        trajectoryStackedWidget->addWidget(galsTraj);
        cirlceTraj = new QWidget();
        cirlceTraj->setObjectName(QString::fromUtf8("cirlceTraj"));
        verticalLayout_14 = new QVBoxLayout(cirlceTraj);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        Label_10 = new QLabel(cirlceTraj);
        Label_10->setObjectName(QString::fromUtf8("Label_10"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, Label_10);

        radiusLineEdit = new QLineEdit(cirlceTraj);
        radiusLineEdit->setObjectName(QString::fromUtf8("radiusLineEdit"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, radiusLineEdit);

        xLabel_2 = new QLabel(cirlceTraj);
        xLabel_2->setObjectName(QString::fromUtf8("xLabel_2"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, xLabel_2);

        xCircleLineEdit = new QLineEdit(cirlceTraj);
        xCircleLineEdit->setObjectName(QString::fromUtf8("xCircleLineEdit"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, xCircleLineEdit);

        yLabel_2 = new QLabel(cirlceTraj);
        yLabel_2->setObjectName(QString::fromUtf8("yLabel_2"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, yLabel_2);

        yCircleLineEdit = new QLineEdit(cirlceTraj);
        yCircleLineEdit->setObjectName(QString::fromUtf8("yCircleLineEdit"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, yCircleLineEdit);


        verticalLayout_14->addLayout(formLayout_6);

        trajectoryStackedWidget->addWidget(cirlceTraj);

        verticalLayout_13->addWidget(trajectoryStackedWidget);

        stackedWidget->addWidget(auv);

        verticalLayout_10->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(verticalLayout_10);


        verticalLayout_8->addWidget(maikFolder);

        toolBox->addItem(setObject, QString::fromUtf8("\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\262"));
        setAlgoritm = new QWidget();
        setAlgoritm->setObjectName(QString::fromUtf8("setAlgoritm"));
        setAlgoritm->setGeometry(QRect(0, 0, 381, 349));
        horizontalLayout_4 = new QHBoxLayout(setAlgoritm);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(setAlgoritm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        label_4 = new QLabel(setAlgoritm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pbOpen = new QPushButton(setAlgoritm);
        pbOpen->setObjectName(QString::fromUtf8("pbOpen"));

        horizontalLayout_6->addWidget(pbOpen);

        readFileLineEdit = new QLineEdit(setAlgoritm);
        readFileLineEdit->setObjectName(QString::fromUtf8("readFileLineEdit"));

        horizontalLayout_6->addWidget(readFileLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(5);
        formLayout_2->setVerticalSpacing(5);
        Label_2 = new QLabel(setAlgoritm);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Label_2);

        LineEdit = new QLineEdit(setAlgoritm);
        LineEdit->setObjectName(QString::fromUtf8("LineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LineEdit);

        Label_3 = new QLabel(setAlgoritm);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Label_3);

        LineEdit_2 = new QLineEdit(setAlgoritm);
        LineEdit_2->setObjectName(QString::fromUtf8("LineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LineEdit_2);

        Label_4 = new QLabel(setAlgoritm);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, Label_4);

        LineEdit_3 = new QLineEdit(setAlgoritm);
        LineEdit_3->setObjectName(QString::fromUtf8("LineEdit_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, LineEdit_3);

        Label_5 = new QLabel(setAlgoritm);
        Label_5->setObjectName(QString::fromUtf8("Label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, Label_5);

        LineEdit_4 = new QLineEdit(setAlgoritm);
        LineEdit_4->setObjectName(QString::fromUtf8("LineEdit_4"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, LineEdit_4);

        Label_9 = new QLabel(setAlgoritm);
        Label_9->setObjectName(QString::fromUtf8("Label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, Label_9);

        timeLineEdit = new QLineEdit(setAlgoritm);
        timeLineEdit->setObjectName(QString::fromUtf8("timeLineEdit"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, timeLineEdit);


        verticalLayout_2->addLayout(formLayout_2);

        checkBox = new QCheckBox(setAlgoritm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox, 0, Qt::AlignHCenter);


        horizontalLayout_4->addLayout(verticalLayout_2);

        toolBox->addItem(setAlgoritm, QString::fromUtf8("\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\260"));

        verticalLayout_6->addWidget(toolBox);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 3);

        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidget->addTab(mission, QString());
        diagn = new QWidget();
        diagn->setObjectName(QString::fromUtf8("diagn"));
        verticalLayout_18 = new QVBoxLayout(diagn);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        changeMapComboBox = new QComboBox(diagn);
        changeMapComboBox->addItem(QString());
        changeMapComboBox->addItem(QString());
        changeMapComboBox->setObjectName(QString::fromUtf8("changeMapComboBox"));

        verticalLayout_17->addWidget(changeMapComboBox);

        log = new QPlainTextEdit(diagn);
        log->setObjectName(QString::fromUtf8("log"));

        verticalLayout_17->addWidget(log);


        verticalLayout_18->addLayout(verticalLayout_17);

        tabWidget->addTab(diagn, QString());

        horizontalLayout->addWidget(tabWidget);

        changeMapStackedWidget = new QStackedWidget(Widget);
        changeMapStackedWidget->setObjectName(QString::fromUtf8("changeMapStackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_15 = new QVBoxLayout(page);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        mapPage = new MapGidroForm(page);
        mapPage->setObjectName(QString::fromUtf8("mapPage"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        mapPage->setPalette(palette3);

        verticalLayout_15->addWidget(mapPage);

        changeMapStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_16 = new QVBoxLayout(page_2);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        graphPage = new GraphForm(page_2);
        graphPage->setObjectName(QString::fromUtf8("graphPage"));

        verticalLayout_16->addWidget(graphPage);

        changeMapStackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(changeMapStackedWidget);


        verticalLayout_19->addLayout(horizontalLayout);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);
        stackedWidget->setCurrentIndex(0);
        trajectoryStackedWidget->setCurrentIndex(0);
        changeMapStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\241\321\202\320\276\320\277", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\264\320\262\320\270\320\266\320\265\320\275\320\270\321\217", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Widget", "\320\241\320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "\320\230\320\264\320\265\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));
        Label_6->setText(QCoreApplication::translate("Widget", "\320\250\320\270\321\200\320\270\320\275\320\260, \320\274", nullptr));
        Label_7->setText(QCoreApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\260, \320\274", nullptr));
        depthLabel->setText(QCoreApplication::translate("Widget", "\320\223\320\273\321\203\320\261\320\270\320\275\320\260, \320\274", nullptr));
        speedLabel->setText(QCoreApplication::translate("Widget", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260, \320\274/\321\201", nullptr));
        pbClear->setText(QCoreApplication::translate("Widget", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pbUpdate->setText(QCoreApplication::translate("Widget", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(setAqua), QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\272\320\262\320\260\321\202\320\276\321\200\320\270\320\270", nullptr));
        setNewObjComboBox->setItemText(0, QCoreApplication::translate("Widget", "\320\234\320\276\320\264\320\265\320\274", nullptr));
        setNewObjComboBox->setItemText(1, QCoreApplication::translate("Widget", "\320\220\320\235\320\237\320\220", nullptr));

        xLabel->setText(QCoreApplication::translate("Widget", "X", nullptr));
        yLabel->setText(QCoreApplication::translate("Widget", "Y", nullptr));
        pbSet->setText(QCoreApplication::translate("Widget", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\274\320\276\320\264\320\265\320\274\320\260, \320\274", nullptr));
        Label->setText(QCoreApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\274\320\276\320\264\320\265\320\274\320\260, \320\274", nullptr));
        pbDel->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Label_11->setText(QCoreApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        xAUVLabel->setText(QCoreApplication::translate("Widget", "X", nullptr));
        yAUVLabel->setText(QCoreApplication::translate("Widget", "Y", nullptr));
        psiLabel->setText(QCoreApplication::translate("Widget", "\320\232\321\203\321\200\321\201", nullptr));
        pbSetAUV->setText(QCoreApplication::translate("Widget", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\320\242\321\200\320\260\320\265\320\272\321\202\320\276\321\200\320\270\321\217", nullptr));
        trajectoryComboBox->setItemText(0, QCoreApplication::translate("Widget", "\320\223\320\220\320\233\320\241 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        trajectoryComboBox->setItemText(1, QCoreApplication::translate("Widget", "\320\223\320\220\320\233\320\241 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        trajectoryComboBox->setItemText(2, QCoreApplication::translate("Widget", "\320\236\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        trajectoryComboBox->setItemText(3, QCoreApplication::translate("Widget", "\320\233\320\276\320\274\320\260\320\275\320\260\321\217", nullptr));

        Label_8->setText(QCoreApplication::translate("Widget", "\320\224\320\270\321\201\321\202\320\260\320\275\321\206\320\270\321\217 \320\274\320\265\320\266\320\264\321\203 \320\223\320\220\320\233\320\241", nullptr));
        Label_10->setText(QCoreApplication::translate("Widget", "\320\240\320\260\320\264\320\270\321\203\321\201", nullptr));
        xLabel_2->setText(QCoreApplication::translate("Widget", "\320\246\320\265\320\275\321\202\321\200 X", nullptr));
        yLabel_2->setText(QCoreApplication::translate("Widget", "\320\246\320\265\320\275\321\202\321\200 Y", nullptr));
        toolBox->setItemText(toolBox->indexOf(setObject), QCoreApplication::translate("Widget", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\276\320\261\321\212\320\265\320\272\321\202\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\321\205 ", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\264\320\273\321\217 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pbOpen->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        Label_2->setText(QCoreApplication::translate("Widget", "\320\234\320\260\321\202 \320\276\320\266\320\270\320\264\320\260\320\275\320\270\320\265", nullptr));
        Label_3->setText(QCoreApplication::translate("Widget", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217", nullptr));
        Label_4->setText(QCoreApplication::translate("Widget", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        Label_5->setText(QCoreApplication::translate("Widget", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\320\260\321\200\320\270\320\260\321\206\320\270\320\270", nullptr));
        Label_9->setText(QCoreApplication::translate("Widget", "\320\222\321\200\320\265\320\274\321\217 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\320\223\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\321\214 \320\272 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\216", nullptr));
        toolBox->setItemText(toolBox->indexOf(setAlgoritm), QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mission), QCoreApplication::translate("Widget", "\320\234\320\270\321\201\321\201\320\270\321\217", nullptr));
        changeMapComboBox->setItemText(0, QCoreApplication::translate("Widget", "\320\232\320\260\321\200\321\202\320\260", nullptr));
        changeMapComboBox->setItemText(1, QCoreApplication::translate("Widget", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(diagn), QCoreApplication::translate("Widget", "\320\224\320\270\320\260\320\263\320\275\320\276\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
