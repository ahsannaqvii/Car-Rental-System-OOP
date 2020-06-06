#include "userpaymentoption.h"
#include "ui_userpaymentoption.h"
#include "userbill.h"
#include "user2.h"
#include "promocode.h"
#include "mainwindow.h"
#include "cstdlib"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "time.h"

UserPaymentOption::UserPaymentOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserPaymentOption)
{
    ui->setupUi(this);
}

UserPaymentOption::~UserPaymentOption()
{
    delete ui;
}

void UserPaymentOption::on_pushButton_Cash_clicked()
{
    QString tempPickup , tempDropoff;
    QString Type;
    float tempDistance;
    int tempExpected = 0;

    PaymentOption = 1;

//    Calculatiing Waiting Time
    srand (time(NULL));
    Waiting_Time = rand()%10;

//    Taking Starting Time

    Starting_Hour = Booking_Hours;
    Starting_Minute = Booking_Minutes + Waiting_Time;
    if (Starting_Minute > 60){
        Starting_Hour = Starting_Hour + 1;
        Starting_Minute = Starting_Minute - 60;
    }

//    Taking Expected Time

    QFile file3("E:\\GariKaro\\GariKaroQT\\Location-Distances.txt");
    QTextStream fin(&file3);
    if(!file3.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 3");
    }
    else {
        while (!fin.atEnd()){
            fin >> tempPickup >> tempDropoff >> tempDistance >> tempExpected;
            if ((tempPickup == pickup_location) && (tempDropoff == dropoff_location)){
                break;
            }
        }
    }
    file3.close();

 //   Taking Ending Time

    srand (time(NULL));
    Ending_Hour = Starting_Hour;
    Ending_Minute = Starting_Minute + rand()%(tempExpected) + 4;
    if (Ending_Minute > 60){
        Ending_Hour = Ending_Hour + 1;
        Ending_Minute = Ending_Minute - 60;
    }
    qDebug() << Ending_Hour << " " << Ending_Minute;
    //Calculating Fare

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


        //Getting charges from admin file

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

        UserBill U;
        U.setModal(true);
        U.exec();
}

void UserPaymentOption::on_pushButton_Wallet_clicked()
{

    QString tempPickup , tempDropoff;
    QString Type;
    int temp;
    QString tempFirstName , tempLastName , tempUsername , tempPassword;
    QString tempPhone , tempEmail ;
    int new_Wallet = 0;
    float tempRating;
    float tempDistance;
    int tempExpected = 0;

    PaymentOption = 1;

//    Calculatiing Waiting Time
    srand (time(NULL));
    Waiting_Time = rand()%10;

//    Taking Starting Time

    Starting_Hour = Booking_Hours;
    Starting_Minute = Booking_Minutes + Waiting_Time;
    if (Starting_Minute > 60){
        Starting_Hour = Starting_Hour + 1;
        Starting_Minute = Starting_Minute - 60;
    }

//    Taking Expected Time

    QFile file3("E:\\GariKaro\\GariKaroQT\\Location-Distances.txt");
    QTextStream fin(&file3);
    if(!file3.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"FILE","FAILED 3");
    }
    else {
        while (!fin.atEnd()){
            fin >> tempPickup >> tempDropoff >> tempDistance >> tempExpected;
            if ((tempPickup == pickup_location) && (tempDropoff == dropoff_location)){
                break;
            }
        }
    }
    file3.close();

 //   Taking Ending Time

    srand (time(NULL));
    Ending_Hour = Starting_Hour;
    Ending_Minute = Starting_Minute + rand()%(tempExpected) + 4;
    if (Ending_Minute > 60){
        Ending_Hour = Ending_Hour + 1;
        Ending_Minute = Ending_Minute - 60;
    }
    qDebug() << Ending_Hour << " " << Ending_Minute;
    //Calculating Fare

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


        //Getting charges from admin file

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

            temp = Fare;

            QFile file5("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
            QTextStream filein(&file5);
            if(!file5.open(QFile::ReadOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
            QFile file6("E:\\GariKaro\\GariKaroQT\\temp.txt");
            QTextStream tempout(&file6);
            if(!file6.open(QFile::WriteOnly | QFile::Text)){
                QMessageBox::warning(this,"FILE","FAILED 2");
            }
                while(!filein.atEnd()){
                    filein >> tempFirstName >> tempLastName >> tempUsername >> tempPassword >> tempPhone >> tempEmail >> Wallet >>
                    tempRating;
                    if (Username == tempUsername && Password==tempPassword){
                        if (Fare <= Wallet){
                            Fare = 0;
                            new_Wallet -= temp;
                        }
                        else if (Fare > Wallet){
                            Fare -= Wallet;
                            new_Wallet -= temp;
                        }
                        Wallet += new_Wallet;
                    }
                    tempout << tempFirstName << " " << tempLastName << " " << tempUsername << " " << tempPassword << " "<< tempPhone << " "
                    << tempEmail << " " << Wallet << " " << tempRating << "\r\n";
                }
            file5.close();
            file6.close();
            file5.remove("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");
            file6.rename("E:\\GariKaro\\GariKaroQT\\SignupFile.txt");

        UserBill U;
        U.setModal(true);
        U.exec();
}
