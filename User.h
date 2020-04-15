#include <iostream>
#include <string>
#include<fstream>//Header File
#include<conio.h>//Header File
#include<cctype>//Header File
#include<windows.h>//Header File
#include <time.h>
using namespace std;
class Interface //Or MainMenu or Account
{
	protected : 
	
	int i,x;
	int len;
	int flag;
	int op1;
	public: 
	Account()
	{
		flag=1;
		len=0;
	}
	void PrintTitle(int x)
	{
		
		char str1[] = {"******************GARIKARO!******************"};
		char str2[] = "**********THANK YOU FOR VISITING US**********";
   	
   		
   		if(x==1)  //For Welcome
   		{
   				len=strlen(str1);
   			 	for(i=0;i<len;i++)
        			{
        			
            			putchar(str1[i]);
            			Sleep(50);
       				 }
		}
		if(x==0)    //for exit
   		 {
       		 len = strlen(str2);
       		 for(i=0;i<len;i++)
       		 {
            	putchar(str2[i]);
            	Sleep(50);
        	}
    	}
	}
	void MainMenu()
	{
		
		cout<<"\n\nLog in as: \n";
		cout<<"(1)User \n";
		cout<<"(2)Driver \n";
		cout<<"(3)Admin \n";
		cout<<"(0)Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>op1;
		if(op1==1)
		{
			system("cls");
			cout<<"\n\t\t5 FREE RIDES ON FIRST LOG IN\n\n";
			//Take options if he wishes to log in or sign up , gonna do it later when we have learnt filing;
			signUp();
//			logIn();
		}
	}
//	void logIn()
//	{
//		//Gonna make it later.
//		userCredentials();
//	}
		void signUp()
		{
			userCredentials();
		}
		void userCredentials()
		{
			int f;
			char cusName[20];
			char cusNumber[13];
			cout<<"Customer's Detail:\n\n";
			while(flag)
			{
			
				cout<<"Enter your name: ";
        		cin>>cusName;
				f=strlen(cusName);
			if(f==0)
        		{
          	  cout<<"\nERROR\n";
          	  continue;
        		}
			for(int i=0;i<f;i++)
			{
				if((cusName[i]>='a'||cusName[i]>='A') && (cusName[i]<='z'||cusName[i]<='Z'))
				{
					flag=0;
				}
				else
				{
					cout<<("\nERROR\n");
					flag=1;
					break;
				}
			}
		}
			flag=1;
			while(flag)
			{
				cout<<"Enter your phone number:";
       			 cin>>cusNumber;
				f=strlen(cusNumber);
				if(f==0 || f!=11)
        		{
         		   cout<<"\nERROR\n";
         		   continue;
       			 }
				for(int i=0;i<f;i++)
				{
					if(cusNumber[i]>='0' && cusNumber[i]<='9')
					{
						flag=0;
					}
					else
					{
						 cout<<"\nERROR\n";
						flag=1;
						break;
					}
				}
			}
		
		}
		
};

class BookARide:public Interface
{
	protected : 
	
	public:
		void calculateFare();
	void calculateDistance();
	void confirmPickup(); 
	void confirmDropOff();//User can skip the dropoff.
	choiceOfPreference()
	{
		cout<<"\nEnter your choice of Preference:\n";
		cout<<"1.Gari Karo NOW!"<<endl;
		cout<<"2.Gari Schedule Karo!"<<endl;
		
	}
	int getTime() //Starting time when you booked the ride
	{
		int currentTime;
		 time_t rawtime;
	 	 struct tm * timeinfo;
  		time (&rawtime);
 		 timeinfo = localtime (&rawtime);
		currentTime=tm->tm_hour;
		return currentTime;
 
	}

};

class Car:public BookARide,public Interface
{
	
	public: 
	
	 void calculateFare()
	 {
	 	//Over riden because fare depends on type of car
	 }
	
	
	
};
class Bike :public BookARide,public Interface
{
	public: 
	
	 void calculateFare()
	 {
	 	//Over riden because fare depends on type of car
	 }
};
class Rickshaw :public BookARide,public Interface
{
	public: 
	
	 void calculateFare()
	 {
	 	//Over riden because fare depends on type of car
	 }
};

class GariKaro:public Rickshaw,public Car,public Bike 
{
	
}
	
