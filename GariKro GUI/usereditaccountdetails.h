#ifndef USEREDITACCOUNTDETAILS_H
#define USEREDITACCOUNTDETAILS_H

#include <QDialog>

namespace Ui {
class UserEditAccountDetails;
}

class UserEditAccountDetails : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditAccountDetails(QWidget *parent = nullptr);
    ~UserEditAccountDetails();

private slots:
    void on_pushButton_EditPhone_clicked();

    void on_pushButton_EditPassword_clicked();

    void on_pushButton_EditEmail_clicked();

private:
    Ui::UserEditAccountDetails *ui;
};

#endif // USEREDITACCOUNTDETAILS_H
