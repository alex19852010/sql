#include "enter_data.h"
#include "ui_enter_data.h"

enter_data::enter_data(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::enter_data)
{
    ui->setupUi(this);

    QStringList lst2;
    lst2  << "ЗСК" << "ТЦ" << "УС";
    ui->comboBox->addItems(lst2);
    QStringList lst3;
    lst3 << "МАНОМЕТР" << "ЭКМ" << "РП-160" << "САПФИР" << "БКС";
    ui->comboBox_2->addItems(lst3);
    ui->lineEdit_2->setText(ui->comboBox->currentText());
    ui->lineEdit_3->setText(ui->comboBox_2->currentText());
    connect(ui->dateEdit, &QDateEdit::dateChanged, this, &enter_data::on_dateEdit_dateChanged); // Подключение слота

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

void enter_data::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit_2->setText(ui->comboBox->itemText(index));

}

void enter_data::on_comboBox_2_currentIndexChanged(int index)
{
    ui->lineEdit_3->setText(ui->comboBox_2->itemText(index));
}

void enter_data::on_dateEdit_dateChanged(const QDate &date)
{
    ui->lineEdit_4->setText(date.toString("yyyy-MM-dd")); // Установка текста в QLineEdit в формате "yyyy-MM-dd"
}
