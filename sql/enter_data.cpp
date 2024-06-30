#include "enter_data.h"
#include "ui_enter_data.h"

enter_data::enter_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::enter_data)
{
    ui->setupUi(this);
}

enter_data::~enter_data()
{
    delete ui;
}

void enter_data::on_pushButton_clicked()
{


    QSqlQuery *query = new QSqlQuery() ;
    query->prepare("INSERT INTO ЗСК (номер, объект, название, дата_проверки) VALUES (?, ?, ?, ?)");

        // Связывание значений с позициями
        query->addBindValue(ui->lineEdit->text());
        query->addBindValue(ui->lineEdit_2->text());
        query->addBindValue(ui->lineEdit_3->text());
        query->addBindValue(ui->lineEdit_4->text());

    QMessageBox *mes2 = new QMessageBox();

    if(!query->exec())
    {
      mes2->setText("ошибка данные не вставлены");
      mes2->show();
    }

    else
    {
        mes2->setText(" данные вставлены успешно");
        mes2->show();
    }

}
