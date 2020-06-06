#include "usercheckbalance.h"
#include "ui_usercheckbalance.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

UserCheckBalance::UserCheckBalance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserCheckBalance)
{
    ui->setupUi(this);
}

UserCheckBalance::~UserCheckBalance()
{
    delete ui;
}

void UserCheckBalance::on_pushButton_CheckBalance_clicked()
{
    QFile file("E:\\GariKaro\\GariKaroQT\\a.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream in(&file);
    in << Wallet << "PKR";
    file.close();
    QFile file1("E:\\GariKaro\\GariKaroQT\\a.txt");
    if(!file1.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QTextStream out(&file1);
    QString Balance;
    out >> Balance;
    file1.close();
    file1.remove("E:\\GariKaro\\GariKaroQT\\a.txt");
    ui->textBrowser_CheckBalance->setText(Balance);
}
