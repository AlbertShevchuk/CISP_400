/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include <iostream>
using namespace std;
#include "Boat.h"

#ifndef MY_MOTOR_POWERED_CLASS_H_
#define MY_MOTOR_POWERED_CLASS_H_

enum FUEL_TYPE {UKFT, DIESEL, GASOLINE, ELECTRIC};
enum MOTOR_DRIVE_TYPE {UKMODT, INBOARD, OUTBOARD,IOBOARD};

class MotorPowered : public Boat 
{
	FUEL_TYPE		_fuel_type;
	MOTOR_DRIVE_TYPE	_motor_drive_type;
	char*  _motor_manual;
 	void  _m_manual(const char*);

public:
	
  MotorPowered();
  
  MotorPowered(const char* name, FUEL_TYPE fuel_type, MOTOR_DRIVE_TYPE motor_drive_type);
  
  MotorPowered(const char* name);
  
  virtual ~MotorPowered();
  
  void Set_Fuel_Type ( FUEL_TYPE );
  FUEL_TYPE Get_Fuel_Type ( ) const;
  
  void Set_Motor_Drive_Type ( MOTOR_DRIVE_TYPE );
  MOTOR_DRIVE_TYPE Get_Motor_Drive_Type ( ) const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
  
};
#endif

