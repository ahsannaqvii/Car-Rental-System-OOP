#include "driverreceiveamount.h"
#include "ui_driverreceiveamount.h"
#include "mainwindow.h"
#include "cstdlib"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

DriverReceiveAmount::DriverReceiveAmount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverReceiveAmount)
{
    ui->setupUi(this);
}

DriverReceiveAmount::~DriverReceiveAmount()
{
    delete ui;
}

void DriverReceiveAmount::on_pushButton_Continue_clicked()
{
    QString am;

    srand (time(NULL));
    Payment_Option = rand()%1;
    Payment_Option++;
    if (Payment_Option == 1){

        am = ui->lineEdit_Amount->text();

        QFile file2("E:\\GariKaro\\GariKaroQT\\xyz.txt");
        if(!file2.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"FILE","FAILED");
        }
        QTextStream fout(&file2);
        fout << am;
        file2.close();

        QFile file3("E:\\GariKaro\\GariKaroQT\\xyz.txt");
        if(!file3.open(QIODevice::ReadOnly)){
            QMessageBox::warning(this,"FILE","FAILED");
        }
        QTextStream fin(&file3);
        fin >> Amount_Recieved;
        file3.close();

        file2.remove("E:\\GariKaro\\GariKaroQT\\xyz.txt");

            if (Amount_Recieved == Fare){
                Cash_Back = 0;
                QFile file4("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file4.open(QFile::WriteOnly | QFile::Text)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream out(&file4);
                out << Cash_Back << "PKR";
                file4.close();

                QFile file5("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file5.open(QIODevice::ReadOnly)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream in(&file5);
                QString O;
                O = in.readAll();
                file5.close();
                ui->textBrowser_ReturnAmount->setText(O);
                file4.remove("E:\\GariKaro\\GariKaroQT\\xyz.txt");
            }
            else if (Amount_Recieved < (Fare*0.8) ){
                    QMessageBox::warning(this,"Payment","Amount Cannot Be Entered.");
            }
            else if (Amount_Recieved > (Fare*0.8) && Amount_Recieved < Fare){
                Cash_Back = Fare - Amount_Recieved;
                Wallet += Cash_Back;
                QFile file4("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file4.open(QFile::WriteOnly | QFile::Text)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream out(&file4);
                out << Cash_Back << "PKR";
                file4.close();

                QFile file5("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file5.open(QIODevice::ReadOnly)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream in(&file5);
                QString O;
                O = in.readAll();
                file5.close();
                ui->textBrowser_ReturnAmount->setText(O);
                file4.remove("E:\\GariKaro\\GariKaroQT\\xyz.txt");
            }
            else if (Amount_Recieved > Fare){
                Cash_Back = Amount_Recieved - Fare;
                QFile file4("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file4.open(QFile::WriteOnly | QFile::Text)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream out(&file4);
                out << Cash_Back << "PKR";
                file4.close();

                QFile file5("E:\\GariKaro\\GariKaroQT\\abc.txt");
                if(!file5.open(QIODevice::ReadOnly)){
                    QMessageBox::warning(this,"FILE","FAILED");
                }
                QTextStream in(&file5);
                QString O;
                O = in.readAll();
                file5.close();
                ui->textBrowser_ReturnAmount->setText(O);
                file4.remove("E:\\GariKaro\\GariKaroQT\\xyz.txt");
            }
    }
    else if(Payment_Option == 2) {
        Wallet -= Fare;
        exit(1);
    }
}


void DriverReceiveAmount::on_pushButton_End_clicked()
{
    exit(1);
}
