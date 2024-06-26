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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_datainfo
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *datainfo)
    {
        if (datainfo->objectName().isEmpty())
            datainfo->setObjectName(QString::fromUtf8("datainfo"));
        datainfo->resize(520, 372);
        gridLayout = new QGridLayout(datainfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(datainfo);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 2, 1, 1);

        pushButton = new QPushButton(datainfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        retranslateUi(datainfo);

        QMetaObject::connectSlotsByName(datainfo);
    } // setupUi

    void retranslateUi(QWidget *datainfo)
    {
        datainfo->setWindowTitle(QCoreApplication::translate("datainfo", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("datainfo", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class datainfo: public Ui_datainfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAINFO_H
