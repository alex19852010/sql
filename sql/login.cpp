#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    mes = new QMessageBox();
    ui->lineEdit->setText("WIN-5TJS7JUL0GS\\SQLEXPRESS");
    ui->lineEdit_2->setText("equipment");
    ui->lineEdit_3->setText("FANAT");

}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={SQL server};SERVER=" + ui->lineEdit->text() + ";DATABASE=" + ui->lineEdit_2->text() + ";");
    db.setUserName(ui->lineEdit_3->text());
    db.setPassword(ui->lineEdit_4->text());

    if(db.open())
    {
       mes->setText("соеденение прошло успешно");
       this->hide();
       dates = new datainfo();
       dates->show();

    }

    else
    {
        mes->setText("соеденение не установлено");
    }

    mes->show();
}
