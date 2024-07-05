#include "change.h"
#include "ui_change.h"

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

    QString que2 = QString("UPDATE ЗСК SET дата_проверки = ? WHERE номер = ?");
    QSqlQuery *query= new QSqlQuery();
    query->prepare(que2);

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
