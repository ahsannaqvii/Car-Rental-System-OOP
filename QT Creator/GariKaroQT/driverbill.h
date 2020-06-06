#ifndef DRIVERBILL_H
#define DRIVERBILL_H

#include <QDialog>

namespace Ui {
class DriverBill;
}

class DriverBill : public QDialog
{
    Q_OBJECT

public:
    explicit DriverBill(QWidget *parent = nullptr);
    ~DriverBill();

private slots:
    void on_pushButton_CalculateFare_clicked();

    void on_pushButton_RecieveAmount_clicked();

private:
    Ui::DriverBill *ui;
};

#endif // DRIVERBILL_H
