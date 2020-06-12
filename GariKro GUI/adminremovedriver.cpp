#include "adminremovedriver.h"
#include "ui_adminremovedriver.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>

adminRemoveDriver::adminRemoveDriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminRemoveDriver)
{
    ui->setupUi(this);
}

adminRemoveDriver::~adminRemoveDriver()
{
    delete ui;
}

void adminRemoveDriver::on_pushButton_Remove_clicked()
{
    int flag = 0;
    QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!temp.open(QIODevice::WriteOnly))
    {
        QMessageBox::warning(this,"FILE","FAILED 2");
    }

    QTextStream in(&file);
    QTextStream tempIn(&temp);
    while(!in.atEnd())
    {
        in>>FirstName>>LastName>>Username>>Password>>Phone>>CNIC>>CarType>>CarCompany>>CarName>>CarNumber;
        QString enteredUsername = ui->lineEdit_Username->text();
        if(enteredUsername != Username)
        {
            tempIn<<FirstName<<" "<<LastName<<" "<<Username<<" "<<Password<<" "<<Phone<<" "<<CNIC<<" "<<CarType<<" "<<CarCompany<<" "
            <<CarName<<" "<<CarNumber<<"\r\n";
            flag = 1;

        }
    }

    if(flag == 0)
    {
        QMessageBox::warning(this,"Search","Search Not Found");
    }
    else
    {
        QMessageBox::information(this,"Search","Removed");
    }
    hide();
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
}
