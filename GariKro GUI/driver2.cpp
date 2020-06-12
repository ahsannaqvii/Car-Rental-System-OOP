#include "driver2.h"
#include "ui_driver2.h"
#include "driverridedialog.h"
#include "driverlogsign.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

Driver2::Driver2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Driver2)
{
    ui->setupUi(this);
}

Driver2::~Driver2()
{
    delete ui;
}

void Driver2::on_pushButton_Login_clicked()
{
    int flag=0;
    QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
        QTextStream in(&file);
        while (!in.atEnd()  ) {
            in >> FirstName >> LastName >> Username >> Password >> Phone >> CNIC >> Car_Type >> Car_Company >> Car_Name >> Car_RegistrationNumber;
            QString entered_username= ui->lineEdit_Username->text();
            QString entered_password= ui->lineEdit_Password->text();
            if(entered_username == Username && entered_password == Password){
//                    QMessageBox::information(this,"Login","Username and password is correct");
                flag = 1;
                hide();
                DriverRideDialog D;
                D.setModal(true);
                D.exec();
                break;
            }
        }
        if(flag == 0)
        {
            QMessageBox::warning(this,"Login","NOT CORRECT");
            hide();
            DriverLogSign D;
            D.setModal(true);
            D.exec();
        }

}
