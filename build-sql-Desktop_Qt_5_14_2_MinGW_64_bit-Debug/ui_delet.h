/********************************************************************************
** Form generated from reading UI file 'delet.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELET_H
#define UI_DELET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delet
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;

    void setupUi(QWidget *delet)
    {
        if (delet->objectName().isEmpty())
            delet->setObjectName(QString::fromUtf8("delet"));
        delet->resize(400, 300);
        gridLayout = new QGridLayout(delet);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(delet);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        comboBox = new QComboBox(delet);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        label = new QLabel(delet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(delet);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);

        pushButton = new QPushButton(delet);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(delet);

        QMetaObject::connectSlotsByName(delet);
    } // setupUi

    void retranslateUi(QWidget *delet)
    {
        delet->setWindowTitle(QCoreApplication::translate("delet", "Form", nullptr));
        label->setText(QCoreApplication::translate("delet", "\320\235\320\276\320\274\320\265\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("delet", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delet: public Ui_delet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELET_H
