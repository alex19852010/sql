/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:
    QGridLayout *gridLayout;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QString::fromUtf8("change"));
        change->resize(362, 367);
        gridLayout = new QGridLayout(change);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEdit = new QDateEdit(change);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        dateEdit->setFont(font);

        gridLayout->addWidget(dateEdit, 1, 1, 1, 1);

        lineEdit = new QLineEdit(change);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        label = new QLabel(change);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        pushButton = new QPushButton(change);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(change);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);


        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Form", nullptr));
        label->setText(QCoreApplication::translate("change", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("change", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
