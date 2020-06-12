#include "driverlogsign.h"
#include "ui_driverlogsign.h"
#include "driversignup.h"
#include "driver2.h"

DriverLogSign::DriverLogSign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverLogSign)
{
    ui->setupUi(this);
}

DriverLogSign::~DriverLogSign()
{
    delete ui;
}

void DriverLogSign::on_pushButton_Login1_clicked()
{
    Driver2 driver;
    hide();
    driver.setModal(true);
    driver.exec();
}

void DriverLogSign::on_pushButton_Signup_clicked()
{
    DriverSignUp D;
    hide();
    D.setModal(true);
    D.exec();
    D.on_pushButton_Signup1_clicked();
}
