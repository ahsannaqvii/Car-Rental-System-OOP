
using namespace std;
class GariKro{                                                                                  //Base Class
protected:
	string pickup_location , dropoff_location , Username;
	string Email , Phone , FirstName , LastName , Password , PickUp , DropOff;
    float RatePer_Kilometer , Waiting_Charges , Extra_Charges;
	float Distance  , Rating, Promo_Discount;
    int Waiting_Time , Starting_Hour , Starting_Minute;
	int Ending_Hour , Ending_Minute , Expected_Time , Ride_time;
	//Booking Details      
    int Booking_Date , Booking_Month , Booking_Year;
    int Booking_Hours , Booking_Minutes , Wallet,TransactionID;
    int RideOption , Fare , Payment_Option;														
    static int NumberOfPassengers;
public:
    virtual void Login() = 0;																//Pure Virtual Login Function
    virtual void SignUp() = 0; 																//Pure Virtual Signup Function                                                    
	template <class V_Type>
	void set_Locations(V_Type pickup_location , V_Type dropoff_location);
	void Fare_Calculation()  ;
    void rideDetails();
    void Print_Bill();
	
};
int GariKro ::  NumberOfPassengers = 0;

															//USER CLASS
class User : public GariKro{
protected:
    string modeOfTransport;
    //PromoCode Details
    string Promo_Type;
    int Promo_Validity;
    string entered_username;	//This also
	string entered_password;	//These variables are declared here so that friend function can access.	
public:
	friend istream & operator >> (istream&,  User&);
    void Login()	;																				//Login Function
    void SignUp()        ;                                                             				//Signup function
    void GariKro_Now()   ;                                                               //GariKro now function                                       
    void GariSchedule_Dates();													 //Getting minutes
    void GariSchedule_Time();
    void Check_Balance();
    void Add_Balance();
	void Notifications();
	void checkPassword();
	void changePhone();
	void changeEmail();
	void ViewDetails();
	void TransactionData();
private:
	void changePassword();
	
};
class Ride : public User {                                                                    //Details of ride
protected:
    string Driver_FirstName;
    string Driver_LastName;
    string Driver_PhoneNumber;
    string numberPlate;
    string VehicleName;
    string VehicleCompany;
    string Status;
    
public:
	friend class Admin;										                                    //Friend Class
	Ride();
	int Filing_1(ifstream &carfin,ofstream &temp);
    int Search_Vehicle(int RideOption);
    void Filing_3(fstream &carfin);
    void Changing_Status();		
	int Check_PromoCode(int Type);
	void chooseTransport();				
	void ArrivalMessage() 	;			                                	//Displays Arrival Message to System and User	
    void StartingMessage();
    void DropOffMessage();							                       //Displays DropOff Message to System and User
	void Payment_Method();
	void Payment();
		
};
												
class Driver : public GariKro{                                //Driver Portal
protected:
    string CNIC;
    string Car_Name,Car_Company;
    string Car_RegistrationNumber;
    string Car_Type;
public:
	friend class Admin;																				//Friend Class
	Driver();	
	void Login();                                												//Login Function
	void SignUp();                                                                       //Signup function											
    void SearchingRides_Message();
	void ArrivalMessage();
	void StartingMessage();
	void DropOffMessage();	
	int Filing_2(ifstream &fin);	
    int SearchingRides();
    void Set_Time();	
	void checkPassword()	;
	void changePhone();
	void Payment();																	

private:
	void changePassword(); 

};
class Admin : public GariKro{                                                                   //Admin Portal
protected:
    string VehicleType;
public:
	void SignUp();
    void Login()     ;                             											//Login Function
    void set_Charges();
	void searchDriver(Driver D1);
	void searchUser(Ride &R1);
	void removeDriver(Driver &D1);
	void removeUser(Ride &R1);
	void Add_Notificaitons();
	
};
