#include "useraccesswallet.h"
#include "ui_useraccesswallet.h"
#include "mainwindow.h"
#include "usercheckbalance.h"
#include "useraddbalance.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

UserAccessWallet::UserAccessWallet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAccessWallet)
{
    ui->setupUi(this);
}

UserAccessWallet::~UserAccessWallet()
{
    delete ui;
}

void UserAccessWallet::on_pushButton_CheckBalance_clicked()
{
    QString tempFirstName , tempLastName , tempUsername , tempPassword , tempPhone ,tempEmail;
    float tempRating;
    QFile file("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        in >> tempFirstName >> tempLastName >> tempUsername >> tempPassword >> tempPhone >> tempEmail >> Wallet >>  tempRating;
        if (tempUsername == Username && tempPassword == Password){
            break;
        }
    }
    UserCheckBalance U;
    U.setModal(true);
    U.exec();
}

void UserAccessWallet::on_pushButton_AddBalance_clicked()
{
    UserAddBalance U;
    U.setModal(true);
    U.exec();
}
