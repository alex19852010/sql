#ifndef ENTER_DATA_H
#define ENTER_DATA_H

#include <QWidget>
#include <QComboBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql>


namespace Ui {
class enter_data;
}

class enter_data : public QWidget
{
    Q_OBJECT

public:
    explicit enter_data(QWidget *parent = nullptr);
    ~enter_data();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_dateEdit_dateChanged(const QDate &date);

private:
    Ui::enter_data *ui;
    QComboBox *cbo2;
};

#endif // ENTER_DATA_H
