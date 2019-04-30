/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include <iostream>
using namespace std;
#include "MusclePowered.h"

#ifndef MY_KAYAK_CLASS_H_
#define MY_KAYAK_CLASS_H_

class Kayak : public MusclePowered
{
	bool 		_whitewater;
	
public:

  Kayak();

  Kayak(HULL_TYPE hull_type, const char* name, bool whitewater);
 
  Kayak(const char* name);

  virtual ~Kayak();
  
  void Set_Whitewater (bool);
  bool Get_Whitewater() const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
		
};
#endif

