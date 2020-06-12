#include "driverchangenumber.h"
#include "ui_driverchangenumber.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

DriverChangeNumber::DriverChangeNumber(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverChangeNumber)
{
    ui->setupUi(this);
}

DriverChangeNumber::~DriverChangeNumber()
{
    delete ui;
}

void DriverChangeNumber::on_pushButton_OK_clicked()
{
    QString currentPhone = Phone;
    QString currentUsername = Username;
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
        if(currentPhone == Phone && currentUsername == Username){
            qDebug() << "Your Current Phone Number : " << Phone;
             QMessageBox::information(this,"FILE","Found");
            Phone = ui->lineEdit_Number->text();

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
