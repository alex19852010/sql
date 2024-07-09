#include "delet.h"
#include "ui_delet.h"

delet::delet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delet)
{
    ui->setupUi(this);
    QStringList lst3;
    lst3  << "ЗСК" << "ТЦ" << "УС";
    ui->comboBox->addItems(lst3);
}

delet::~delet()
{
    delete ui;
}

void delet::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit_2->setText(ui->comboBox->itemText(index));
}

void delet::on_pushButton_clicked()
{
    QString tableName = ui->comboBox->currentText();
    QString que3 = QString("DELETE FROM %1 WHERE номер = ?").arg(tableName);
    QSqlQuery *query= new QSqlQuery();
    query->prepare(que3);
    qDebug() << ui->lineEdit_2->text();

    query->addBindValue(ui->lineEdit->text());

    QMessageBox *mes4 = new QMessageBox();

    if(!query->exec())
    {
      mes4->setText("ошибка, данные не удалены");
      mes4->show();
    }

    else
    {
        mes4->setText(" данные удалены успешно");
        mes4->show();
    }
}
