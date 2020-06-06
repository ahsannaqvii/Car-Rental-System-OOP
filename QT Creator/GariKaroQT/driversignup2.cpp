#include "driversignup2.h"

DriverSignUp2::DriverSignUp2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DriverSignUp2)
{
    ui->setupUi(this);
}

DriverSignUp2::~DriverSignUp2()
{
    delete ui;
}
