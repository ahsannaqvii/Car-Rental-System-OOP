#include "user2.h"
#include "mainwindow.h"
#include "logsignform.h"
#include "ui_user2.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "ridedialog.h"

User2::User2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User2)
{
    ui->setupUi(this);
}

User2::~User2()
{
    delete ui;
}

void User2::on_pushButton_Login_clicked()
{

    int flag=0;
    QFile file("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED");
    }
        QTextStream in(&file);
        while (!in.atEnd()  ) {
                in >> FirstName >> LastName >> Username >> Password >> Phone >> Email >> Wallet >> Rating;

                QString entered_username= ui->lineEdit_Username->text();
                QString entered_password= ui->lineEdit_Password->text();
                if(entered_username == Username && entered_password == Password){
//                    QMessageBox::information(this,"Login","Username and password is correct");
                    flag = 1;
                    hide();
                    RideDialog R;
                    R.setModal(true);
                    R.exec();
                    break;
                }

                }
                if(flag == 0)
                {
                    QMessageBox::warning(this,"Login","NOT CORRECT");
                    hide();
                    LogSignForm L;
                    L.setModal(true);
                    L.exec();
                }


}
