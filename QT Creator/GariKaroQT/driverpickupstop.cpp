#include "driverpickupstop.h"
#include "ui_driverpickupstop.h"
#include "driverstartride.h"
#include "mainwindow.h"
#include "cstdlib"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

DriverPickupStop::DriverPickupStop(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverPickupStop)
{
    ui->setupUi(this);
}

DriverPickupStop::~DriverPickupStop()
{
    delete ui;
}

void DriverPickupStop::on_pushButton_Yes_clicked()
{
    srand (time(NULL));
    Waiting_Time = rand()%10;
    hide();
    DriverStartRide D;
    D.setModal(true);
    D.exec();
}
