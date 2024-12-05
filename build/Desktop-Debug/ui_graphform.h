/********************************************************************************
** Form generated from reading UI file 'graphform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHFORM_H
#define UI_GRAPHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphForm
{
public:

    void setupUi(QWidget *GraphForm)
    {
        if (GraphForm->objectName().isEmpty())
            GraphForm->setObjectName(QString::fromUtf8("GraphForm"));
        GraphForm->resize(711, 487);

        retranslateUi(GraphForm);

        QMetaObject::connectSlotsByName(GraphForm);
    } // setupUi

    void retranslateUi(QWidget *GraphForm)
    {
        GraphForm->setWindowTitle(QCoreApplication::translate("GraphForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphForm: public Ui_GraphForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHFORM_H
