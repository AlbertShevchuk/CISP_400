/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include <iostream>
using namespace std;
#include "Boat.h"

#ifndef MY_MUSCLE_POWERED_CLASS_H_
#define MY_MUSCLE_POWERED_CLASS_H_

enum MUSCLE_DRIVE_TYPE {UKMUDT, PADDLE, OAR, POLE, SWEEP};

class MusclePowered : public Boat
{
	MUSCLE_DRIVE_TYPE	_muscle_drive_type;
	unsigned 		_num_seats;

public:

  MusclePowered();

  MusclePowered(MUSCLE_DRIVE_TYPE muscle_drive_type, unsigned* num_seats, const char* name );

  MusclePowered(const char* name);

  virtual ~MusclePowered();
  
  void Set_Muscle_Drive_Type ( MUSCLE_DRIVE_TYPE );
  MUSCLE_DRIVE_TYPE Get_Muscle_Drive_Type ( ) const;

  void Set_Num_Seats(unsigned);
  unsigned Get_Num_Seats();

  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
  virtual void _n_seats()const;
};



#endif

