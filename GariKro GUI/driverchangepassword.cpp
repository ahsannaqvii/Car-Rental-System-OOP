#include "driverchangepassword.h"
#include "ui_driverchangepassword.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

DriverChangePassword::DriverChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverChangePassword)
{
    ui->setupUi(this);
}

DriverChangePassword::~DriverChangePassword()
{
    delete ui;
}

void DriverChangePassword::on_pushButton_OK_clicked()
{
    QString currentPassword = Password;
    QString currentUsername = Username;
    qDebug() << Password;
    qDebug() << currentPassword;
    QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
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
          fin>>FirstName>>LastName>>Username>>Password>>Phone>>CNIC>>Car_Type>>Car_Company>>Car_Name>>Car_RegistrationNumber;
        if(currentPassword == Password && currentUsername == Username){
            qDebug() << "Your Current Password : " << Password;
             QMessageBox::warning(this,"FILE","Found");
            Password = ui->lineEdit_Number->text();

         }
        tempout << FirstName <<" "<< LastName<< " "<< Username << " "<< Password << " "<< Phone << " "<< CNIC << " " << Car_Type
         << " "<< Car_Company << " "<< Car_Name << " "<< Car_RegistrationNumber<< "\r\n";
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    //REMOVE AND RENAME ISSUES
    file.remove("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
}
