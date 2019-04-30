main: Boat.o Boatmain.o CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o Marina.o
	g++ Boatmain.o CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o Boat.o Marina.o -o main
Marina.o: Marina.cpp CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o
	g++ -pedantic Marina.cpp -c 
Boatmain.o: Boatmain.cpp Marina.h 
	g++ -pedantic Boatmain.cpp -c
CabinCruiser.o: CabinCruiser.h CabinCruiser.cpp MotorPowered.o
	g++ -pedantic CabinCruiser.cpp -c
Ski.o: Ski.h Ski.cpp MotorPowered.o
	g++ -pedantic Ski.cpp -c
Shanty.o: Shanty.h Shanty.cpp MusclePowered.o
	g++ -pedantic Shanty.cpp -c
Kayak.o: Kayak.h Kayak.cpp MusclePowered.o
	g++ -pedantic Kayak.cpp -c
MotorPowered.o: MotorPowered.h MotorPowered.cpp
	g++ -pedantic MotorPowered.cpp -c
MusclePowered.o: MusclePowered.h MusclePowered.cpp
	g++ -pedantic MusclePowered.cpp -c

clean:
	rm *.o
