#include <bits/stdc++.h>
using namespace std;

class YellowPages
{
		char name[50];
		char add[50];
		char phone1[10];
		char phone2[10];
		char mobile[12];
	public:
		 YellowPages();
		 void start();
		 void end();
		 void mainMenu();
		 void dispMenu();
		 void changeMenu();
		 void categoryMenu();
		 void dispCategory(char[],char[]);
		 void dispContact();
		 void addContact(char[]);
		 void modifyContact(char[]);
		 void head();
};

//constructor
YellowPages::YellowPages()
{
	name[0]='\0';
	add[0]='\0';
	phone1[0]='\0';
	phone2[0]='\0';
	mobile[0]='\0';
}

// beginning of program
void YellowPages::start()
{
	int i,j;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t W E L C O M E \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t      TO       \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\tY E L L O W  P A G E S  S Y S T E M\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t       D E V E L O P E D\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t      BY       \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t      M A N A S V I\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
	std::cout<<"PRESS ANY KEY TO CONTINUE...";
}

// end of program
void YellowPages::end()
{
	int i,j;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t  T H A N K S  F O R  U S I N G\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t      THE    \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\tY E L L O W  P A G E S  S Y S T E M\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t       D E V E L O P E D\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t      BY       \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	std::cout<<"***\t\t\t     M A N A S V I\t\t\t***"<<endl;
	std::cout<<"***\t\t\t\t               \t\t\t\t***"<<endl;
	for(i= 1; i<=3 ; i++)
	{
		for(j=1 ; j<=75 ; j++)
		{
			std::cout<<"*";
		}
		std::cout<<endl;
	}
}

//main menu
void YellowPages::mainMenu()
{
	int ch1,ch2,ch3,ch4;
	do
	{
		dispMenu();
		std::cout<<"       Enter Choice : ";
		cin>>ch1;
		switch(ch1)
		{
			case 1 :  categoryMenu();
					std::cout<<"       Enter Choice : ";
					cin>>ch2;
					switch(ch2)
					{
						case  1 :  dispCategory("hospital.123","Hospitals");
								break;
						case 2 : 	dispCategory("bank.123","Banks");
								break;
						case 3 :	dispCategory("school.123","Schools/Colleges");
								break;
						case 4 : 	dispCategory("hostel.123","Hostels");
								break;
						case 5 :	dispCategory("hotel.123","Hotels");
								break;
						case 6 :	dispCategory("blood.123","Blood Banks");
								break;
						default:	std::cout<<"       W R O N G  C H O I C E  !!!  T R Y A G A I N"<<endl<<endl;
					}
					break;
			case 2 :  dispCategory("hospital.123","Hospitals");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					dispCategory("bank.123","Banks");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					dispCategory("school.123","Schools/Colleges");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					dispCategory("hostel.123","Hostels");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					dispCategory("hotel.123","Hotels");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					dispCategory("blood.123","Blood Banks");
					std::cout<<"\nPRESS ANY KEY TO CONTINUE...";
		
					break;
			case 3 :  categoryMenu();
					std::cout<<"    Enter Choice : ";
					cin>>ch3;
					switch(ch3)
					{
						case 1 :  addContact("hospital.123");
								break;
						case 2 : 	addContact("bank.123");
								break;
						case 3 :	addContact("school.123");
								break;
						case 4 : 	addContact("hostel.123");
								break;
						case 5 :	addContact("hotel.123");
								break;
						case 6 :	addContact("blood.123");
								break;
						default:	std::cout<<"       W R O N G  C H O I C E  !!!  T R Y A G A I N"<<endl<<endl;
					}
					break;
			case 4 :  categoryMenu();
					std::cout<<"    Enter Choice : ";
					cin>>ch4;
					switch(ch4)
					{
						case 1 :  modifyContact("hospital.123");
								break;
						case 2 : 	modifyContact("bank.123");
								break;
						case 3 :	modifyContact("school.123");
								break;
						case 4 : 	modifyContact("hostel.123");
								break;
						case 5 :	modifyContact("hotel.123");
								break;
						case 6 :	modifyContact("blood.123");
								break;
						default:	std::cout<<endl<<"  W R O N G C H O I C E  !!!  T R Y A G A I N"<<endl<<endl;
					}
					break;
			case 5 :
					break;
			default:	std::cout<<"\n       W R O N G  C H O I C E !!!  T R Y  A G A I N"<<endl<<endl;
		}
	}while(ch1!=5);
}

// to display menu
void YellowPages::dispMenu()
{
	std::cout<<endl;
	std::cout<<"  Y E L L O W  P A G E S  S Y S T E M"<<endl;
	std::cout<<"  -----------------------------------"<<endl;
	std::cout<<"       1. Display a Category "<<endl;
	std::cout<<"       2. Display All Categories"<<endl;
	std::cout<<"       3. Add a Contact"<<endl;
	std::cout<<"       4. Modify a Contact"<<endl;
	std::cout<<"       5. Quit"<<endl;
}

// display category menu
void YellowPages::categoryMenu()
{
	std::cout<<endl;
	std::cout<<" S E L E C T   C A T E G O R Y "<<endl;
	std::cout<<" ------------------------------"<<endl;
	std::cout<<"    1.  Hospitals"<<endl;
	std::cout<<"    2.  Banks "<<endl;
	std::cout<<"    3.  Schools/Colleges"<<endl;
	std::cout<<"    4.  Hostels"<<endl;
	std::cout<<"    5.  Hotels"<<endl;
	std::cout<<"    6.  Blood Banks"<<endl;
}

