#ifndef DATAINFO_H
#define DATAINFO_H

#include <QWidget>

//#include <QSqlTableModel>
#include <QComboBox>
#include <QSqlQueryModel>

namespace Ui {
class datainfo;
}

class datainfo : public QWidget
{
    Q_OBJECT

public:
    explicit datainfo(QWidget *parent = nullptr);
    ~datainfo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::datainfo *ui;
    QSqlQueryModel *model;
    QComboBox *cbo;
};

#endif // DATAINFO_H
