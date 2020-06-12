#ifndef PROMOCODEYES_H
#define PROMOCODEYES_H

#include <QDialog>

namespace Ui {
class PromocodeYes;
}

class PromocodeYes : public QDialog
{
    Q_OBJECT

public:
    explicit PromocodeYes(QWidget *parent = nullptr);
    ~PromocodeYes();
    QString PromoCode , Promo_Type;
    int Promo_Discount,tempDiscount,Promo_Validity;

public slots:
    void on_pushButton_OK_clicked();

private:
    Ui::PromocodeYes *ui;
};

#endif // PROMOCODEYES_H
