#include "driverstartride.h"
#include "ui_driverstartride.h"
#include "driverendride.h"
#include "mainwindow.h"
#include "time.h"
#include "cstdlib"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

DriverStartRide::DriverStartRide(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverStartRide)
{
    ui->setupUi(this);
}

DriverStartRide::~DriverStartRide()
{
    delete ui;
}

void DriverStartRide::on_pushButton_Yes_clicked()
{
    time_t system_time = time(NULL);
    struct tm *Time_Components = localtime (&system_time);                            			//Breaking time into its components
    Booking_Date = Time_Components->tm_mday;                                         		 	//Getting date
    Booking_Month = Time_Components->tm_mon;                                         			//Getting month
    Booking_Year = Time_Components->tm_year;                                          			//Getting year
    Booking_Hours = Time_Components ->tm_hour;                                        			//Getting hours
    Booking_Minutes = Time_Components ->tm_min;

    Starting_Hour = Booking_Hours;
    Starting_Minute = Booking_Minutes + Waiting_Time;
    if (Starting_Minute > 60){
        Starting_Hour = Starting_Hour + 1;
        Starting_Minute = Starting_Minute - 60;
    }
    hide();
    DriverEndRide D;
    D.setModal(true);
    D.exec();
    D.on_pushButton_Yes_clicked();
}
