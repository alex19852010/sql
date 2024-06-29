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
