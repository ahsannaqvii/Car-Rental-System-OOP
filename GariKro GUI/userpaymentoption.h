#ifndef USERPAYMENTOPTION_H
#define USERPAYMENTOPTION_H

#include <QDialog>

namespace Ui {
class UserPaymentOption;
}

class UserPaymentOption : public QDialog
{
    Q_OBJECT

public:
    explicit UserPaymentOption(QWidget *parent = nullptr);
    ~UserPaymentOption();
    int PaymentOption = 0;                  //aggay kaam aega
    QString Payment_Type;

public slots:

    void on_pushButton_Cash_clicked();

    void on_pushButton_Wallet_clicked();

private:
    Ui::UserPaymentOption *ui;
};

#endif // USERPAYMENTOPTION_H
