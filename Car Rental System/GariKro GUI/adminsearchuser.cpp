#include "adminsearchuser.h"
#include "ui_adminsearchuser.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

adminSearchUser::adminSearchUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminSearchUser)
{
    ui->setupUi(this);
}

adminSearchUser::~adminSearchUser()
{
    delete ui;
}

void adminSearchUser::on_pushButton_Search_clicked()
{
    int flag = 0;
    QFile file("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }

    QTextStream in(&file);
    while(!in.atEnd())
    {
        in>>FirstName>>LastName>>Username>>Password>>Phone>>Email>>Wallet>>Rating;
        QString enteredUsername = ui->lineEdit_Username->text();
        if(enteredUsername == Username)
        {
            QString x = "Username : " + Username + "\nPassword : " + Password + "\nName : " + FirstName +" "+ LastName
            + "\nPhone : "+Phone+"\nEmail : "+Email+"\nWallet : "+Wallet+"\nRating : "+Rating;

            ui->textBrowser_Show->setText(x);
            flag = 1;
        }
    }

    if(flag == 0)
    {
        QMessageBox::warning(this,"Search","Search Not Found");
    }
}

void adminSearchUser::on_pushButton_Exit2_clicked()
{
    exit(1);
}
