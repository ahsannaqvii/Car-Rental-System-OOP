#include "scheduletimeslots.h"
#include "ui_scheduletimeslots.h"
#include "mainwindow.h"
#include "scheduletransport.h"

ScheduleTimeSlots::ScheduleTimeSlots(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScheduleTimeSlots)
{
    ui->setupUi(this);
}

ScheduleTimeSlots::~ScheduleTimeSlots()
{
    delete ui;
}

void ScheduleTimeSlots::on_pushButton_TIME1_clicked()
{
    Booking_Hours = 15;
    Booking_Minutes = 0;
    ScheduleTransport ScheduleMode;
    ScheduleMode.setModal(true);
    ScheduleMode.exec();
}

void ScheduleTimeSlots::on_pushButton_2_TIME2_clicked()
{
    Booking_Hours = 17;
    Booking_Minutes = 0;
    ScheduleTransport ScheduleMode;
    ScheduleMode.setModal(true);
    ScheduleMode.exec();
}
