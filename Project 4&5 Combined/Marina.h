/********************************************************************************************************

	Albert Shevchuk
	CISP 400 - TTH 3PM
	Programming Project 4/5
	April 6, 2015 

********************************************************************************************************/

#include<iostream>
using namespace std;

#include "Boat.h"
#include "MotorPowered.h"
#include "MusclePowered.h"
#include "CabinCruiser.h"
#include "Ski.h"
#include "Kayak.h"
#include "Shanty.h"
#include <cstring>

const unsigned MAX_BOATS = 20;

class Marina

{

	Boat* _m[MAX_BOATS] ;
	unsigned _num_boats ;
	
public:

	Marina();
	~Marina();
	void Run();

};
