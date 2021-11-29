main: main.o vehicle.o derivedclasses.o
	g++ -o main main.o vehicle.o derivedclasses.o
main.o: headers/vehicle.h headers/derivedclasses.h
	g++ -c main.cpp
vehicle.o: headers/vehicle.h sources/vehicle.cpp
	g++ -c sources/vehicle.cpp
derivedclasses.o: headers/vehicle.h headers/derivedclasses.h sources/derivedclasses.cpp
	g++ -c sources/derivedclasses.cpp

targetDir = bin
