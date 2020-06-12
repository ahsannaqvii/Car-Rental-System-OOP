#include "promocodeyes.h"
#include "ui_promocodeyes.h"
#include "userpaymentoption.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

PromocodeYes::PromocodeYes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PromocodeYes)
{
    ui->setupUi(this);
}

PromocodeYes::~PromocodeYes()
{
    delete ui;
}

void PromocodeYes::on_pushButton_OK_clicked()
{
    QString entered_Promo;
    int flag=0;

   QFile file("E:\\GariKaro\\GariKaroQT\\PromoCodes.txt");
   if(!file.open(QFile::ReadOnly | QFile::Text)){
       QMessageBox::warning(this,"FILE","FAILED");
   }
   QTextStream in(&file);
    while (!in.atEnd()) {
        in >> PromoCode >> tempDiscount >> Promo_Validity >> Promo_Type;
        entered_Promo = ui->lineEdit_Promo->text();
        if(entered_Promo == PromoCode){
            flag++;
            Promo_Discount = tempDiscount;
            QMessageBox::information(this,"PROMOCODE","PROMO CODE ADDED");
            break;
        }
    }
    if (flag==0){
        QMessageBox::information(this,"PROMOCODE","PROMO CODE FAILED");
    }
    file.close();
    hide();
    UserPaymentOption payment;
    payment.setModal(true);
    payment.exec();
}

