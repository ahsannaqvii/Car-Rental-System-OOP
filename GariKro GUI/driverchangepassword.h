#ifndef DRIVERCHANGEPASSWORD_H
#define DRIVERCHANGEPASSWORD_H

#include <QDialog>

namespace Ui {
class DriverChangePassword;
}

class DriverChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit DriverChangePassword(QWidget *parent = nullptr);
    ~DriverChangePassword();

public slots:
    void on_pushButton_OK_clicked();

private:
    Ui::DriverChangePassword *ui;
};

#endif // DRIVERCHANGEPASSWORD_H
