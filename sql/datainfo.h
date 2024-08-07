#ifndef DATAINFO_H
#define DATAINFO_H

#include <QWidget>

//#include <QSqlTableModel>
#include <QComboBox>
#include <QSqlQueryModel>
#include <enter_data.h>
#include <ui_enter_data.h>

namespace Ui {
class datainfo;
}

class datainfo : public QWidget
{
    Q_OBJECT

public:
    explicit datainfo(QWidget *parent = nullptr);
    ~datainfo();

    enter_data *enter;
    change *chan;
    delet *del;
    print *printer;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::datainfo *ui;
    QSqlQueryModel *model;
    QComboBox *cbo;
};

#endif // DATAINFO_H
