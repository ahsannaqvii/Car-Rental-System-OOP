#ifndef USERBILL_H
#define USERBILL_H

#include <QDialog>

namespace Ui {
class UserBill;
}

class UserBill : public QDialog
{
    Q_OBJECT

public:
    explicit UserBill(QWidget *parent = nullptr);
    ~UserBill();


public slots:
    void on_pushButton_CalculateFare_clicked();

private slots:
    void on_pushButton_Exit_clicked();

private:
    Ui::UserBill *ui;
};

#endif // USERBILL_H
