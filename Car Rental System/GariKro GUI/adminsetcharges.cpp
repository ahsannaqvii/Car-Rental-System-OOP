#include "adminsetcharges.h"
#include "ui_adminsetcharges.h"
#include "adminchangesdialog.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>

QString ratePerKilometer,waitingCharges,extraCharges;

adminSetCharges::adminSetCharges(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminSetCharges)
{
    ui->setupUi(this);
}

adminSetCharges::~adminSetCharges()
{
    delete ui;
}

void adminSetCharges::on_pushButton_GariWithoutAC_clicked()
{
    hide();
    adminChangesDialog admC;
    admC.setModal(true);
    admC.exec();

//qDebug()<<ratePerKilometer;

    QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED 1");
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
        in>>tempType>>tempRate>>tempWaiting>>tempExtra;
        if(tempType == "NAC")
        {
            tempIn << tempType <<" "<<ratePerKilometer <<" " <<waitingCharges<<" "<<extraCharges<<"\r\n";
        }
        else
        {
            tempIn << tempType <<" "<<tempRate<<" " <<tempWaiting<<" "<<tempExtra<<"\r\n";
        }
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
}

void adminSetCharges::on_pushButton_2_GariWithAC_clicked()
{
    hide();
    adminChangesDialog admC;
    admC.setModal(true);
    admC.exec();

QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
if(!file.open(QFile::ReadOnly | QFile::Text))
{
    QMessageBox::warning(this,"FILE","FAILED 1");
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
    in>>tempType>>tempRate>>tempWaiting>>tempExtra;
    if(tempType == "AC")
    {
        tempIn << tempType <<" "<<ratePerKilometer <<" " <<waitingCharges<<" "<<extraCharges<<"\r\n";
    }
    else
    {
        tempIn << tempType <<" "<<tempRate<<" " <<tempWaiting<<" "<<tempExtra<<"\r\n";
    }
}
file.flush();
file.close();
temp.flush();
temp.close();
file.remove("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
temp.rename("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
}

void adminSetCharges::on_pushButton_3_GariSharing_clicked()
{
    hide();
    adminChangesDialog admC;
    admC.setModal(true);
    admC.exec();
    QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED 1");
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
        in>>tempType>>tempRate>>tempWaiting>>tempExtra;
        if(tempType == "Sharing")
        {
            tempIn << tempType <<" "<<ratePerKilometer <<" " <<waitingCharges<<" "<<extraCharges<<"\r\n";
        }
        else
        {
            tempIn << tempType <<" "<<tempRate<<" " <<tempWaiting<<" "<<tempExtra<<"\r\n";
        }
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
}

void adminSetCharges::on_pushButton_4_Rickshaw_clicked()
{
    hide();
    adminChangesDialog admC;
    admC.setModal(true);
    admC.exec();
    QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED 1");
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
        in>>tempType>>tempRate>>tempWaiting>>tempExtra;
        if(tempType == "Rikshaw")
        {
            tempIn << tempType <<" "<<ratePerKilometer <<" " <<waitingCharges<<" "<<extraCharges<<"\r\n";
        }
        else
        {
            tempIn << tempType <<" "<<tempRate<<" " <<tempWaiting<<" "<<tempExtra<<"\r\n";
        }
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
}

void adminSetCharges::on_pushButton_5_Bike_clicked()
{
    hide();
    adminChangesDialog admC;
    admC.setModal(true);
    admC.exec();
    QFile file("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"FILE","FAILED 1");
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
        in>>tempType>>tempRate>>tempWaiting>>tempExtra;
        if(tempType == "Bike")
        {
            tempIn << tempType <<" "<<ratePerKilometer <<" " <<waitingCharges<<" "<<extraCharges<<"\r\n";
        }
        else
        {
            tempIn << tempType <<" "<<tempRate<<" " <<tempWaiting<<" "<<tempExtra<<"\r\n";
        }
    }
    file.flush();
    file.close();
    temp.flush();
    temp.close();
    file.remove("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    temp.rename("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
}
