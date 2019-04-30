
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
:MotorPowered(name), _flying_bridge(false)
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
	cout <<endl<< "   Reef the sails" << endl
	     << "   Slack the sheets" << endl
	     << "   Bear away" << endl;
}
void CabinCruiser::Display() const
{
	MotorPowered::Display();
	cout<<"This Boat has a Flying Bridge";
}

