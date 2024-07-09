#ifndef DELET_H
#define DELET_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class delet;
}

class delet : public QWidget
{
    Q_OBJECT

public:
    explicit delet(QWidget *parent = nullptr);
    ~delet();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::delet *ui;
};

#endif // DELET_H
