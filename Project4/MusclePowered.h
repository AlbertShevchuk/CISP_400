

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
	void _n_seats(const unsigned*);
	
public:

  MusclePowered();

  MusclePowered(MUSCLE_DRIVE_TYPE muscle_drive_type, const unsigned* num_seats, const char* name );

  MusclePowered(const char* name);

  virtual ~MusclePowered();
  
  void Set_Muscle_Drive_Type ( MUSCLE_DRIVE_TYPE );
  MUSCLE_DRIVE_TYPE Get_Muscle_Drive_Type ( ) const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
		
};



#endif

