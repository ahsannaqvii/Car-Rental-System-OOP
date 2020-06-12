#ifndef DRIVERRECEIVEAMOUNT_H
#define DRIVERRECEIVEAMOUNT_H

#include <QDialog>

namespace Ui {
class DriverReceiveAmount;
}

class DriverReceiveAmount : public QDialog
{
    Q_OBJECT

public:
    explicit DriverReceiveAmount(QWidget *parent = nullptr);
    ~DriverReceiveAmount();
    int Amount_Recieved;
    int Cash_Back;

private slots:
    void on_pushButton_Continue_clicked();

    void on_pushButton_End_clicked();

private:
    Ui::DriverReceiveAmount *ui;
};

#endif // DRIVERRECEIVEAMOUNT_H
