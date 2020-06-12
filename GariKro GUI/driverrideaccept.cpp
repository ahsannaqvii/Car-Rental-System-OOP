#include "driverrideaccept.h"
#include "ui_driverrideaccept.h"
#include "mainwindow.h"
#include "driverridedialog.h"
#include "driverpickupstop.h"
#include "ridedialog.h"

DriverRideAccept::DriverRideAccept(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverRideAccept)
{
    ui->setupUi(this);
}

DriverRideAccept::~DriverRideAccept()
{
    delete ui;
}

void DriverRideAccept::on_pushButton_ShowDetails_clicked()
{
    ui->textBrowser_Details->setText(D);
}

void DriverRideAccept::on_pushButton_Accept_clicked()
{
    hide();
    DriverPickupStop D;
    D.setModal(true);
    D.exec();
}

void DriverRideAccept::on_pushButton_Reject_clicked()
{
    hide();
    DriverRideDialog D;
    D.setModal(true);
    D.exec();
}


