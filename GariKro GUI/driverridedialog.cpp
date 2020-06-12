#include "driverridedialog.h"
#include "ui_driverridedialog.h"
#include "mainwindow.h"
#include "driverrideaccept.h"
#include "driverchangedetails.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

QString D;

DriverRideDialog::DriverRideDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverRideDialog)
{
    ui->setupUi(this);
}

DriverRideDialog::~DriverRideDialog()
{
    delete ui;
}

void DriverRideDialog::on_pushButton_Now_clicked()
{
    //int flag = 0;

    //0=FirstName 1=LastName 2=Phone 3=CarCompany 4=CarName 5=CarRegistration 6=Pickup 7=Dropoff
        //8=Status 9=Location1 10=Location2 11=Location3
        QString temporary0 , temporary1 , temporary2 , temporary3 , temporary4;
        QString temporary5 , temporary6 , temporary7 , temporary8 , temporary9;
        QString temporary10 , temporary11;
        QString searchPickup , searchDropoff;
        int flag=0 , tempPassengers;
        if(Car_Type == "AC"){
                RideOption=2;
                QFile file("E:\\GariKaro\\GariKaroQT\\Gari with AC.txt");
                QFile Search("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
                if(!file.open(QFile::ReadOnly | QFile::Text)){
                    QMessageBox::warning(this,"FILE","FAILED 1");
                }
                if(!Search.open(QFile::ReadOnly | QFile::Text)){
                    QMessageBox::warning(this,"FILE","FAILED 1");
                }
                if(!temp.open( QIODevice::WriteOnly)){
                    QMessageBox::warning(this,"FILE","FAILED 2");
                }
                QTextStream fin(&file);
                QTextStream Searchin(&Search);
                QTextStream tempout(&temp);
                while (!fin.atEnd())
                {
                    fin >> temporary0 >> temporary1 >> temporary2 >> temporary3 >> temporary4 >> temporary5 >> temporary6 >> temporary7 >> temporary8;
                    if((temporary0 == FirstName) && (temporary1 == LastName)){
                         while (!Searchin.atEnd()) {
                             Searchin >> temporary0 >> temporary1 >> temporary2 >> searchPickup >> searchDropoff;
                             if((temporary6 == searchPickup) && (temporary7 == searchDropoff)){
                                 flag++;
                                 pickup_location = searchPickup;
                                 dropoff_location = searchDropoff;

                                 QFile filetemp("E:\\GariKaro\\GariKaroQT\\abc.txt");
                                 if(!filetemp.open(QFile::WriteOnly | QFile::Text)){
                                     QMessageBox::warning(this,"FILE","FAILED 1");
                                 }
                                 QTextStream ftemp(&filetemp);
                                 ftemp << "\nName: " << temporary0 <<" "<< temporary1 << "\nPhone: " << temporary2 << "\nPickup: " << searchPickup << "\nDropoff: " << searchDropoff;
                                 filetemp.close();

                                 QFile filetemp2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                                 if(!filetemp2.open(QFile::ReadOnly | QFile::Text)){
                                     QMessageBox::warning(this,"FILE","FAILED 1");
                                 }
                                 QTextStream ftempin(&filetemp2);

                                 D = ftempin.readAll();
                                 filetemp2.close();

                                 filetemp.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");

                                 flag = 1;
                             }
                             else
                             {
                                tempout << temporary0 << " " << temporary1 << " " << temporary2 << " " << searchPickup << " " << searchDropoff << "\r\n";
                             }
                         }

                        Search.close();
                        temp.close();
                        Search.remove("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                        temp.rename("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                    }
                }
                file.close();
        }
        else if (Car_Type == "NAC"){
            RideOption=1;
            QFile file("E:\\GariKaro\\GariKaroQT\\Gari without AC.txt");
            QFile Search("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
            QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
            if(!file.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!Search.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!temp.open( QIODevice::WriteOnly)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
            QTextStream fin(&file);
            QTextStream Searchin(&Search);
            QTextStream tempout(&temp);
            while (!fin.atEnd()) {
                fin >> temporary0 >> temporary1 >> temporary2 >> temporary3 >> temporary4 >> temporary5 >> temporary6 >> temporary7 >> temporary8;
                if((temporary0 == FirstName) && (temporary1 == LastName)){
                     while (!Searchin.atEnd()  ) {
                         Searchin >> temporary0 >> temporary1 >> temporary2 >> searchPickup >> searchDropoff;
                         if((temporary6 == searchPickup) && (temporary7 == searchDropoff)){
                             flag++;
                             pickup_location = searchPickup;
                             dropoff_location = searchDropoff;

                             QFile filetemp("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp.open(QFile::WriteOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftemp(&filetemp);
                             ftemp << "\nName: " << temporary0 <<" "<< temporary1 << "\nPhone: " << temporary2 << "\nPickup: " << searchPickup << "\nDropoff: " << searchDropoff;
                             filetemp.close();

                             QFile filetemp2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp2.open(QFile::ReadOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftempin(&filetemp2);

                             D = ftempin.readAll();
                             filetemp2.close();

                             filetemp.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");
                         }
                         else
                         {
                             tempout << temporary0 << " " << temporary1 << " " << temporary2 << " " << searchPickup << " " << searchDropoff << "\r\n";
                         }
                     }
                    Search.close();
                    temp.close();
                    Search.remove("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                    temp.rename("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                }
            }
            file.close();
        }
        else if (Car_Type == "Rickshaw"){
            RideOption=4;
            QFile file("E:\\GariKaro\\GariKaroQT\\Rickshaws.txt");
            QFile Search("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
            QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
            if(!file.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!Search.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!temp.open( QIODevice::WriteOnly)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
            QTextStream fin(&file);
            QTextStream Searchin(&Search);
            QTextStream tempout(&temp);
            while (!fin.atEnd()) {
                fin >> temporary0 >> temporary1 >> temporary2 >> temporary3 >> temporary4 >> temporary5 >> temporary6 >> temporary7 >> temporary8;
                if((temporary0 == FirstName) && (temporary1 == LastName)){
                     while (!Searchin.atEnd()  ) {
                         Searchin >> temporary0 >> temporary1 >> temporary2 >> searchPickup >> searchDropoff;
                         if((temporary6 == searchPickup) && (temporary7 == searchDropoff)){
                             flag++;
                             pickup_location = searchPickup;
                             dropoff_location = searchDropoff;
                             QFile filetemp("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp.open(QFile::WriteOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftemp(&filetemp);
                             ftemp << "\nName: " << temporary0 <<" "<< temporary1 << "\nPhone: " << temporary2 << "\nPickup: " << searchPickup << "\nDropoff: " << searchDropoff;
                             filetemp.close();

                             QFile filetemp2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp2.open(QFile::ReadOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftempin(&filetemp2);

                             D = ftempin.readAll();
                             filetemp2.close();

                             filetemp.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");
                         }
                         else
                         {
                             tempout << temporary0 << " " << temporary1 << " " << temporary2 << " " << searchPickup << " " << searchDropoff << "\r\n";
                         }
                     }

                    Search.close();
                    temp.close();
                    Search.remove("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                    temp.rename("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                }
            }
            file.close();
        }
        else if (Car_Type == "Bike"){
            RideOption=5;
            QFile file("E:\\GariKaro\\GariKaroQT\\Bikes.txt");
            QFile Search("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
            QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
            if(!file.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!Search.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!temp.open( QIODevice::WriteOnly)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
            QTextStream fin(&file);
            QTextStream Searchin(&Search);
            QTextStream tempout(&temp);
            while (!fin.atEnd()) {
                fin >> temporary0 >> temporary1 >> temporary2 >> temporary3 >> temporary4 >> temporary5 >> temporary6 >> temporary7 >> temporary8;

                if((temporary0 == FirstName) && (temporary1 == LastName)){
                     while (!Searchin.atEnd()  ) {
                         Searchin >> temporary0 >> temporary1 >> temporary2 >> searchPickup >> searchDropoff;
                         if((temporary6 == searchPickup) && (temporary7 == searchDropoff)){
                             flag++;
                             pickup_location = searchPickup;
                             dropoff_location = searchDropoff;
                             QFile filetemp("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp.open(QFile::WriteOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftemp(&filetemp);
                             ftemp << "\nName: " << temporary0 <<" "<< temporary1 << "\nPhone: " << temporary2 << "\nPickup: " << searchPickup << "\nDropoff: " << searchDropoff;
                             filetemp.close();

                             QFile filetemp2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp2.open(QFile::ReadOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftempin(&filetemp2);

                             D = ftempin.readAll();
                             filetemp2.close();

                             filetemp.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");

                         }
                         else
                         {
                             tempout << temporary0 << " " << temporary1 << " " << temporary2 << " " << searchPickup << " " << searchDropoff << "\r\n";
                         }
                     }

                    Search.close();
                    temp.close();
                    Search.remove("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                    temp.rename("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                }
            }
            file.close();
        }
        else if (Car_Type == "Sharing"){
            RideOption=3;
            QFile file("E:\\GariKaro\\GariKaroQT\\Gari Sharing.txt");
            QFile Search("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
            QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
            if(!file.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!Search.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 1");
            }
            if(!temp.open( QIODevice::WriteOnly)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
            QTextStream fin(&file);
            QTextStream Searchin(&Search);
            QTextStream tempout(&temp);
            while (!fin.atEnd()) {
                fin >> temporary0 >> temporary1 >> temporary2 >> temporary3 >> temporary4 >> temporary5 >> temporary9 >> temporary10 >> temporary11 >> tempPassengers;
                if((temporary0 == FirstName) && (temporary1 == LastName)){
                     while (!Searchin.atEnd()  ) {
                         Searchin >> temporary0 >> temporary1 >> temporary2 >> searchPickup >> searchDropoff;
                         if(((temporary9 == searchPickup) && (temporary10  == searchDropoff)) || ((temporary10  == searchPickup)
                         && (temporary11  == searchDropoff)) ||
                         ((temporary9  == searchPickup) && (temporary11 == searchDropoff))){
                             flag++;
                             pickup_location = searchPickup;
                             dropoff_location = searchDropoff;
                             QFile filetemp("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp.open(QFile::WriteOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftemp(&filetemp);
                             ftemp << "\nName: " << temporary0 <<" "<< temporary1 << "\nPhone: " << temporary2 << "\nPickup: " << searchPickup << "\nDropoff: " << searchDropoff;
                             filetemp.close();

                             QFile filetemp2("E:\\GariKaro\\GariKaroQT\\abc.txt");
                             if(!filetemp2.open(QFile::ReadOnly | QFile::Text)){
                                 QMessageBox::warning(this,"FILE","FAILED 1");
                             }
                             QTextStream ftempin(&filetemp2);

                             D = ftempin.readAll();
                             filetemp2.close();

                             filetemp.remove("E:\\GariKaro\\GariKaroQT\\abc.txt");
                         }
                         else
                         {
                            tempout << temporary0 << " " << temporary1 << " " << temporary2 << " " << searchPickup << " " << searchDropoff << "\r\n";
                         }
                     }

                    Search.close();
                    temp.close();
                    Search.remove("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                    temp.rename("E:\\GariKaro\\GariKaroQT\\UserSearch.txt");
                }
            }
            file.close();
        }
        if(flag == 0)
        {
            QMessageBox::information(this,"Ride","Ride not Found!");
            hide();
            DriverRideDialog D;
            D.setModal(true);
            D.exec();

        }
        else if (flag == 1){
            hide();
            DriverRideAccept D1;
            D1.setModal(true);
            D1.exec();
        }

}

void DriverRideDialog::on_pushButton_6_Exit_clicked()
{
    exit(1);
}

void DriverRideDialog::on_pushButton_ChangeDetails_clicked()
{
    hide();
    DriverChangeDetails D;
    D.setModal(true);
    D.exec();
}
