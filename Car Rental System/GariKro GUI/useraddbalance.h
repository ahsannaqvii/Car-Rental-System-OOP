#ifndef USERADDBALANCE_H
#define USERADDBALANCE_H

#include <QDialog>

namespace Ui {
class UserAddBalance;
}

class UserAddBalance : public QDialog
{
    Q_OBJECT

public:
    explicit UserAddBalance(QWidget *parent = nullptr);
    ~UserAddBalance();

private slots:
    void on_pushButton_clicked();

private:
    Ui::UserAddBalance *ui;
};

#endif // USERADDBALANCE_H
