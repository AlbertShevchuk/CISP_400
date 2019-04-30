
#include "MusclePowered.h"

MusclePowered::MusclePowered()
:Boat(), _muscle_drive_type(UKMUDT)
{ }


MusclePowered::MusclePowered(MUSCLE_DRIVE_TYPE muscle_drive_type, const unsigned* num_seats, const char* name)
:Boat(name), _muscle_drive_type(muscle_drive_type)
{
	_n_seats(num_seats);
}

MusclePowered::MusclePowered(const char* name)
:Boat(name), _muscle_drive_type(UKMUDT)
{ }

MusclePowered::~MusclePowered(){ }

void MusclePowered::Set_Muscle_Drive_Type (MUSCLE_DRIVE_TYPE muscle_drive_type)
{
	_muscle_drive_type = muscle_drive_type;
}

MUSCLE_DRIVE_TYPE MusclePowered::Get_Muscle_Drive_Type ( ) const
{
	return _muscle_drive_type;
}
  
void MusclePowered::Propulsion_Maintenance ( )
{
	cout <<endl<<"Propulsion Maintenance for sailing vessel \"" << Get_Name() <<"\""
	     << endl<< "   Wash and repair the sails"<<endl
	     << "   Lubricate the winches" << endl
	     << "   Inspect and belay the halyards and sheets"<<endl;
}

void MusclePowered::Emergency_Procedures ( )
{
	Boat::Emergency_Procedures();
	cout <<endl<< "   Reef the sails" << endl
	     << "   Slack the sheets" << endl
	     << "   Bear away" << endl;
}
void MusclePowered::Display() const
{
	Boat::Display();
	cout << "   Muscle Drive Type: ";
	switch(_muscle_drive_type)
	{
		case PADDLE: cout << "Paddle"; break;
		case OAR: cout << "Oar"; break;
		case POLE: cout << "Pole"; break;
		case SWEEP: cout << "Sweep"; break;
		default: cout << "Unknown";
	}
cout << endl;
}

void MusclePowered::_n_seats(const unsigned* n)
 {
  // _num_seats = new unsigned[n+1];
   cout << _num_seats;

 }
