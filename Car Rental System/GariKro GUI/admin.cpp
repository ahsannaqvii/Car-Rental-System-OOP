#include "admin.h"
#include "ui_admin.h"
#include "adminDialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_Login_clicked()
{
    int flag=0;
    QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Login.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED");
    }
        QTextStream in(&file);
        while (!in.atEnd())
        {
            in  >> Username >> Password;

            QString entered_username= ui->lineEdit_Username->text();
            QString entered_password= ui->lineEdit_2_Password->text();
            if(entered_username == Username && entered_password == Password)
            {
//                QMessageBox::information(this,"Login","Username and password is correct");
                flag = 1;
                adminDialog adm;
                adm.setModal(true);
                adm.exec();
                break;
            }

            }
            if(flag == 0)
            {
                QMessageBox::warning(this,"Login","NOT CORRECT");
            }
}
