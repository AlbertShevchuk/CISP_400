

#include <iostream>
using namespace std;
#include "MotorPowered.h"

#ifndef MY_SKI_CLASS_H_
#define MY_SKI_CLASS_H_

class Ski : public MotorPowered
{
	bool 		_barefoot_pole;

public:

  Ski();

  Ski(HULL_TYPE hull_type, const char* name, bool barefoot_pole);

  Ski(const char* name);

  virtual ~Ski();
  
  void Set_Barefoot_Pole (bool);
  bool Get_Barefoot_Pole() const;
  
  virtual void Propulsion_Maintenance ( );
  virtual void Emergency_Procedures ( );
  virtual void Display() const;
		
};
#endif

