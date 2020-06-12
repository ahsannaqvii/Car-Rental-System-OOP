#include "driverchangedetails.h"
#include "ui_driverchangedetails.h"
#include "driverchangenumber.h"
#include "driverchangepassword.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

DriverChangeDetails::DriverChangeDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverChangeDetails)
{
    ui->setupUi(this);
}

DriverChangeDetails::~DriverChangeDetails()
{
    delete ui;
}

void DriverChangeDetails::on_pushButton_Password_clicked()
{
    DriverChangePassword D;
    D.setModal(true);
    D.exec();
    D.on_pushButton_OK_clicked();
}

void DriverChangeDetails::on_pushButton_Number_clicked()
{
    hide();
    DriverChangeNumber D;
    D.setModal(true);
    D.exec();
}


