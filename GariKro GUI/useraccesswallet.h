#ifndef USERACCESSWALLET_H
#define USERACCESSWALLET_H

#include <QDialog>

namespace Ui {
class UserAccessWallet;
}

class UserAccessWallet : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccessWallet(QWidget *parent = nullptr);
    ~UserAccessWallet();

private slots:
    void on_pushButton_CheckBalance_clicked();

    void on_pushButton_AddBalance_clicked();

private:
    Ui::UserAccessWallet *ui;
};

#endif // USERACCESSWALLET_H
