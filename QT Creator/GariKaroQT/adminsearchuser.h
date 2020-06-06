#ifndef ADMINSEARCHUSER_H
#define ADMINSEARCHUSER_H

#include <QDialog>

namespace Ui {
class adminSearchUser;
}

class adminSearchUser : public QDialog
{
    Q_OBJECT

public:
    explicit adminSearchUser(QWidget *parent = nullptr);
    ~adminSearchUser();
    QString FirstName,LastName,Username,Password,Email,Wallet,Rating,Phone;

private slots:
void on_pushButton_Search_clicked();

void on_pushButton_Exit2_clicked();

private:
    Ui::adminSearchUser *ui;
};

#endif // ADMINSEARCHUSER_H
