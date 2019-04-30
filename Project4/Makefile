main: Boat.o Boatmain.o CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o
	g++ Boatmain.o CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o Boat.o -o main
Boatmain.o: Boatmain.cpp CabinCruiser.o Ski.o Shanty.o Kayak.o MotorPowered.o MusclePowered.o
	g++ -pedantic Boatmain.cpp -c 
CabinCruiser.o: CabinCruiser.h CabinCruiser.cpp MotorPowered.o
	g++ CabinCruiser.cpp -c
Ski.o: Ski.h Ski.cpp MotorPowered.o
	g++ Ski.cpp -c
Shanty.o: Shanty.h Shanty.cpp MusclePowered.o
	g++ Shanty.cpp -c
Kayak.o: Kayak.h Kayak.cpp MusclePowered.o
	g++ Kayak.cpp -c
MotorPowered.o: MotorPowered.h MotorPowered.cpp
	g++ MotorPowered.cpp -c
MusclePowered.o: MusclePowered.h MusclePowered.cpp
	g++ MusclePowered.cpp -c


