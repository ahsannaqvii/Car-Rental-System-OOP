#ifndef USEREDITPASSWORD_H
#define USEREDITPASSWORD_H

#include <QDialog>

namespace Ui {
class UserEditPassword;
}

class UserEditPassword : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditPassword(QWidget *parent = nullptr);
    ~UserEditPassword();

private slots:
    void on_pushButton_EditPassword_clicked();

private:
    Ui::UserEditPassword *ui;
};

#endif // USEREDITPASSWORD_H
