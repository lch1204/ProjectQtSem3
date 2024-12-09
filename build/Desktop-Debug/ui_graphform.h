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
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphForm
{
public:
    QLabel *label;

    void setupUi(QWidget *GraphForm)
    {
        if (GraphForm->objectName().isEmpty())
            GraphForm->setObjectName(QString::fromUtf8("GraphForm"));
        GraphForm->resize(711, 487);
        label = new QLabel(GraphForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 170, 281, 81));

        retranslateUi(GraphForm);

        QMetaObject::connectSlotsByName(GraphForm);
    } // setupUi

    void retranslateUi(QWidget *GraphForm)
    {
        GraphForm->setWindowTitle(QCoreApplication::translate("GraphForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("GraphForm", "\320\242\321\203\321\202 \320\261\321\203\320\264\320\265\321\202 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphForm: public Ui_GraphForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHFORM_H
