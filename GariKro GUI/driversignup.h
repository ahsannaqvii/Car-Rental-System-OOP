#ifndef DRIVERSIGNUP_H
#define DRIVERSIGNUP_H

#include <QDialog>

namespace Ui {
class DriverSignUp;
}

class DriverSignUp : public QDialog
{
    Q_OBJECT

public:
    explicit DriverSignUp(QWidget *parent = nullptr);
    ~DriverSignUp();

public slots:

    void on_pushButton_Signup1_clicked();

private:
    Ui::DriverSignUp *ui;
};

#endif // DRIVERSIGNUP_H
