using namespace std;

void PrintTitle(){                                                             //Global Function to print title
    int  len = 0;
	char str1[] = {"******************GARIKARO!******************"};
   	//For Welcome
   	len = strlen(str1);
   	for(int i = 0 ; i < len ; i++){  			
        putchar(str1[i]);
        Sleep(50);
    }
}

class Login{                                                                                         //Log In Class , Filing Left Only
protected:
    string name = "mustafa";
    string password = "123";
public:
    void Check_Login(string entered_name , string entered_password){
        if (entered_name  == name){
            Check_password(entered_password);
        }
    }
    void Check_password(string entered_password){
        if (entered_password == password){
            cout << "\nYou Have Successfully Logged In." << endl;
        }
    }
};

class SignUp{                                                                                       //SignUp Class , Filing Left Only
protected:
    string Full_Name;
    string Username;
    string Password;
    string Mobile_Number;
    string Email_ID;
public:
    void set_SignUp(string f_name , string U_name , string Pass , string number , string email){
        Full_Name = f_name;
        Username = U_name;
        Password = Pass;
        Mobile_Number = number;
        Email_ID = email;   
    }
};

class GariKroNOW{
public:
    
};

class GariScheduleKro{
    
};

class Driver: public Login , public SignUp {                                                            //Driver class
protected:
    string Car_Model;
    string Car_Manafacturer;
    string Car_RegistrationNumber;
    string Car_Type;
public:
    void Set_Car(string model , string manafacturer , string number , string type){
        Car_Model = model;
        Car_Manafacturer = manafacturer;
        Car_RegistrationNumber = number;
        Car_Type = type;
    }

};

class FareCalculation : public GariKroNOW , public GariScheduleKro{                                    //Calculation of fare
protected:
    float RatePer_Kilometer;
    float Waiting_Time;
    float Starting_Time;
    float Ending_Time;
public:

};

class User : public Login , public SignUp , public GariKroNOW , public GariScheduleKro{               //User class 
protected:
    string pickup_location;
    string dropoff_location;
    string modeOfTransport;
public: 
    void set_Locations(string pickup , string dropoff){
        pickup_location = pickup;
        dropoff_location = dropoff;
    }
};
