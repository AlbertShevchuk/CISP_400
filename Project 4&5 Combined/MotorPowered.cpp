/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include "MotorPowered.h"

MotorPowered::MotorPowered()
:Boat(), _fuel_type(UKFT), _motor_drive_type(UKMODT)
{ }

MotorPowered::MotorPowered(const char* name, FUEL_TYPE fuel_type, MOTOR_DRIVE_TYPE motor_drive_type)
:Boat(name), _fuel_type(fuel_type), _motor_drive_type(motor_drive_type)
{
	_m_manual(name);
}

MotorPowered::MotorPowered(const char* name)
:Boat(name), _fuel_type(UKFT), _motor_drive_type(UKMODT)
{ }

MotorPowered::~MotorPowered(){ }

void MotorPowered::Set_Fuel_Type (FUEL_TYPE fuel_type)
{
	_fuel_type = fuel_type;
}

FUEL_TYPE MotorPowered::Get_Fuel_Type ( ) const
{
	return _fuel_type;
}

void MotorPowered::Set_Motor_Drive_Type (MOTOR_DRIVE_TYPE motor_drive_type )
{
	_motor_drive_type = motor_drive_type;
}
MOTOR_DRIVE_TYPE MotorPowered::Get_Motor_Drive_Type ( ) const
{
	return _motor_drive_type;
}
  
void MotorPowered::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void MotorPowered::Emergency_Procedures ( )
{
	Boat::Emergency_Procedures();
	cout <<endl<< "   Reef the sails" << endl
	     << "   Slack the sheets" << endl
	     << "   Bear away" << endl;
}
void MotorPowered::Display() const
{
	cout<<"Motor Boat";
	Boat::Display();
	cout << "   Fuel Type: ";
	switch(_fuel_type)
	{
		case DIESEL: cout << "Diesel"; break;
		case GASOLINE: cout << "Gasoline"; break;
		case ELECTRIC: cout << "Electric"; break;
		default: cout << "Unknown";
	}
	cout << endl << "   Motor Drive Type: ";
	switch(_motor_drive_type)
	{
		case INBOARD: cout << "Inboard"; break;
		case OUTBOARD: cout << "Outboard"; break;
		case IOBOARD: cout << "Ioboard"; break;
		default: cout << "Unknown";
	}
	
cout << endl;
}

void MotorPowered::_m_manual(const char* n)
{
  _motor_manual = new char[strlen(n)+1];
  strcpy(_motor_manual,n);
  cout << _motor_manual;
	
}
