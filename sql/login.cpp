#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit_4->setEchoMode(QLineEdit::Password);
    mes = new QMessageBox();
}

login::~login()
{
    delete ui;
}
