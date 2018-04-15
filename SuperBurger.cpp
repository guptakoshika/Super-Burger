#include<iostream> 
#include<process.h>
#include<windows.h>
#include "conio.h"
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoXY(int x, int y) 
{ 
CursorPosition.X = x; // Locates column
CursorPosition.Y = y; // Locates Row
SetConsoleCursorPosition(console,CursorPosition); // Sets position for next thing to be printed 
}
class functions{
	public:
	void displaybill(int bu,int ch)
	{
		cout<<"Number of burgers ordered"<<endl;
		if(ch==1)
		cout<<"Total bill  "<<bu*30<<endl;
		else if(ch==2)
		cout<<"Total bill  "<<bu*40<<endl;
	}
   	void mainmenu(){
	   int n;
		gotoXY(35,8);
		cout << "WELCOME TO SUPER BURGER" << endl;
		gotoXY(33,9);
		cout << "____________________________";
		gotoXY(40,12);
		cout << "MAIN MENU";
		gotoXY(40,13);
		cout << "1.Add the stock";
		gotoXY(40,14);
		cout << "2.Place your order";
		gotoXY(40,15);
		cout << "3.Stock left";
		gotoXY(40,16);
		cout << "4.Exit";
		gotoXY(30,20);
		cout << "Select an option by typing the numeric code:-";
		cin>>n;
		switch(n)
		{
			case 1:	rec();
				break;
			case 2:
				gotoXY(30,25);
				cout<<"Please give your information first"<<endl;
				info();
				order();
				calculate();
				displaybill();
				break;
			case 3:	dstock();
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
	}
};
class station1 : virtual public functions{
	public:
	void st1()
	{
		mainmenu();
	}
};
class station2 : virtual public functions{
	public:
};
class station3 : virtual public functions{
	public:
};  
	
class station4 : virtual public functions{
	public:
};
class head_office{
	public:
};
 int main()
{
	int n,st;
	while(1)
	{	gotoXY(35,5);
		cout << "enter your station number:" << endl;
		cout << st;
			switch(st)
		{
			case 1:
				
				break;
			case 2:
				break;
			case 3:
				
				break;
			case 4:
				break;
			default:
			cout<<"Invalid choice";
			exit(0);
      	}
    }
   return 0;
}
