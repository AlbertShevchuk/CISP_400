#include <iostream>

using namespace std;

#include "Boat.h"
#include "SailPowered.h"
#include "MusclePowered.h"
#include "TrailerSailer.h"


#ifndef MARINA_H_
#define MARINA_H_

const unsigned MAX_BOATS = 20 ;


class Marina

{
	Boat* _m[MAX_BOATS] ;
	unsigned _num_boats ;
	void _add_boat() ;
	void _prop() ;
	void _emerg() ;
	void _disp() ;
public:
	Marina() ;
	~Marina() ;
	void Run() ;
};

#endif
