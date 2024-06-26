#include "datainfo.h"
#include "ui_datainfo.h"


datainfo::datainfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::datainfo)
{
    ui->setupUi(this);
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

    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM ЗСК");

        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents();
        ui->tableView->show();


}
