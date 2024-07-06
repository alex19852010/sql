#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QtSql>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();

private slots:
    void on_dateEdit_dateChanged(const QDate &date);

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::change *ui;
};

#endif // CHANGE_H
