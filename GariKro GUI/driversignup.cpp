#include "driversignup.h"
#include "ui_driversignup.h"
#include "driverridedialog.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

DriverSignUp::DriverSignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverSignUp)
{
    ui->setupUi(this);
}

DriverSignUp::~DriverSignUp()
{
    delete ui;
}

void DriverSignUp::on_pushButton_Signup1_clicked()
{
    QString entered_username= ui->lineEdit_3_Username->text();
    int flag = 0;
    QFile temp("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    if(!temp.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }

    QTextStream inn(&temp);
    while(!inn.atEnd())
    {
        inn>>FirstName>>LastName>>Username>>Password>>Phone>>CNIC>>Car_Type>>Car_Company>>Car_Name>>Car_RegistrationNumber;
        if(entered_username == Username)
        {
           QMessageBox::warning(this,"Signup","Username already in Use!");
           flag++;
           break;
        }
    }

    if(flag == 0)
    {
        temp.flush();
        temp.close();
        FirstName = ui->lineEdit_FirstName->text();
        LastName = ui->lineEdit_2_LastName->text();
        Password = ui->lineEdit_4_Password->text();
        Phone = ui->lineEdit_5_Phone->text();
        CNIC = ui->lineEdit_6_CNIC->text();
        Car_Type = ui->lineEdit_7_CarType->text();
        Car_Company = ui->lineEdit_8_CarCompany->text();
        Car_Name = ui->lineEdit_9_CarName->text();
        Car_RegistrationNumber = ui->lineEdit_10_CarNumber->text();

        QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
        if(!file.open(QIODevice::Append))
        {
            QMessageBox::warning(this,"FILE","FAILED");
        }

        QTextStream in(&file);

        in<< "\r\n" << FirstName<<" "<<LastName<<" "<<entered_username<<" "<<Password<<" "<<Phone<<" "<<CNIC<<" "<<Car_Type<<" "<<Car_Company<<" "
        <<Car_Name<<" "<<Car_RegistrationNumber<<"\r\n";
        QMessageBox::information(this,"Driver Signup","Account Created");
        hide();
    }
    hide();
    DriverRideDialog D;
    D.setModal(true);
    D.exec();
}
