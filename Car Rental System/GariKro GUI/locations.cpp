#include "locations.h"
#include "iostream"
#include "ui_locations.h"
#include "ridedialog.h"
#include "mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "userdisplaydetails.h"

Locations::Locations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Locations)
{
    ui->setupUi(this);
}

Locations::~Locations()
{
    delete ui;
}
                                                                                    //Gari with AC
void Locations::on_pushButton_AC_clicked()
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
    while (!in.atEnd()  ) {
            in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;
            pickup_location= ui->lineEdit_PickupLock->text();
            dropoff_location= ui->lineEdit_2_DropoffLock->text();
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

  if (flag==0){
      QMessageBox::information(this,"Ride Information","RIDE NOT FOUND");
      hide();
      RideDialog R;
      R.setModal(true);
      R.exec();
  }
  else {
      hide();
      UserDisplayDetails U;
      U.setModal(true);
      U.exec();
  }


}
                                                                                    //Gari without AC
void Locations::on_pushButton_NAC_clicked()
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
        pickup_location= ui->lineEdit_PickupLock->text();
        dropoff_location= ui->lineEdit_2_DropoffLock->text();
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

  UserDisplayDetails U;
  U.setModal(true);
  U.exec();


}
                                                                                //Bike
void Locations::on_pushButton_Bike_clicked()
{
    int flag=0;
    RideOption = 5;
    QFile file("E:\\GariKaro\\GariKaroQT\\Bikes.txt");
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
        pickup_location= ui->lineEdit_PickupLock->text();
        dropoff_location= ui->lineEdit_2_DropoffLock->text();
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
  file.remove("E:\\GariKaro\\GariKaroQT\\Bikes.txt");
  temp.rename("E:\\GariKaro\\GariKaroQT\\Bikes.txt");

  UserDisplayDetails U;
  U.setModal(true);
  U.exec();

}
                                                                                    //Rickshaw
void Locations::on_pushButton_Rickshaw_clicked()
{
    int flag=0;
    RideOption = 4;
    QFile file("E:\\GariKaro\\GariKaroQT\\Rickshaws.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILEDSASASA");
    }
    QFile temp("E:\\GariKaro\\GariKaroQT\\temp.txt");
    if(!temp.open( QIODevice::Append)){
        QMessageBox::warning(this,"FILE","FAILED");
    }

    QTextStream in(&file);
    QTextStream tempin(&temp);
    while (!in.atEnd()  ) {
        in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> tempPickUp >> tempDropOff >> tempStatus;
        pickup_location= ui->lineEdit_PickupLock->text();
        dropoff_location= ui->lineEdit_2_DropoffLock->text();
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
      tempin <<  tempnumberPlate << " " <<  tempPickUp << " " << tempDropOff  << " " << tempStatus << "\r\n";;
  }

  file.flush();
  file.close();
  temp.flush();
  temp.close();
  file.remove("E:\\GariKaro\\GariKaroQT\\Rickshaws.txt");
  temp.rename("E:\\GariKaro\\GariKaroQT\\Rickshaws.txt");

  UserDisplayDetails U;
  U.setModal(true);
  U.exec();

}
                                                                                    //Gari Sharing
void Locations::on_pushButton_Share_clicked()
{
    int flag=0;
    RideOption = 3;
    QFile file("E:\\GariKaro\\GariKaroQT\\Gari Sharing.txt");
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
            in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> Location1 >> Location2 >> Location3 >> NumberOfPassengers;
            pickup_location= ui->lineEdit_PickupLock->text();
            dropoff_location= ui->lineEdit_2_DropoffLock->text();
            if ((((Location1 == pickup_location) && (Location2 == dropoff_location)) ||
                 ((Location2 == pickup_location) && (Location3 == dropoff_location)) ||
                 ((Location1 == pickup_location) && (Location3 == dropoff_location))) && (NumberOfPassengers < 4)){
                flag++;
                NumberOfPassengers++;
                tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
                tempin <<  tempnumberPlate << " " << Location1 << " " << Location2 << " " << Location3 << " " << NumberOfPassengers << "\r\n";
                Driver_FirstName = tempDriver_FirstName;
                Driver_LastName = tempDriver_LastName;
                Driver_PhoneNumber = tempDriver_PhoneNumber;
                VehicleCompany = tempVehicleCompany;
                VehicleName = tempVehicleName;
                numberPlate = tempnumberPlate;
                QMessageBox::information(this,"Ride Information","RIDE FOUND");
                 break;
            }
            tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
            tempin <<  tempnumberPlate << " " << Location1 << " " << Location2 << " " << Location3 << " " << NumberOfPassengers << "\r\n";
   }

  while(!in.atEnd()){
      in >> tempDriver_FirstName >> tempDriver_LastName >> tempDriver_PhoneNumber >> tempVehicleCompany >> tempVehicleName >> tempnumberPlate >> Location1 >> Location2 >> Location3 >> NumberOfPassengers;
      tempin << tempDriver_FirstName << " " << tempDriver_LastName << " " << tempDriver_PhoneNumber << " " << tempVehicleCompany << " " << tempVehicleName << " " ;
      tempin <<  tempnumberPlate << " " << Location1 << " " << Location2 << " " << Location3 << " " << NumberOfPassengers << "\r\n";
  }

  file.flush();
  file.close();
  temp.flush();
  temp.close();
  file.remove("E:\\GariKaro\\GariKaroQT\\Gari Sharing.txt");
  temp.rename("E:\\GariKaro\\GariKaroQT\\Gari Sharing.txt");

  UserDisplayDetails U;
  U.setModal(true);
  U.exec();

}
