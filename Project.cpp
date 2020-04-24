// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<fstream>                                            //Header File
#include<conio.h>                                            //Header File
#include<cctype>                                             //Header File
#include<windows.h>                                          //Header File
#include "Project.h"                                         //Our Header File 
using namespace std;

void PrintTitle();                                           //Global Function

int main(){
    //Print Title
    PrintTitle();
    //Main Menu
	int Option1 , Option2;
    string Username , Password;
    User U;
    Driver D;
	cout << "\n\nLog in as:";
	cout << "\n1.User";
	cout << "\n2.Driver";
	cout << "\n3.Admin";
	cout << "\n0.Exit ";
	cin >> Option1;
	switch(Option1){													      
        case 1:                                                                     //User Portal
            cout<<"\nDo you already have an account?";
            cout << "\n1.Yes \n2.No ";
            cin >> Option2;
            if(Option2 == 1){
                cout << "\nEnter your username: ";
                cin >> Username;
                cout << "Enter your password: ";
                cin >> Password;								
                U.Check_Login(Username,Password);
            }
            else if(Option2 == 2){
                string FullName , Email , Phone;
                cout << "\n\t\tSign Up Now!" << endl;
                cout << "\nEnter your full name: ";
                cin >> FullName;
                cout << "Enter your username: ";
                cin >> Username;
                cout << "Enter your password: ";
                cin >> Password;
                cout << "Enter your phone number: ";
                cin >> Phone;
                cout << "Enter your email id: ";
                cin >> Email;
                U.set_SignUp(FullName , Username , Password , Phone , Email);
            }
            break;
	    case 2:										                                //Driver Portal
            cout<<"\nDo you already have an account?";
            cout << "\n1.Yes \n2.No ";
            cin >> Option2;
            if(Option2 == 1){
                cout << "\nEnter your username: ";
                cin >> Username;
                cout << "Enter your password: ";
                cin >> Password;																
                D.Check_Login(Username , Password);
            }
            else if(Option2 == 2){
                string model , manafacturer , reg_num , type;
                string FullName , Email , Phone;
                cout << "\n\t\tSign Up Now!" << endl;
                cout << "\nEnter your full name: ";
                cin >> FullName;
                cout << "Enter your username: ";
                cin >> Username;
                cout << "Enter your password: ";
                cin >> Password;
                cout << "Enter your phone number: ";
                cin >> Phone;
                cout << "Enter your email id: ";                             //Instead of email ID lets ask for the CNIC Number;
                cin >> Email;
                D.set_SignUp(FullName , Username , Password , Phone , Email);
                cout << "\n\t\tCAR DETAILS" << endl;
                cout << "\nEnter car Model: ";
                cin >> model;
                cout << "\nEnter car manafacturer: ";
                cin >> manafacturer;
                cout << "Enter car registration number: ";
                cin >> reg_num;
                cout << "Enter car type: ";
                cin >> type;
                D.Set_Car(model , manafacturer, reg_num , type);
            }
            break;
	    case 3:											                                 //Admin Portal
            break;
	    case 0:												                             //Exit
		    break;
    }
    if(Option1 != 0 && Option1 == 1){
        int Option3;
        string pickup , dropoff;
        system("cls");
        PrintTitle();
        cout << "\n1.Gari Karo NOW!" << endl;
        cout << "\n2.Gari Schedule Karo! "<<endl;
        cin >> Option3;
        cout << "\nEnter your pickup location: ";
        cin >> pickup;
        cout << "\nEnter drop off location: ";
        cin >> dropoff;
        U.set_Locations(pickup , dropoff);
        switch(Option3){
            case 1:                                                                 //GariKro Now
                
            case 2:                                                                 //Gari Schedule Kro
                cout << "\nSelect Date to pickup: ";
                                                                                //We have to make an array that will display today's, 
                                                                                //tomorrow's and day after that date    
                cout << "\nSelect time slot: ";
                                                                                //Have to connect with time libaray and show available slots
        }
    }
}
    
//after selecting to whether schedule the ride or take ride now
//we will ask for pick and drop off locations
//if he says schedule a ride then we will ask for time and date
//then validate the time and date and have to store it in a file or variable 
//then we will ask the mode of transport
//then we will appoint him a driver
//then driver will notify as soon as he will arrive at the location
//waiting time will start
//user will enter the car and driver will start the ride
//starting time will be noted
//after reaching its destination, driver will end the ride
//a bill will be generated
//driver will enter the amount paid by the user
//we will check how much amount to return or the amount recieved is equal to the bill
//then we will give a thankyou message
