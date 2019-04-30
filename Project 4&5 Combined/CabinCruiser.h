/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include <iostream>
using namespace std;
#include "MotorPowered.h"

#ifndef MY_CABIN_CRUISER_CLASS_H_
#define MY_CABIN_CRUISER_CLASS_H_

class CabinCruiser : public MotorPowered
{
	bool 		_flying_bridge;
	
public:

  CabinCruiser();

  CabinCruiser(HULL_TYPE hull_type, const char* name, bool flying_bridge);

  CabinCruiser(const char* name);

  virtual ~CabinCruiser();
  
  void Set_Flying_Bridge (bool);
  bool Get_Flying_Bridge() const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display( ) const;
		
};
#endif

