/********************************************************************************
** Form generated from reading UI file 'print.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_H
#define UI_PRINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_print
{
public:

    void setupUi(QWidget *print)
    {
        if (print->objectName().isEmpty())
            print->setObjectName(QString::fromUtf8("print"));
        print->resize(400, 300);

        retranslateUi(print);

        QMetaObject::connectSlotsByName(print);
    } // setupUi

    void retranslateUi(QWidget *print)
    {
        print->setWindowTitle(QCoreApplication::translate("print", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class print: public Ui_print {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_H
