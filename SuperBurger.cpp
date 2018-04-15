#include<iostream> 
#include<process.h>
using namespace std;

class functions{
	public:
	int displaybill(int bu,int ch)
	{
		cout<<"Number of burgers ordered: "<< bu << endl;
		if(ch==1)
		{
			cout<<"Total bill:  "<<bu*30<<endl;
			return bu*30;
		}
		else if(ch==2)
		{
			cout<<"Total bill:  "<<bu*40<<endl;
			return bu*40;
		}
	}
   	int mainmenu(){
	   int n;
		cout << "\t \t \t \t \t ";
		cout << "WELCOME TO SUPER BURGER" << endl;
		cout << "\t \t \t \t \t ";
		cout << "____________________________" << endl;
		cout << "\t \t \t \t \t ";
		cout << "MAIN MENU" << endl;
		cout << "\t \t \t \t \t ";
		cout << "1.Add the stock" << endl;
	    cout << "\t \t \t \t \t ";
		cout << "2.Place your order" << endl;
		cout << "\t \t \t \t \t ";
		cout << "3.Stock left" << endl;
		cout << "\t \t \t \t \t ";
		cout << "4.Exit" << endl;
		cout << "\t \t \t \t \t ";
		cout << "Select an option by typing the numeric code:-";
		cin>>n;
		return n;
	}
	int order(int buns,int pattes,int cheese)
{
	int bu,ch,n;
	char c;
	cout<<"Enter the no. of burgers"<<endl;
	cin>>bu;
	while(buns<2*bu)
	{
		cout<<"Not enough buns in stock, Buns left:"<<" "<<buns<<" Re-enter burger's according to the stock";
		cin>>bu;
	}
	while(pattes<bu)
	{
		cout<<"Not enough pattes in stock, Pattes left:"<<" "<<pattes<<" Re-enter the burger's according to the stock"<<endl;
		cin>>bu;
	}
	cout<<"Enter choice(1 for single cheese slice or 2 for double cheese)"<<endl;
	cin>>ch;
	while(ch<1||ch>2)
	{
	cout<<"Invalid choice,Re-enter it"<<endl;
	cin>>ch;
	}
	if(ch==1)
	{
		while(cheese<bu)
		{
			cout<<"Not enough cheese slices in stock,cheese slices left: "<<cheese<<" Re-enter the burger according to the stock"<<endl;
			cin>>bu;
		}
	}
	if(ch==2)
	{
		while(cheese<2*bu)
		{
			cout<<"Not enough cheese slices in stock,cheese slices left: "<<cheese<<" Re-enter the burger according to the stock"<<endl;
			cin>>bu;
		}
	 }
	 cout << "Confirm Order?" ;
	 cin >> c;
	 if(c=='y')
	 {
	 	n=displaybill(bu,ch);	
		 return n;
	 }
		else
		{
			int order(int buns,int pattes,int cheese);
		}

}
void dstock(int buns,int pattes, int cheese)
{
	cout<<"Number of buns left:"<<buns<<endl;
	cout<<"Number of patties left:"<<pattes<<endl;
	cout<<"Number of cheese slices left:"<<cheese<<endl;
}

};
class station1 : virtual public functions{
	public:
		int n,bun,pat,che;
	void st1()
	{
		bun,pat,che =0;
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	
			rec();
				break;
			case 2:
				order(bun,pat,che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
	void rec()
{
	cout<<"Enter number of buns"<<endl;
	cin>>bun;
	bun+=bun;
	cout<<"Enter number of pattes"<<endl;
	cin>>pat;
	pat+=pat;
	cout<<"Enter number of cheese slices"<<endl;
	cin>>che;
	che+=che;
}
};
class station2 : virtual public functions{
	int n,bun,pat,che;
	public:
		void st2()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec();
				break;
			case 2:
				order(bun,pat,che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
			void rec()
{
	cout<<"Enter number of buns"<<endl;
	cin>>bun;
	bun+=bun;
	cout<<"Enter number of pattes"<<endl;
	cin>>pat;
	pat+=pat;
	cout<<"Enter number of cheese slices"<<endl;
	cin>>che;
	che+=che;
}
};
class station3 : virtual public functions{
	public:
	int n,bun,pat,che;
		void st3()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec();
				break;
			case 2:
				order(bun,pat,che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
void rec()
{
	cout<<"Enter number of buns"<<endl;
	cin>>bun;
	bun+=bun;
	cout<<"Enter number of pattes"<<endl;
	cin>>pat;
	pat+=pat;
	cout<<"Enter number of cheese slices"<<endl;
	cin>>che;
	che+=che;
}
};  
	
class station4 : virtual public functions{
	public:
		int n,bun,pat,che;
		void st4()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec();
				break;
			case 2:
				order(bun,pat,che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
		void rec()
{
	cout<<"Enter number of buns"<<endl;
	cin>>bun;
	bun+=bun;
	cout<<"Enter number of pattes"<<endl;
	cin>>pat;
	pat+=pat;
	cout<<"Enter number of cheese slices"<<endl;
	cin>>che;
	che+=che;
}
};
class head_office: public station1, public station2, public station3, public station4{
	public:
};
 int main()
{
	int st;
	station1 s1;
	station2 s2;
	station3 s3;
	station4 s4;
	while(1)
	{
		cout << "\n \n \n \n \n \n \n \n  ";
		cout << "\t \t \t \t \t ";
		cout << "Enter your station number:" ;
		cin >> st;
		cout << endl << endl;
			switch(st)
		{
			case 1:
				s1.st1();
				break;
			case 2:
				s2.st2();
				break;
			case 3:
				s3.st3();
				break;
			case 4:
				s4.st4();
				break;
			default:
			cout<<"Invalid choice";
			exit(0);
	}
    }
   return 0;
}
