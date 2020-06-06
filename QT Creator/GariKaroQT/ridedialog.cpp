#include "ridedialog.h"
#include "ui_ridedialog.h"
#include "locations.h"
#include "mainwindow.h"
#include "usergarischedule.h"
#include "useraccesswallet.h"
#include "usereditaccountdetails.h"
#include "userchecknotifications.h"
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>


RideDialog::RideDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RideDialog)
{
    ui->setupUi(this);
}

RideDialog::~RideDialog()
{
    delete ui;
}
//Gaari book selection
void RideDialog::on_pushButton_Now_clicked()
{
    time_t system_time = time(NULL);
    struct tm *Time_Components = localtime (&system_time);                            //Breaking time into its components
    Booking_Date = Time_Components->tm_mday;                                          //Getting date
    Booking_Month = Time_Components->tm_mon;                                   		  //Getting month
    Booking_Year = Time_Components->tm_year;                                          //Getting year
    Booking_Hours = Time_Components ->tm_hour;                                        //Getting hours
    Booking_Minutes = Time_Components ->tm_min;
    Booking_Month += 1;
    Booking_Year += 1900;
    hide();
    Locations location;
    location.setModal(true);
    location.exec();
    location.on_pushButton_AC_clicked();

}

void RideDialog::on_pushButton_6_Exit_clicked()
{
    exit(1);
}

void RideDialog::on_pushButton2_Schedule_clicked()
{
    hide();
    UserGariSchedule U;
    U.setModal(true);
    U.exec();

}


void RideDialog::on_pushButton_WALLET_clicked()
{
    hide();
    UserAccessWallet U;
    U.setModal(true);
    U.exec();

}

void RideDialog::on_pushButton_EditAccountDetails_clicked()
{
    hide();
    UserEditAccountDetails U;
    U.setModal(true);
    U.exec();

}

void RideDialog::on_pushButton_3_Notifications_clicked()
{
    hide();
    UserCheckNotifications U;
    U.setModal(true);
    U.exec();
}
