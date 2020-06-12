#include "scheduletransport.h"
#include "ui_scheduletransport.h"
#include "mainwindow.h"
#include "promocode.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

ScheduleTransport::ScheduleTransport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScheduleTransport)
{
    ui->setupUi(this);
}

ScheduleTransport::~ScheduleTransport()
{
    delete ui;
}

void ScheduleTransport::on_pushButton_AC_clicked()
{
    int flag=0;
    RideOption = 2;
    QFile file("E:\\GariKaro\\GariKaroQT\\Gari with AC.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 1");
    }
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!temp.open( QIODevice::WriteOnly)){
        QMessageBox::warning(this,"FILE","FAILED 2");
    }

    QTextStream in(&file);
    QTextStream tempin(&temp);
    while (!in.atEnd()  ){
            in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;

            if ((tempPickUp == pickup_location) && (tempDropOff == dropoff_location) && (tempStatus == "Vacant")){
                flag++;
                tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
                tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " Booked\r\n";
                Driver_FirstName = tempDriver_FirstName;
                Driver_LastName = tempDriver_LastName;
                Driver_PhoneNumber = tempDriver_PhoneNumber;
                VehicleCompany = tempVehicleCompany;
                VehicleName = tempVehicleName;
                numberPlate = tempnumberPlate;
                PickUp = tempPickUp;
                DropOff = tempDropOff;
                QMessageBox::information(this,"Ride Information","RIDE FOUND");
                 break;
            }
            tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
            tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " " << tempStatus << "\r\n";
   }
  while(!in.atEnd()){
      in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;
       tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
       tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " " << tempStatus << "\r\n";
  }

  file.flush();
  file.close();
  temp.flush();
  temp.close();
  file.remove("E:\\GariKaro\\GariKaroQT\\Gari with AC.txt");
  temp.rename("E:\\GariKaro\\GariKaroQT\\Gari with AC.txt");

    Promocode promo;
    promo.setModal(true);
    promo.exec();
    promo.on_pushButton_Yes_clicked();
}

void ScheduleTransport::on_pushButton_NAC_clicked()
{
    int flag=0;
    RideOption = 1;
    QFile file("E:\\GariKaro\\GariKaroQT\\Gari without AC.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 1");
    }
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!temp.open( QIODevice::Append)){
        QMessageBox::warning(this,"FILE","FAILED 2");
    }

    QTextStream in(&file);
    QTextStream tempin(&temp);
    while (!in.atEnd()  ) {
        in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;
        if ((tempPickUp == pickup_location) && (tempDropOff == dropoff_location) && (tempStatus == "Vacant")){
            flag++;
            tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
            tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " Booked\r\n";
            Driver_FirstName = tempDriver_FirstName;
            Driver_LastName = tempDriver_LastName;
            Driver_PhoneNumber = tempDriver_PhoneNumber;
            VehicleCompany = tempVehicleCompany;
            VehicleName = tempVehicleName;
            numberPlate = tempnumberPlate;
            PickUp = tempPickUp;
            DropOff = tempDropOff;
            QMessageBox::information(this,"Ride Information","RIDE FOUND");
             break;
        }
        tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
        tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " " << tempStatus << "\r\n";
      }
      while(!in.atEnd()){
          in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;
          tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
          tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " " << tempStatus << "\r\n";
      }

      file.flush();
      file.close();
      temp.flush();
      temp.close();
      file.remove("E:\\GariKaro\\GariKaroQT\\Gari without AC.txt");
      temp.rename("E:\\GariKaro\\GariKaroQT\\Gari without AC.txt");

    Promocode promo;
    promo.setModal(true);
    promo.exec();
    promo.on_pushButton_Yes_clicked();

}
