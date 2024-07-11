/********************************************************************************
** Form generated from reading UI file 'datainfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAINFO_H
#define UI_DATAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datainfo
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_5;

    void setupUi(QWidget *datainfo)
    {
        if (datainfo->objectName().isEmpty())
            datainfo->setObjectName(QString::fromUtf8("datainfo"));
        datainfo->resize(520, 372);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        datainfo->setFont(font);
        gridLayout = new QGridLayout(datainfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(datainfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 2, 7, 1);

        comboBox = new QComboBox(datainfo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        pushButton = new QPushButton(datainfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(datainfo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(datainfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(datainfo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        label = new QLabel(datainfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(datainfo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 5, 0, 1, 1);


        retranslateUi(datainfo);

        QMetaObject::connectSlotsByName(datainfo);
    } // setupUi

    void retranslateUi(QWidget *datainfo)
    {
        datainfo->setWindowTitle(QCoreApplication::translate("datainfo", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("datainfo", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton_4->setText(QCoreApplication::translate("datainfo", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("datainfo", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("datainfo", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label->setText(QCoreApplication::translate("datainfo", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\277\320\276 \320\276\320\261\321\212\320\265\320\272\321\202\320\260\320\274", nullptr));
        pushButton_5->setText(QCoreApplication::translate("datainfo", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datainfo: public Ui_datainfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAINFO_H
