/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_H
#define UI_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_data
{
public:

    void setupUi(QWidget *data)
    {
        if (data->objectName().isEmpty())
            data->setObjectName(QString::fromUtf8("data"));
        data->resize(400, 300);

        retranslateUi(data);

        QMetaObject::connectSlotsByName(data);
    } // setupUi

    void retranslateUi(QWidget *data)
    {
        data->setWindowTitle(QCoreApplication::translate("data", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class data: public Ui_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_H
