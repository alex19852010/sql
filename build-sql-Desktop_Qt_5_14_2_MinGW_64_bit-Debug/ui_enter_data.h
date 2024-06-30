/********************************************************************************
** Form generated from reading UI file 'enter_data.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_DATA_H
#define UI_ENTER_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enter_data
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QDateEdit *dateEdit;

    void setupUi(QWidget *enter_data)
    {
        if (enter_data->objectName().isEmpty())
            enter_data->setObjectName(QString::fromUtf8("enter_data"));
        enter_data->resize(420, 323);
        gridLayout = new QGridLayout(enter_data);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(enter_data);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label_3 = new QLabel(enter_data);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(enter_data);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_4, 7, 0, 1, 1);

        label_2 = new QLabel(enter_data);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_4 = new QLabel(enter_data);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        pushButton = new QPushButton(enter_data);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);

        label = new QLabel(enter_data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(enter_data);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(enter_data);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_3, 5, 0, 1, 1);

        comboBox = new QComboBox(enter_data);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 3, 1, 1, 1);

        dateEdit = new QDateEdit(enter_data);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 7, 1, 1, 1);


        retranslateUi(enter_data);

        QMetaObject::connectSlotsByName(enter_data);
    } // setupUi

    void retranslateUi(QWidget *enter_data)
    {
        enter_data->setWindowTitle(QCoreApplication::translate("enter_data", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("enter_data", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("enter_data", "\320\236\320\261\321\212\320\265\320\272\321\202", nullptr));
        label_4->setText(QCoreApplication::translate("enter_data", "\320\264\320\260\321\202\320\260 \320\277\321\200\320\276\320\262\320\265\321\200\320\272\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("enter_data", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("enter_data", "\320\235\320\276\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enter_data: public Ui_enter_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_DATA_H