// adds a contact
void YellowPages::addContact(char cat[])
{
	YellowPages y;
	ofstream fout;
	int c;
	fout.open(cat,ios::app|ios::binary);
	if(!fout)
	{
		std::cout<<"\nS O R R Y  !!!  C A N'T  O P E N  F I L E"<<endl<<endl;
		return;
	}
	do
	{
		std::cout<<endl<<endl;
		std::cout<<"    Name Of Contact    : ";	gets(y.name);
		std::cout<<"    Address Of Contact : ";	gets(y.add);
		std::cout<<"    Phone No. 1        : ";	gets(y.phone1);
		std::cout<<"    Phone No. 2        : ";	gets(y.phone2);
		std::cout<<"    Mobile             : ";	gets(y.mobile);
		fout.write((char*)&y,sizeof(YellowPages));
		std::cout<<"    Add More ( Yes = 1, No = 0) ? ";
		cin>>c;
	}while(c==1);
	fout.close();
}

// displays a category contacts
void YellowPages::dispCategory(char cat[],char nm[])
{
	YellowPages y;
	ifstream fin;
	fin.open(cat,ios::binary);
	if(!fin)
	{
		std::cout<<"\nS O R R Y  !!!  N O  C O N T A C T S   I N   T H I S   C A T E G O R Y"<<endl<<endl;
		return;
	}
	int c=0;
	std::cout<<endl<<endl;
	std::cout<<"==========================="<<endl;
	std::cout<<nm<<endl;
	std::cout<<"==========================="<<endl;
	head();
	while(fin.read((char*)&y,sizeof(YellowPages)))
	{
		c++;
		y.dispContact();
		if(c==22)
		{
			c=0;
			std::cout<<endl<<"PRESS ANY KEY TO CONTINUE...";

			head();
		}
	}
	std::cout<<endl<<endl;
	fin.close();
}

// to display 1 record a time
void YellowPages::dispContact()
{
	std::cout<<endl<<setiosflags(ios::left)<<setw(25)<<name<<setw(24)<<add<<setw(10)<<phone1<<setw(10)<<phone2<<setw(10)<<mobile;
}

// to display the heading
void YellowPages::head()
{
	std::cout<<endl;
	std::cout<<"       NAME               ADDRESS                 PHONE 1  PHONE 2    MOBILE"<<endl;
	std::cout<<"-------------------------------------------------------------------------------";
}

// modifies a contact
void YellowPages::modifyContact(char cat[])
{
	YellowPages y;
	ofstream fout;
	ifstream fin;
	char cmpy[50];
	int d,ch,f;
	fout.open("temp1.123",ios::trunc|ios::binary);
	fin.open(cat,ios::binary);
	if(!fout || !fin)
	{
		std::cout<<"\n S O R R Y  !!!  C A N'T  O P E N  F I L E"<<endl<<endl;
		return;
	}
	std::cout<<endl;;
	std::cout<<"    Enter Contact Name : ";
	gets(cmpy);
	f=0;
	while(fin.read((char*)&y,sizeof(YellowPages)))
	{
		d=stricmp(cmpy,y.name);
		if(d==0)
		{
			f=1;
			std::cout<<"\n    Contact Name : "<<y.name;
			std::cout<<"\n    Address      : "<<y.add;
			std::cout<<"\n    Phone 1      : "<<y.phone1;
			std::cout<<"\n    Phone 2      : "<<y.phone2;
			std::cout<<"\n    Mobile       : "<<y.mobile;
			changeMenu();
			std::cout<<"    Enter Choice : ";
			cin>>ch;
			switch(ch)
			{
				case 1 :  std::cout<<"   Enter New Contact Name : ";
						gets(y.name);
						break;
				case 2 :  std::cout<<"   Enter New Address : ";
						gets(y.add);
						break;
				case 3 :  std::cout<<"   Enter New Phone 1 : ";
						gets(y.phone1);
						break;
				case 4 :  std::cout<<"   Enter New Phone 2 : ";
						gets(y.phone2);
						break;
				case 5 :  std::cout<<"   Enter New Mobile : ";
						gets(y.mobile);
						break;
				default:	std::cout<<"\n   WRONG CHOICE !!! NO CHANGES MADE";
			}
		}
		fout.write((char*)&y,sizeof(YellowPages));
	}
	if(f==0)
	{
		std::cout<<endl;
		std::cout<<"     NO SUCH RECORD ";
	}
	fout.close();
	fin.close();
	remove(cat);
	rename("temp1.123",cat);
}

// displays change menu
void YellowPages::changeMenu()
{
	std::cout<<endl;
	std::cout<<" C H A N G E  W H A T ?"<<endl;
	std::cout<<" ----------------------"<<endl;
	std::cout<<"    1.  Name"<<endl;
	std::cout<<"    2.  Address "<<endl;
	std::cout<<"    3.  Phone 1"<<endl;
	std::cout<<"    4.  Phone 2"<<endl;
	std::cout<<"    5.  Mobile"<<endl;
}

// main()…
void main()
{
	YellowPages p;
	p.start();
	p.mainMenu();
	p.end();
}
