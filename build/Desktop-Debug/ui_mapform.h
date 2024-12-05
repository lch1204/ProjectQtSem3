/********************************************************************************
** Form generated from reading UI file 'mapform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPFORM_H
#define UI_MAPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapForm
{
public:

    void setupUi(QWidget *MapForm)
    {
        if (MapForm->objectName().isEmpty())
            MapForm->setObjectName(QString::fromUtf8("MapForm"));
        MapForm->setEnabled(true);
        MapForm->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MapForm->sizePolicy().hasHeightForWidth());
        MapForm->setSizePolicy(sizePolicy);
        MapForm->setMinimumSize(QSize(400, 300));
        MapForm->setMaximumSize(QSize(400, 300));
        QPalette palette;
        QBrush brush(QColor(98, 160, 234, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush1(QColor(48, 140, 198, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        QBrush brush2(QColor(145, 145, 145, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
        MapForm->setPalette(palette);

        retranslateUi(MapForm);

        QMetaObject::connectSlotsByName(MapForm);
    } // setupUi

    void retranslateUi(QWidget *MapForm)
    {
        MapForm->setWindowTitle(QCoreApplication::translate("MapForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapForm: public Ui_MapForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPFORM_H
