#include "usereditpassword.h"
#include "ui_usereditpassword.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

UserEditPassword::UserEditPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditPassword)
{
    ui->setupUi(this);
}

UserEditPassword::~UserEditPassword()
{
    delete ui;
}

void UserEditPassword::on_pushButton_EditPassword_clicked()
{
    QString tempPassword = Password;
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
        if(tempPassword == Password && tempUsername == Username){
//            qDebug() << "Your Current Password : " << Password;
             QMessageBox::warning(this,"FILE","Found");

             Password = ui->lineEdit_Password->text();

             tempout << FirstName << " " << LastName << " " << tempUsername << " " << Password << " "<< Phone << " "
             << Email << " " << Wallet << " " << Rating << "\r\n";
         }
        else {
            tempout << FirstName << " " << LastName << " " << tempUsername << " " << Password << " "<< Phone << " "
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
