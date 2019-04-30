
#include "Kayak.h"

Kayak::Kayak()
:MusclePowered() 
{ 
	Set_Muscle_Drive_Type(PADDLE);
	Set_Hull_Type(DISPLACEMENT);
	
}

Kayak::Kayak(HULL_TYPE hull_type, const char* name, bool whitewater)
:MusclePowered(name),_whitewater(whitewater)
{  }

Kayak::Kayak(const char* name)
:MusclePowered(name), _whitewater(false) 
{ 
	Set_Muscle_Drive_Type(PADDLE);
	Set_Hull_Type(DISPLACEMENT);
	
}

Kayak::~Kayak(){ }

void Kayak::Set_Whitewater (bool whitewater)
{
	_whitewater = whitewater;
}

bool Kayak::Get_Whitewater() const
{
	return _whitewater;
}
  
void Kayak::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void Kayak::Emergency_Procedures ( )
{
	MusclePowered::Emergency_Procedures();
	cout <<endl<< "   Reef the sails" << endl
	     << "   Slack the sheets" << endl
	     << "   Bear away" << endl;
}
void Kayak::Display() const
{
	MusclePowered::Display();
	cout<<"This Boat has Whitewater";
}

