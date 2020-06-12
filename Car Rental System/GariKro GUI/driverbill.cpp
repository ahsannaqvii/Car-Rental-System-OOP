#include "driverbill.h"
#include "ui_driverbill.h"
#include "mainwindow.h"
#include "driverreceiveamount.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

DriverBill::DriverBill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverBill)
{
    ui->setupUi(this);
}

DriverBill::~DriverBill()
{
    delete ui;
}

void DriverBill::on_pushButton_CalculateFare_clicked()
{
    QFile file("E:\\GariKaro\\GariKaroQT\\abc.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream out(&file);
    if (Ending_Minute > 9 && Starting_Minute > 9){
        out << Starting_Hour << ":" << Starting_Minute << "\n\n" << Ending_Hour << ":" << Ending_Minute << "\n\n" << Ride_time
        << "\n\n" << Waiting_Time << "\n\n" << Waiting_Charges << "PKR\n\n" << Distance << "km\n\n" << Promo_Discount;
    }
    else if (Ending_Minute < 9 && Starting_Minute < 9){
        out << Starting_Hour << ":0" << Starting_Minute << "\n\n" << Ending_Hour << ":0" << Ending_Minute << "\n\n" << Ride_time
        << "\n\n" << Waiting_Time << "\n\n" << Waiting_Charges << "PKR\n\n" << Distance << "km\n\n" << Promo_Discount;
    }
    else if (Ending_Minute < 9 && Starting_Minute > 9){
        out << Starting_Hour << ":" << Starting_Minute << "\n\n" << Ending_Hour << ":0" << Ending_Minute << "\n\n" << Ride_time
        << "\n\n" << Waiting_Time << "\n\n" << Waiting_Charges << "PKR\n\n" << Distance << "km\n\n" << Promo_Discount;
    }
    else if (Ending_Minute > 9 && Starting_Minute < 9){
        out << Starting_Hour << ":0" << Starting_Minute << "\n\n" << Ending_Hour << ":" << Ending_Minute << "\n\n" << Ride_time
        << "\n\n" << Waiting_Time << "\n\n" << Waiting_Charges << "PKR\n\n" << Distance << "km\n\n" << Promo_Discount;
    }
    file.close();

    QFile file2("E:\\GariKaro\\GariKaroQT\\xyz.txt");
    if(!file2.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream fout(&file2);
    fout << Fare << "PKR";
    file2.close();

    QFile file3("E:\\GariKaro\\GariKaroQT\\xyz.txt");
    if(!file3.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream fin(&file3);
    QString O;
    O = fin.readAll();
    file3.close();

    QFile file1("E:\\GariKaro\\GariKaroQT\\abc.txt");
    if(!file1.open(QIODevice::ReadOnly)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream in(&file1);
    QString G = in.readAll();
    file1.close();

    ui->textBrowser_Bill->setText(G);
    ui->textBrowser_Fare->setText(O);
    file2.remove("E:\\GariKaro\\GariKaroQT\\xyz.txt");
    file1.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");
}


void DriverBill::on_pushButton_RecieveAmount_clicked()
{
    hide();
    DriverReceiveAmount D;
    D.setModal(true);
    D.exec();
}
