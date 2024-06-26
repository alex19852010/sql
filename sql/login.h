#ifndef LOGIN_H
#define LOGIN_H

#include <datainfo.h>
#include <ui_datainfo.h>

#include <QWidget>
#include <QtSql>
#include <QMessageBox>


namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

datainfo *dates;

    QMessageBox *mes;
private slots:
    void on_pushButton_clicked();

private:
    Ui::login *ui;
    QSqlDatabase db;
};

#endif // LOGIN_H
