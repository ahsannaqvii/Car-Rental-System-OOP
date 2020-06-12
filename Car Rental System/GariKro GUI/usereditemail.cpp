#include "usereditemail.h"
#include "ui_usereditemail.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

UserEditEmail::UserEditEmail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserEditEmail)
{
    ui->setupUi(this);
}

UserEditEmail::~UserEditEmail()
{
    delete ui;
}

void UserEditEmail::on_pushButton_EditEmail_clicked()
{
    QString tempEmail = Email;
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
        if(tempEmail == Email && tempUsername == Username){
//            qDebug() << "Your Current Email : " << Email;
             QMessageBox::warning(this,"FILE","Found");

             Email = ui->lineEdit_Email->text();

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
