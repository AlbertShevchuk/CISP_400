/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include "CabinCruiser.h"

CabinCruiser::CabinCruiser()
:MotorPowered() 
{ 
	Set_Fuel_Type(DIESEL);
	Set_Motor_Drive_Type(INBOARD);
	Set_Hull_Type(SEMI_DISP);
}

CabinCruiser::CabinCruiser(HULL_TYPE hull_type, const char* name, bool flying_bridge)
:MotorPowered(name), _flying_bridge(flying_bridge)
{  }

CabinCruiser::CabinCruiser(const char* name)
:MotorPowered(name), _flying_bridge(true)
{ 
	Set_Fuel_Type(DIESEL);
	Set_Motor_Drive_Type(INBOARD);
	Set_Hull_Type(SEMI_DISP);
}

CabinCruiser::~CabinCruiser(){ }

void CabinCruiser::Set_Flying_Bridge (bool flying_bridge)
{
	_flying_bridge = flying_bridge;
}

bool CabinCruiser::Get_Flying_Bridge() const
{
	return _flying_bridge;
}
  
void CabinCruiser::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void CabinCruiser::Emergency_Procedures ( )
{
	MotorPowered::Emergency_Procedures();
}
void CabinCruiser::Display() const
{
	cout<<"     Below is a Cabin Cruiser ";
	MotorPowered::Display();
	cout<<"   Does this boat have Flying Bridge? : ";
	if(_flying_bridge==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

