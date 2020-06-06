#include "useraddbalance.h"
#include "ui_useraddbalance.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

UserAddBalance::UserAddBalance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAddBalance)
{
    ui->setupUi(this);
}

UserAddBalance::~UserAddBalance()
{
    delete ui;
}

void UserAddBalance::on_pushButton_clicked()
{
    QString tempFirstName , tempLastName , tempUsername , tempPassword , tempPhone ,tempEmail;
    QFile file("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream in(&file);
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!temp.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream tempout(&temp);
    while (!in.atEnd()){
        in >> FirstName >> LastName >> tempUsername >> tempPassword >> Phone >> Email >> Wallet >> Rating;
        if ((tempUsername == Username) && (tempPassword == Password)){
            Deposit = Deposit + Wallet;
            tempout << FirstName << " " << LastName << " " << tempUsername << " " << tempPassword
            << " " << Phone << " " << Email << " " << Deposit << " " << Rating << "\r\n";
        }
        else {
            tempout << FirstName << " " << LastName << " " << tempUsername << " " << tempPassword
            << " " << Phone << " " << Email << " " << Wallet << " " << Rating << "\r\n";
        }
    }
    file.close();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
}
