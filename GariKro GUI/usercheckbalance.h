#ifndef USERCHECKBALANCE_H
#define USERCHECKBALANCE_H

#include <QDialog>

namespace Ui {
class UserCheckBalance;
}

class UserCheckBalance : public QDialog
{
    Q_OBJECT

public:
    explicit UserCheckBalance(QWidget *parent = nullptr);
    ~UserCheckBalance();

private slots:
    void on_pushButton_CheckBalance_clicked();

private:
    Ui::UserCheckBalance *ui;
};

#endif // USERCHECKBALANCE_H
