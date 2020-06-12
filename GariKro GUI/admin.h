#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>

namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();
    QString Username,Password;

public slots:

void on_pushButton_Login_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
