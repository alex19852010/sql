#include "datainfo.h"
#include "ui_datainfo.h"
#include <QDebug>


datainfo::datainfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::datainfo)
{
    ui->setupUi(this);
    QStringList lst;
    lst << "ЗСК" << "ТЦ" << "УС";
    ui->comboBox->addItems(lst);
}

datainfo::~datainfo()
{
    delete ui;
}

void datainfo::on_pushButton_clicked()
{
//    model = new QSqlTableModel();
//    model->setTable("ЗСК");
//    model->select();

//    ui->tableView->setModel(model);
//    ui->tableView->resizeColumnsToContents();
//    ui->tableView->show();



//    model = new QSqlQueryModel();
//    model->setQuery("SELECT * FROM ЗСК");

//        ui->tableView->setModel(model);
//        ui->tableView->resizeColumnsToContents();
//        ui->tableView->show();

    QString tableName = ui->comboBox->currentText();
    QString query = QString("SELECT * FROM %1").arg(tableName);
    qDebug() << "Executing query:" << query;

    model = new QSqlQueryModel();
    model->setQuery(query);

    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->show();


}
