#include "change.h"
#include "ui_change.h"
#include <QDebug>

change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
    connect(ui->dateEdit, &QDateEdit::dateChanged, this, &change::on_dateEdit_dateChanged); // Подключение слота
    QStringList lst2;
    lst2  << "ЗСК" << "ТЦ" << "УС";
    ui->comboBox->addItems(lst2);

}

change::~change()
{
    delete ui;
}

void change::on_dateEdit_dateChanged(const QDate &date)
{
 ui->lineEdit_2->setText(date.toString("yyyy-MM-dd")); // Установка текста в QLineEdit в формате "yyyy-MM-dd"
}

void change::on_pushButton_clicked()
{
    QString tableName = ui->comboBox->currentText();
    QString que2 = QString("UPDATE %1 SET дата_проверки = ? WHERE номер = ?").arg(tableName);
    QSqlQuery *query= new QSqlQuery();
    query->prepare(que2);
    qDebug() << ui->lineEdit_3->text();

    query->addBindValue(ui->lineEdit_2->text());
    query->addBindValue(ui->lineEdit->text());

    QMessageBox *mes3 = new QMessageBox();

    if(!query->exec())
    {
      mes3->setText("ошибка, данные не изменены");
      mes3->show();
    }

    else
    {
        mes3->setText(" данные изменены успешно");
        mes3->show();
    }

}

void change::on_comboBox_currentIndexChanged(int index)
{
 ui->lineEdit_3->setText(ui->comboBox->itemText(index));
}
