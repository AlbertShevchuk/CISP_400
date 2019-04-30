/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include "Shanty.h"

Shanty::Shanty()
:MusclePowered() 
{ 
	Set_Muscle_Drive_Type(SWEEP);
	Set_Hull_Type(DISPLACEMENT);
}

Shanty::Shanty(HULL_TYPE hull_type, const unsigned* num_berths, const char* name)
:MusclePowered(name)
{ }

Shanty::Shanty(const char* name)
:MusclePowered(name), _num_berths(3) 
{ 
	Set_Muscle_Drive_Type(SWEEP);
	Set_Hull_Type(DISPLACEMENT);
}

Shanty::~Shanty(){ }

void Shanty::Set_Num_Berths (unsigned num_berths)
{
	_num_berths = num_berths;
}

unsigned Shanty::Get_Num_Berths() const
{
	return _num_berths;
}

void Shanty::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void Shanty::Emergency_Procedures ( )
{
	MusclePowered::Emergency_Procedures();

}
void Shanty::Display() const
{
	cout<<"     Below is a Shanty ";
	MusclePowered::Display();
	cout<<"   This boat has "<<_num_berths<<" Berths";
}


