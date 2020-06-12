#include "userdisplaydetails.h"
#include "ui_userdisplaydetails.h"
#include "promocode.h"
#include "locations.h"
#include "mainwindow.h"
#include "time.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>


UserDisplayDetails::UserDisplayDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDisplayDetails)
{
    ui->setupUi(this);
}

UserDisplayDetails::~UserDisplayDetails()
{
    delete ui;
}

void UserDisplayDetails::on_pushButton_Search_clicked()
{
    QString x = "Driver Name: " + Driver_FirstName + " " + Driver_LastName + "\nContact Number: " + Driver_PhoneNumber
    + "\nCar Name: " + VehicleCompany + " " + VehicleName +"\nCar Number Plate: "+ numberPlate;
    ui->textBrowser_Show->setText(x);
}

void UserDisplayDetails::on_pushButton_OK_clicked()
{

    Promocode P;
    P.setModal(true);
    P.exec();
}
