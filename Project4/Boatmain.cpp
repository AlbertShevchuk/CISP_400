#include "Boat.h"
#include "MotorPowered.h"
#include "MusclePowered.h"
#include "CabinCruiser.h"
#include "Ski.h"
#include "Kayak.h"
#include "Shanty.h"
#include <cstring>

int main()
{
const unsigned MAX=10;
Boat* b[MAX];
char name[11];
char num ='0'; 
strcpy(name, "My Boat ");

cout<<endl<<endl;
for (unsigned i=0; i<MAX; i++)
{
name[9]=num++;
name[10]='\0';
Shanty* ts = new Shanty(name);
b[i] = ts;
b[i]-> Display();
}


for (unsigned i=0;i<MAX; i++)
	delete b[i];
return(0);
}

