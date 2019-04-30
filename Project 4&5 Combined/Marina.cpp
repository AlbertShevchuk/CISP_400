/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include "Marina.h"

Marina::Marina()
{
	_num_boats=0;
	for (unsigned i=0; i<MAX_BOATS; i++)
		_m[i]=NULL;
}

void Marina::Run()
{
	cout << endl;
	cout << "Welcome to ALbert's Marina";
	cout << endl;
	Boat* m[MAX_BOATS];
	char name[11];
	char num ='0'; 
	strcpy(name, "My Boat");
	name[9]=num++;
	name[10]='\0';
	unsigned choice = 0 ;
	unsigned boats = 0;
	unsigned option = 0;

	while (choice < 5)
	{
		cout << endl;
		cout << "Enter Number 1 to Place a new Boat into the Marina if there is room"<<endl;
		cout << "Enter Number 2 to Display Emergency Procedures for each boat in the Marina"<<endl;
		cout << "Enter Number 3 to Display Propulsion Maintenance for each boat in the Marina"<<endl;
		cout << "Enter Number 4 to Display all of the Boats in the Marina"<<endl;
		cout << "Enter Number 5 to Display Exit the simulation"<<endl;
		cout << "Number Choice:  ";
		cin >> choice;
		cout << endl;
		
		switch(choice)
		{
			case 1:
				if(boats<MAX_BOATS)
				{
					cout << endl;
					cout << "What Kind of Boat do you have?"<<endl;
					cout << "Enter Number 1 for Ski"<<endl;
					cout << "Enter Number 2 for Cabin Cruiser"<<endl;
					cout << "Enter Number 3 for Kayak"<<endl;
					cout << "Enter Number 4 for Shanty"<<endl;
					cout << "Number Option:  ";
					cin >> option;
					cout << endl;

					if(option==1)
						m[boats] = new Ski(name);
					if(option==2)
						m[boats] = new CabinCruiser(name);
					if(option==3)
						m[boats] = new Kayak(name);
					if(option==4)
						m[boats] = new Shanty(name);
					++boats;
				}
				else
				{
					cout << "The Marina is Full!!!"<<endl;
				}
			break;
                               
			case 2:
				if (boats==0)
					cout << "The Marina is Empty!!!"<<endl;
				else
				{
					cout<<endl;
					int k = 0;
					while (k<boats)
					{
						cout << "Emergency Procedures for Boat: "<<k+1<<endl;
						m[k] -> Emergency_Procedures();
						cout<<endl;
						++k;
					}
				}
			break ;
			
			case 3:
				if (boats==0)
					cout << "The Marina is Empty!!!"<<endl;
				else
				{
					cout<<endl;
					int k = 0;
					while (k<boats)
					{
						cout << "Propulsion Maintenance for Boat: "<<k+1<<endl;
						m[k] -> Propulsion_Maintenance();
						cout<<endl;
						++k;
					}
				}
			break ;
	
			case 4 :
				if (boats==0)
					cout << "The Marina is Empty!!!"<<endl;
				else
				{
					cout<<endl;
					int k = 0;
					while (k<boats)
					{
						m[k] -> Display();
						cout<<endl;
						++k;
					}
				}
			break;
		} 
	}
}

Marina::~Marina()
{
	for (unsigned i=0;i<MAX_BOATS; i++)
		delete _m[i];
}
