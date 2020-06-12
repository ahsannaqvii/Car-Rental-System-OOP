#include "driverendride.h"
#include "ui_driverendride.h"
#include "mainwindow.h"
#include "driverbill.h"
#include "cstdlib"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

DriverEndRide::DriverEndRide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverEndRide)
{
    ui->setupUi(this);
}

DriverEndRide::~DriverEndRide()
{
    delete ui;
}

void DriverEndRide::on_pushButton_Yes_clicked()
{
    QString tempPickup , tempDropoff;
    QString Type;

    srand (time(NULL));
    Ending_Hour = Starting_Hour;
    //ADD IF CONDITIONS HERE FOR EXPECTED TIME
    Ending_Minute = Starting_Minute + rand()%30;
    if (Ending_Minute > 60){
        Ending_Hour = Ending_Hour + 1;
        Ending_Minute = Ending_Minute - 60;
    }

    QFile file1("E:\\GariKaro\\GariKaroQT\\Location-Distances.txt");
    if(!file1.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 1");
    }
    QTextStream in(&file1);
        while(!in.atEnd()){
            in >> PickUp >> DropOff >> Distance >> Expected_Time;
            if ((PickUp == pickup_location) && (DropOff == dropoff_location)){
                break;
            }
            else {
                continue;
            }
        }
        file1.close();

    QFile file2("E:\\GariKaro\\GariKaroQT\\Admin-Charges.txt");
    QTextStream File(&file2);
    if(!file2.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 2");
    }
        switch(RideOption){
            case 1: {
                while(!File.atEnd()){
                    File >> Type >> RatePer_Kilometer >> Waiting_Charges >> Extra_Charges;
                    if ((Type == "NAC")) {
                        break;
                    }
                }
            }
            case 2:{
                while(!File.atEnd()){
                    File >> Type >> RatePer_Kilometer >> Waiting_Charges >> Extra_Charges;
                    if ((Type == "AC")) {
                        break;
                    }
                }
            }
            case 3:{
                while(!File.atEnd()){
                    File >> Type >> RatePer_Kilometer >> Waiting_Charges >> Extra_Charges;
                    if ((Type == "Sharing")) {
                        break;
                    }
                }
            }
            case 4:{
                while(!File.atEnd()){
                    File >> Type >> RatePer_Kilometer >> Waiting_Charges >> Extra_Charges;
                    if ((Type == "Rikshaw")) {
                        break;
                    }
                }
            }
            case 5:{
                while(!File.atEnd()){
                   File >> Type >> RatePer_Kilometer >> Waiting_Charges >> Extra_Charges;
                    if ((Type == "Bike")) {
                        break;
                    }
                }
            }
        }
        file2.close();
        //Calculating Ride Time
        if (Starting_Hour == Ending_Hour){
            Ride_time = Ending_Minute - Starting_Minute ;
        }
        else if (Ending_Hour > Starting_Hour){
            Ride_time = Ending_Minute - Starting_Minute + 60;
        }
        //Calculating Waiting Charges
        Waiting_Charges = Waiting_Charges * Waiting_Time;
        //Calculating Fare
        Promo_Discount = Promo_Discount / 100;
        if (RideOption != 3){
            Fare = (Distance * RatePer_Kilometer) + Waiting_Charges;
            Promo_Discount = Fare * Promo_Discount;
            Fare = Fare - Promo_Discount;
        }
        else if (RideOption == 3){
            float Discount;
            Fare = (Distance * RatePer_Kilometer) + Waiting_Charges;
            Discount = Fare * 0.3;
            Promo_Discount = Fare * Promo_Discount;
            Fare = Fare - Discount;
            Fare = Fare - Promo_Discount;
        }
        if (Ride_time > Expected_Time){
            float Extra_time = Ride_time - Expected_Time;
            Fare += (Extra_time * Extra_Charges);
        }

    hide();
    DriverBill D;
    D.setModal(true);
    D.exec();
}
