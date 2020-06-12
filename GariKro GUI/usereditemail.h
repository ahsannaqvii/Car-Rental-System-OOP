#ifndef USEREDITEMAIL_H
#define USEREDITEMAIL_H

#include <QDialog>

namespace Ui {
class UserEditEmail;
}

class UserEditEmail : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditEmail(QWidget *parent = nullptr);
    ~UserEditEmail();

private slots:
    void on_pushButton_EditEmail_clicked();

private:
    Ui::UserEditEmail *ui;
};

#endif // USEREDITEMAIL_H
