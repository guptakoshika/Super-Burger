#include<iostream> 
#include<process.h>
using namespace std;

class functions{
	public:
		// after order if confirmed the bill to be displayed.
	int displaybill(int bu,int ch)
	{
		cout<<"Number of burgers ordered: "<< bu << endl;
		if(ch==1)     //if number of slices are 1
		{
			cout<<"Total bill:  "<<bu*30<<endl;
			return bu*30;
		}
		else if(ch==2)    //if number of cheese slices are 2
		{
			cout<<"Total bill:  "<<bu*40<<endl;
			return bu*40;
		}
	}
	//for user input what to be done!
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
	int order(int *buns,int *pattes,int *cheese)
{
	int bu,ch,n;
	char c;
	cout << "Enter the no. of burgers" << endl;
	cin>>bu;
	while(*buns<2*bu)
	{
		cout<<"Not enough buns in stock, Buns left:"<<" "<< *buns <<" Re-enter burger's according to the stock";
		cin>>bu; 
	}
	*buns = *buns-2*bu;
	while(*pattes<bu)
	{
		cout<<"Not enough pattes in stock, Pattes left:"<<" "<< *pattes <<" Re-enter the burger's according to the stock"<<endl;
		cin>>bu;
	}
	*pattes = *pattes-1*bu;
	cout<<"Enter choice(1 for single cheese slice or 2 for double cheese)"<<endl;
	cin>>ch;
	while(ch<1||ch>2)
	{
	cout << "Invalid choice,Re-enter it" << endl;
	cin>>ch;
	}
	if(ch==1)
	{
		while(*cheese<bu)
		{
			cout << "Not enough cheese slices in stock,cheese slices left: "<< *cheese << " Re-enter the burger according to the stock" << endl;
			cin>>bu;
		}
		*cheese = *cheese-1*bu;
	}
	if(ch==2)
	{
		while(*cheese<2*bu)
		{
			cout << "Not enough cheese slices in stock,cheese slices left: "<< *cheese << " Re-enter the burger according to the stock" << endl;
			cin>>bu;
		}
		*cheese = *cheese-2*bu;

	 }
	 cout << "Confirm Order?" ;
	 cin >> c;
	 if(c=='y')
	 {
	 	n=displaybill(bu,ch);	
	 	return n;
	 }
	 else
	      int order (int *buns, int *pattes , int *cheese);
}
// to check the stock left.
void dstock(int buns,int pattes, int cheese)
{
	cout<<"Number of buns left: "<<buns<<endl;
	cout<<"Number of patties left: "<<pattes<<endl;
	cout<<"Number of cheese slices left: "<<cheese<<endl;
}
	void rec(int *bun, int *pat , int *che)
{
	int b,p,c;
	cout<<"Enter number of buns"<<endl;
	cin>>b;
	*bun+=b;
	cout<<"Enter number of pattes"<<endl;
	cin>>p;
	*pat+=p;
	cout<<"Enter number of cheese slices"<<endl;
	cin>>c;
	*che+=c;
}
};
class station1 : public virtual functions{
	public:
		int n,bun,pat,che,sales1;
		station1()
		{
			bun=2;
			pat = 1;
			che = 2;
		}
	void st1()
	{
		//bun,pat,che =2;
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	
			rec(&bun,&pat,&che);
				break;
			case 2:
				sales1=order(&bun,&pat,&che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
};
class station2 :  public virtual functions{
	public:
		int n,bun,pat,che,sales2;
		station2(){
			bun=2;
			pat = 1;
			che = 2;
		}
		void st2()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec(&bun,&pat,&che);
				break;
			case 2:
				sales2=order(&bun,&pat,&che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
};
class station3 : public virtual functions{
	public:
	int n,bun,pat,che,sales3;
	station3(){
			bun=2;
			pat = 1;
			che = 2;
		}
		void st3()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec(&bun,&pat,&che);
				break;
			case 2:
				sales3=order(&bun,&pat,&che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}
};  
	
class station4 : public virtual functions{
	public:
		int n,bun,pat,che,sales4;
		station4(){
			bun=2;
			pat = 1;
			che = 2;
		}
		void st4()
	{
		while(1){
		n=mainmenu();
			switch(n)
		{
			case 1:	rec(&bun,&pat,&che);
				break;
			case 2:
				sales4=order(&bun,&pat,&che);
				break;
			case 3:	
				dstock(bun,pat,che);
				break;
			case 4: exit(0);
			default:cout<<"Invalid choice";
      	}
      }
	}

};
class head_office: public station1, public station2, public station3, public station4{
	public:
		int total,n;
		display()
		{
			cout << "\t \t \t \t \t ";
			cout << "WELCOME TO SUPER BURGER- HEAD OFFICE" << endl;
			cout << "\t \t \t \t \t ";
			cout << "________________________________" << endl;
			cout << "\t \t \t \t";
			cout << "Enter station number to know sales details and 0 for all:";
			cin >> n;
			switch(n)
			{
			case 0:
				cout << "\t \t \t \t \t ";
				cout << "Sales from all station is Rs: "<<total;
				break;
			case 1:
				cout << "\t \t \t \t \t ";
				cout << "Sales from all station1 is Rs: "<< sales1;
				break;
			case 2:
				cout << "\t \t \t \t \t ";
				cout << "Sales from all station2 is Rs: "<< sales2;
				break;
			case 3:
				cout << "\t \t \t \t \t ";
				cout << "Sales from all station3 is Rs: "<< sales3;
				break;
			case 4:
				cout << "\t \t \t \t \t ";
				cout << "Sales from station4 is Rs: "<< sales4;
				break;
			default :
				exit(0);
			}
		}
};
 int main()
{
	int st;
	station1 s1;
	station2 s2;
	station3 s3;
	station4 s4;
	head_office h;
	while(1)
	{
		cout << "\n \n \n \n \n \n \n \n  ";
		cout << "\t \t \t \t \t ";
		cout << "Enter your station number: (5 for head office and 0 to exit) " ;
		cin >> st;
		cout << endl << endl;
			switch(st)
		{
			case 5:
				h.display();
				break;
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
			case 0:
				exit(0);	
			default:
			cout<<"Invalid choice";
	}
    }
   return 0;
}
