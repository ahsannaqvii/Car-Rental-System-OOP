#include "promocode.h"
#include "ui_promocode.h"
#include "promocodeyes.h"
#include "userpaymentoption.h"

Promocode::Promocode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Promocode)
{
    ui->setupUi(this);
}

Promocode::~Promocode()
{
    delete ui;
}

void Promocode::on_pushButton_Yes_clicked()
{
    PromocodeYes promoYes;
    promoYes.setModal(true);
    promoYes.exec();
}

void Promocode::on_pushButton_No_clicked()
{
    UserPaymentOption payment;
    payment.setModal(true);
    payment.exec();
}
