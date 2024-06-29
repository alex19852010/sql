#ifndef ENTER_DATA_H
#define ENTER_DATA_H

#include <QWidget>
#include <QComboBox>
#include <QSqlQueryModel>

namespace Ui {
class enter_data;
}

class enter_data : public QWidget
{
    Q_OBJECT

public:
    explicit enter_data(QWidget *parent = nullptr);
    ~enter_data();

private:
    Ui::enter_data *ui;
    QSqlQueryModel *model2;
    QComboBox *cbo2;
};

#endif // ENTER_DATA_H