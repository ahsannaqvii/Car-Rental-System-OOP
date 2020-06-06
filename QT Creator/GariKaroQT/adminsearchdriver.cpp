#include "adminsearchdriver.h"
#include "ui_adminsearchdriver.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
adminSearchDriver::adminSearchDriver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminSearchDriver)
{
    ui->setupUi(this);
}

adminSearchDriver::~adminSearchDriver()
{
    delete ui;
}

void adminSearchDriver::on_pushButton_Search_clicked()
{
    int flag = 0;
    QFile file("E:\\GariKaro\\GariKaroQT\\Driver-Signup.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }

    QTextStream in(&file);
    while(!in.atEnd())
    {
        in>>FirstName>>LastName>>Username>>Password>>Phone>>CNIC>>CarType>>CarCompany>>CarName>>CarNumber;
        QString enteredUsername = ui->lineEdit_Username->text();
        if(enteredUsername == Username)
        {
            QString x = "Username : " + Username + "\nPassword : " + Password + "\nName : " + FirstName +" "+ LastName
            + "\nPhone : "+Phone+"\nCNIC : "+CNIC+"\nCar Type : "+CarType+"\nCar Company : "+CarCompany+"\nCar Name : "
            + CarName + "\nCarNumber : "+CarNumber;
           //QMessageBox::information(this,"Search","Search Found!");
           // QMessageBox::information(this,"Seach",Username);
           ui->textBrowser_Show->setText(x);

            flag = 1;
        }
    }

    if(flag == 0)
    {
        QMessageBox::warning(this,"Search","Search Not Found");
    }
}

void adminSearchDriver::on_pushButton_Exit1_clicked()
{
    exit(1);
}
