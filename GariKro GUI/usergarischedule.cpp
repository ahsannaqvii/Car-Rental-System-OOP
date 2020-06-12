#include "usergarischedule.h"
#include "ui_usergarischedule.h"
#include "mainwindow.h"
#include "scheduletimeslots.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

UserGariSchedule::UserGariSchedule(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserGariSchedule)
{
    ui->setupUi(this);
}

UserGariSchedule::~UserGariSchedule()
{
    delete ui;
}

void UserGariSchedule::on_pushButton_Date1_clicked()
{
    pickup_location= ui->lineEdit_PickupLock->text();
    dropoff_location= ui->lineEdit_2_DropoffLock->text();
    Booking_Date=7;
    Booking_Month=6;
    Booking_Year=2020;
     ScheduleTimeSlots ScheduleRide;
     ScheduleRide.setModal(true);
     ScheduleRide.exec();
}

void UserGariSchedule::on_pushButton_2_Date2_clicked()
{
    pickup_location= ui->lineEdit_PickupLock->text();
    dropoff_location= ui->lineEdit_2_DropoffLock->text();
    Booking_Date=8;
    Booking_Month=6;
    Booking_Year=2020;
    ScheduleTimeSlots ScheduleRide;
    ScheduleRide.setModal(true);
    ScheduleRide.exec();
}
