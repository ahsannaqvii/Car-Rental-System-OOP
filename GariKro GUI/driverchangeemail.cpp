#include "driverchangeemail.h"
#include "ui_driverchangeemail.h"
#include "driver2.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

DriverChangeEmail::DriverChangeEmail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverChangeEmail)
{
    ui->setupUi(this);
}

DriverChangeEmail::~DriverChangeEmail()
{
    delete ui;
}

void DriverChangeEmail::on_pushButton_OK_clicked()
{
    QString currentEmail = Email;
    QString currentUsername = Username;
    QFile file("C:\\Users\\User\\Dropbox\\University\\Second Semester\\Project\\OOP\\QT\\GariKaro2 (1)\\GariKaroQT\\Driver-Signup.txt");
    QFile temp("C:\\Users\\User\\Dropbox\\University\\Second Semester\\Project\\OOP\\QT\\GariKaro2 (1)\\GariKaroQT\\temp.txt");
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
        if(currentEmail == Email && currentUsername == Username){
            qDebug() << "Your Current Email : " << Email;
             QMessageBox::warning(this,"FILE","Found");
            Email = ui->lineEdit_Number->text();

         }
        tempout << FirstName <<" "<< LastName<< " "<< Username << " "<< Password << " "<< Phone << " "<< CNIC << " " << Car_Type
         << " "<< Car_Company << " "<< Car_Name << " "<< Car_RegistrationNumber<< "\r\n";
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    //REMOVE AND RENAME ISSUES
    file.remove("C:\\Users\\User\\Dropbox\\University\\Second Semester\\Project\\OOP\\QT\\GariKaro2 (1)\\GariKaroQT\\Driver-Signup.txt");
    temp.rename("C:\\Users\\User\\Dropbox\\University\\Second Semester\\Project\\OOP\\QT\\GariKaro2 (1)\\GariKaroQT\\Driver-Signup.txt");
}

