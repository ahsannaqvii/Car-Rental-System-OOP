#ifndef DRIVERLOGSIGN_H
#define DRIVERLOGSIGN_H

#include <QDialog>

namespace Ui {
class DriverLogSign;
}

class DriverLogSign : public QDialog
{
    Q_OBJECT

public:
    explicit DriverLogSign(QWidget *parent = nullptr);
    ~DriverLogSign();

public slots:
    void on_pushButton_Login1_clicked();

    void on_pushButton_Signup_clicked();

private:
    Ui::DriverLogSign *ui;
};

#endif // DRIVERLOGSIGN_H
