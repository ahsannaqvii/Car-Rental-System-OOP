#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "user2.h"
#include "admin.h"
#include "logsignform.h"
#include "driverlogsign.h"

float RatePer_Kilometer , Waiting_Charges , Extra_Charges;
float Distance = 0 , Promo_Discount = 0 , Rating = 0;
int Deposit = 0 ;
int Waiting_Time , Starting_Hour , Starting_Minute;
int Ending_Hour , Ending_Minute , Expected_Time , Ride_time;
int Booking_Date , Booking_Month , Booking_Year;
int Booking_Hours , Booking_Minutes , Wallet = 0;
int RideOption = 0 , Fare = 0 , Payment_Option = 0;
int NumberOfPassengers = 0;
int Promo_Validity = 0;
QString pickup_location , dropoff_location , Username;
QString Email , Phone , FirstName , LastName , Password , PickUp , DropOff;
QString PromoCode , Promo_Type;
QString CNIC;
QString Car_Name,Car_Company;
QString Car_RegistrationNumber;
QString Car_Type;
QString Driver_FirstName;
QString Driver_LastName;
QString Driver_PhoneNumber;
QString VehicleName;
QString VehicleCompany;
QString numberPlate;
QString Status;
QString tempDriver_FirstName,tempDriver_LastName,tempDriver_PhoneNumber,tempVehicleName,tempVehicleCompany;
QString tempDropOff,tempStatus,tempnumberPlate,tempPickUp;
QString Location1,Location2,Location3;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_User_clicked()
{
    hide();
    LogSignForm Login;
    Login.setModal(true);
    Login.exec();
    Login.on_pushButton_Login1_clicked();

}

void MainWindow::on_pushButton_Driver_clicked()
{
   hide();
   DriverLogSign Login;
   Login.setModal(true);
   Login.exec();
   Login.on_pushButton_Login1_clicked();
}

void MainWindow::on_pushButton_Admin_clicked()
{
    hide();
    admin admin;
    admin.setModal(true);
    admin.exec();
    admin.on_pushButton_Login_clicked();
}
