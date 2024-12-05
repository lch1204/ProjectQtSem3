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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mapgidroform.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
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
    QLabel *label_6;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QToolBox *toolBox;
    QWidget *mapFolder;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *log;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *maikFolder;
    QHBoxLayout *mapControl;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pbUpdate;
    QPushButton *pbClear;
    QSpacerItem *verticalSpacer;
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
    QWidget *page;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
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
    QComboBox *comboBox;
    QLabel *label_5;
    QCheckBox *checkBox;
    QWidget *page_3;
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
    QWidget *diagn;
    MapGidroForm *widget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(927, 593);
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
        Widget->setCursor(QCursor(Qt::UpArrowCursor));
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QPalette palette1;
        QBrush brush16(QColor(153, 253, 217, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        tabWidget->setPalette(palette1);
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
        mapFolder = new QWidget();
        mapFolder->setObjectName(QString::fromUtf8("mapFolder"));
        mapFolder->setGeometry(QRect(0, 0, 277, 255));
        horizontalLayout_3 = new QHBoxLayout(mapFolder);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        log = new QPlainTextEdit(mapFolder);
        log->setObjectName(QString::fromUtf8("log"));

        horizontalLayout_3->addWidget(log);

        toolBox->addItem(mapFolder, QString::fromUtf8("\320\233\320\276\320\263"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 283, 241));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        maikFolder = new QGroupBox(page_2);
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
        mapControl = new QHBoxLayout(maikFolder);
        mapControl->setObjectName(QString::fromUtf8("mapControl"));
        mapControl->setContentsMargins(1, -1, -1, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pbUpdate = new QPushButton(maikFolder);
        pbUpdate->setObjectName(QString::fromUtf8("pbUpdate"));

        verticalLayout_3->addWidget(pbUpdate);

        pbClear = new QPushButton(maikFolder);
        pbClear->setObjectName(QString::fromUtf8("pbClear"));

        verticalLayout_3->addWidget(pbClear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        mapControl->addLayout(verticalLayout_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setVerticalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        xLabel = new QLabel(maikFolder);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, xLabel);

        xLineEdit = new QLineEdit(maikFolder);
        xLineEdit->setObjectName(QString::fromUtf8("xLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, xLineEdit);

        yLabel = new QLabel(maikFolder);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, yLabel);

        yLineEdit = new QLineEdit(maikFolder);
        yLineEdit->setObjectName(QString::fromUtf8("yLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, yLineEdit);

        pbSet = new QPushButton(maikFolder);
        pbSet->setObjectName(QString::fromUtf8("pbSet"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pbSet);

        label = new QLabel(maikFolder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label);

        Label = new QLabel(maikFolder);
        Label->setObjectName(QString::fromUtf8("Label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, Label);

        numerModemLineEdit = new QLineEdit(maikFolder);
        numerModemLineEdit->setObjectName(QString::fromUtf8("numerModemLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, numerModemLineEdit);

        label_2 = new QLabel(maikFolder);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_2);

        pbDel = new QPushButton(maikFolder);
        pbDel->setObjectName(QString::fromUtf8("pbDel"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pbDel);


        mapControl->addLayout(formLayout);


        verticalLayout_8->addWidget(maikFolder);

        toolBox->addItem(page_2, QString::fromUtf8("\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\274\320\260\321\217\320\272\320\276\320\262"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_4 = new QHBoxLayout(page);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pbOpen = new QPushButton(page);
        pbOpen->setObjectName(QString::fromUtf8("pbOpen"));

        horizontalLayout_6->addWidget(pbOpen);

        readFileLineEdit = new QLineEdit(page);
        readFileLineEdit->setObjectName(QString::fromUtf8("readFileLineEdit"));

        horizontalLayout_6->addWidget(readFileLineEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(5);
        formLayout_2->setVerticalSpacing(5);
        Label_2 = new QLabel(page);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, Label_2);

        LineEdit = new QLineEdit(page);
        LineEdit->setObjectName(QString::fromUtf8("LineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, LineEdit);

        Label_3 = new QLabel(page);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Label_3);

        LineEdit_2 = new QLineEdit(page);
        LineEdit_2->setObjectName(QString::fromUtf8("LineEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, LineEdit_2);

        Label_4 = new QLabel(page);
        Label_4->setObjectName(QString::fromUtf8("Label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, Label_4);

        LineEdit_3 = new QLineEdit(page);
        LineEdit_3->setObjectName(QString::fromUtf8("LineEdit_3"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, LineEdit_3);

        Label_5 = new QLabel(page);
        Label_5->setObjectName(QString::fromUtf8("Label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, Label_5);

        LineEdit_4 = new QLineEdit(page);
        LineEdit_4->setObjectName(QString::fromUtf8("LineEdit_4"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, LineEdit_4);

        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox);

        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);


        verticalLayout_2->addLayout(formLayout_2);

        checkBox = new QCheckBox(page);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox, 0, Qt::AlignHCenter);


        horizontalLayout_4->addLayout(verticalLayout_2);

        toolBox->addItem(page, QString::fromUtf8("\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\260"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_5 = new QHBoxLayout(page_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        Label_6 = new QLabel(page_3);
        Label_6->setObjectName(QString::fromUtf8("Label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, Label_6);

        latLineEdit = new QLineEdit(page_3);
        latLineEdit->setObjectName(QString::fromUtf8("latLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, latLineEdit);

        Label_7 = new QLabel(page_3);
        Label_7->setObjectName(QString::fromUtf8("Label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, Label_7);

        longLineEdit = new QLineEdit(page_3);
        longLineEdit->setObjectName(QString::fromUtf8("longLineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, longLineEdit);

        depthLabel = new QLabel(page_3);
        depthLabel->setObjectName(QString::fromUtf8("depthLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, depthLabel);

        depthLineEdit = new QLineEdit(page_3);
        depthLineEdit->setObjectName(QString::fromUtf8("depthLineEdit"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, depthLineEdit);

        speedLabel = new QLabel(page_3);
        speedLabel->setObjectName(QString::fromUtf8("speedLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, speedLabel);

        speedLineEdit = new QLineEdit(page_3);
        speedLineEdit->setObjectName(QString::fromUtf8("speedLineEdit"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, speedLineEdit);


        horizontalLayout_5->addLayout(formLayout_3);

        toolBox->addItem(page_3, QString::fromUtf8("\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\272\320\262\320\260\321\202\320\276\321\200\320\270\320\270"));

        verticalLayout_6->addWidget(toolBox);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 3);

        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidget->addTab(mission, QString());
        diagn = new QWidget();
        diagn->setObjectName(QString::fromUtf8("diagn"));
        tabWidget->addTab(diagn, QString());

        horizontalLayout->addWidget(tabWidget);

        widget = new MapGidroForm(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
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
        widget->setPalette(palette3);

        horizontalLayout->addWidget(widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(1);


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
        toolBox->setItemText(toolBox->indexOf(mapFolder), QCoreApplication::translate("Widget", "\320\233\320\276\320\263", nullptr));
        pbUpdate->setText(QCoreApplication::translate("Widget", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        pbClear->setText(QCoreApplication::translate("Widget", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        xLabel->setText(QCoreApplication::translate("Widget", "X", nullptr));
        yLabel->setText(QCoreApplication::translate("Widget", "Y", nullptr));
        pbSet->setText(QCoreApplication::translate("Widget", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\260 \320\274\320\276\320\264\320\265\320\274\320\260, \320\274", nullptr));
        Label->setText(QCoreApplication::translate("Widget", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\274\320\276\320\264\320\265\320\274\320\260, \320\274", nullptr));
        pbDel->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("Widget", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\274\320\260\321\217\320\272\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\213\321\205 ", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\264\320\273\321\217 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pbOpen->setText(QCoreApplication::translate("Widget", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        Label_2->setText(QCoreApplication::translate("Widget", "\320\234\320\260\321\202 \320\276\320\266\320\270\320\264\320\260\320\275\320\270\320\265", nullptr));
        Label_3->setText(QCoreApplication::translate("Widget", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217", nullptr));
        Label_4->setText(QCoreApplication::translate("Widget", "\320\241\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        Label_5->setText(QCoreApplication::translate("Widget", "\320\232\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202 \320\262\320\260\321\200\320\270\320\260\321\206\320\270\320\270", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "\320\223\320\220\320\233\320\241 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "\320\223\320\220\320\233\320\241 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "\320\236\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "\320\233\320\276\320\274\320\260\320\275\320\260\321\217", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\320\242\321\200\320\260\320\265\320\272\321\202\320\276\321\200\320\270\321\217", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\320\223\320\276\321\202\320\276\320\262\320\275\320\276\321\201\321\202\321\214 \320\272 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\216", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\260", nullptr));
        Label_6->setText(QCoreApplication::translate("Widget", "\320\250\320\270\321\200\320\270\320\275\320\260, \320\274", nullptr));
        Label_7->setText(QCoreApplication::translate("Widget", "\320\224\320\273\320\270\320\275\320\260, \320\274", nullptr));
        depthLabel->setText(QCoreApplication::translate("Widget", "\320\223\320\273\321\203\320\261\320\270\320\275\320\260, \320\274", nullptr));
        speedLabel->setText(QCoreApplication::translate("Widget", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\267\320\262\321\203\320\272\320\260, \320\274/\321\201", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("Widget", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\260\320\272\320\262\320\260\321\202\320\276\321\200\320\270\320\270", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(mission), QCoreApplication::translate("Widget", "\320\234\320\270\321\201\321\201\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(diagn), QCoreApplication::translate("Widget", "\320\224\320\270\320\260\320\263\320\275\320\276\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
