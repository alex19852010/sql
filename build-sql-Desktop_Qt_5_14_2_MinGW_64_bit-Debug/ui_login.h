/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(368, 315);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        login->setFont(font);
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_4 = new QLineEdit(login);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 9, 0, 1, 1);

        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 5, 0, 1, 1);

        pushButton = new QPushButton(login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 10, 0, 1, 1);

        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(login);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 7, 0, 1, 1);

        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_4 = new QLabel(login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 8, 0, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\320\241\320\276\320\265\320\264\320\265\320\275\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("login", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260 \320\221\320\224", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\320\230\320\274\321\217 \320\262\321\205\320\276\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\221\320\224", nullptr));
        label_4->setText(QCoreApplication::translate("login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
