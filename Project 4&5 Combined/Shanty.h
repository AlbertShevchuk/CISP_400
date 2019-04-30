/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include <iostream>
using namespace std;
#include "MusclePowered.h"
#ifndef MY_SHANTY_CLASS_H_
#define MY_SHANTY_CLASS_H_

class Shanty : public MusclePowered
{
	unsigned 		_num_berths;
	
public:

  Shanty();

  Shanty(HULL_TYPE hull_type, const unsigned* num_berths, const char* name);
 
  Shanty(const char* name);

  virtual ~Shanty();
  
  void Set_Num_Berths (unsigned);
  unsigned Get_Num_Berths() const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
		
};
#endif

