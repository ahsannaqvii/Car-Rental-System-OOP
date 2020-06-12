#ifndef USEREDITPHONE_H
#define USEREDITPHONE_H

#include <QDialog>

namespace Ui {
class UserEditPhone;
}

class UserEditPhone : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditPhone(QWidget *parent = nullptr);
    ~UserEditPhone();

private slots:
    void on_pushButton_EditPhone_clicked();

private:
    Ui::UserEditPhone *ui;
};

#endif // USEREDITPHONE_H
