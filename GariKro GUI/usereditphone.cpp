#include "usereditphone.h"
#include "ui_usereditphone.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

UserEditPhone::UserEditPhone(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditPhone)
{
    ui->setupUi(this);
}

UserEditPhone::~UserEditPhone()
{
    delete ui;
}

void UserEditPhone::on_pushButton_EditPhone_clicked()
{
    QString tempPhone = Phone;
    QString tempUsername;

    QFile file("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 1");
    }
    if(!temp.open( QIODevice::WriteOnly)){
        QMessageBox::warning(this,"FILE","FAILED 2");
    }
    QTextStream fin(&file);
    QTextStream tempout(&temp);
    while (!fin.atEnd()){
          fin>>FirstName>>LastName>>tempUsername>>Password>>Phone>>Email>>Wallet>>Rating;
        if(tempPhone == Phone && tempUsername == Username){
//            qDebug() << "Your Current Phone Number : " << Phone;
             QMessageBox::information(this,"FILE","Found");
            Phone = ui->lineEdit_Phone->text();
            tempout << FirstName << " " << LastName << " " << tempUsername << " " << Password << " " << Phone << " "
            << Email << " " << Wallet << " " << Rating << "\r\n";
         }
        else {
            tempout << FirstName << " " << LastName << " " << tempUsername << " " << Password << " " << Phone << " "
            << Email << " " << Wallet << " " << Rating << "\r\n";
        }
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    //REMOVE AND RENAME ISSUES
    file.remove("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
}
