
#include "Ski.h"

Ski::Ski()
:MotorPowered() 
{ 
	Set_Fuel_Type(GASOLINE);
	Set_Motor_Drive_Type(OUTBOARD);
	Set_Hull_Type(PLANING);
}

Ski::Ski(HULL_TYPE hull_type, const char* name, bool barefoot_pole)
:MotorPowered(name), _barefoot_pole(barefoot_pole)
{  }

Ski::Ski(const char* name)
:MotorPowered(name), _barefoot_pole(false) 
{ 
	Set_Fuel_Type(GASOLINE);
	Set_Motor_Drive_Type(OUTBOARD);
	Set_Hull_Type(PLANING);
}

Ski::~Ski(){ }

void Ski::Set_Barefoot_Pole (bool barefoot_pole)
{
	_barefoot_pole = barefoot_pole;
}

bool Ski::Get_Barefoot_Pole() const
{
	return _barefoot_pole;
}
  
void Ski::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void Ski::Emergency_Procedures ( )
{
	MotorPowered::Emergency_Procedures();
	cout <<endl<< "   Reef the sails" << endl
	     << "   Slack the sheets" << endl
	     << "   Bear away" << endl;
}
void Ski::Display() const
{
	MotorPowered::Display();
	cout<<"This Boat has a Barefoot Pole";
}

