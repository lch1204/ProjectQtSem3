/********************************************************************************
** Form generated from reading UI file 'mapgidroform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPGIDROFORM_H
#define UI_MAPGIDROFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapGidroForm
{
public:

    void setupUi(QWidget *MapGidroForm)
    {
        if (MapGidroForm->objectName().isEmpty())
            MapGidroForm->setObjectName(QString::fromUtf8("MapGidroForm"));
        MapGidroForm->resize(619, 550);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MapGidroForm->sizePolicy().hasHeightForWidth());
        MapGidroForm->setSizePolicy(sizePolicy);

        retranslateUi(MapGidroForm);

        QMetaObject::connectSlotsByName(MapGidroForm);
    } // setupUi

    void retranslateUi(QWidget *MapGidroForm)
    {
        MapGidroForm->setWindowTitle(QCoreApplication::translate("MapGidroForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapGidroForm: public Ui_MapGidroForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPGIDROFORM_H
