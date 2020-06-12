#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

extern QString pickup_location , dropoff_location , Username;
extern	QString Email , Phone , FirstName , LastName , Password , PickUp , DropOff;
extern float RatePer_Kilometer , Waiting_Charges , Extra_Charges;
extern float Distance , Promo_Discount , Rating;
extern int Waiting_Time , Starting_Hour , Starting_Minute;
extern int Ending_Hour , Ending_Minute , Expected_Time , Ride_time;
extern int Deposit;
    //Booking Details
extern int Booking_Date , Booking_Month , Booking_Year;
extern int Booking_Hours , Booking_Minutes , Wallet;
extern int RideOption , Fare , Payment_Option;
extern int NumberOfPassengers;
extern QString PromoCode , Promo_Type;
extern int Promo_Validity;

extern QString CNIC;
extern QString Car_Name,Car_Company;
extern QString Car_RegistrationNumber;
extern QString Car_Type;

extern QString Driver_FirstName;
extern QString Driver_LastName;
extern QString Driver_PhoneNumber;
extern QString VehicleName;
extern QString VehicleCompany;
extern QString numberPlate;
extern QString Status;
extern QString tempDriver_FirstName,tempDriver_LastName,tempDriver_PhoneNumber,tempVehicleName,tempVehicleCompany;
extern QString tempDropOff,tempStatus,tempnumberPlate,tempPickUp;
extern QString Location1,Location2,Location3;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Fare;
public slots :
    void on_pushButton_User_clicked();

    void on_pushButton_Driver_clicked();

    void on_pushButton_Admin_clicked();

private:
    Ui::MainWindow *ui; //using this pointer we will access all widgets
};
#endif // MAINWINDOW_H
