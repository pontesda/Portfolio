#pragma once
#ifndef FUELGAUGE_h
#define FUELGAUGE_h
#include <string>
#include <iostream>

using namespace std;

class fuelGauge {

private:
	const double MAX_FUEL = 15;
	double currentFuel;

public:

	fuelGauge();			// Consturctor to set currentFuel of the object to 0.
	void printFuel();		// Function to print the amount of fuel in the car.
	void decrementFuel();	// Function that decrements one gallon of fuel from the gas tank.
	void incrementFuel();	// Function that increments one gallon of fuel from the gas tank.
	void fillUpCar();		// To be able to decrement the amount of fuel by 1 gallon, 
							// if the amount of fuel is greater than 0 gallons.
							// This simulates burning fuel as the car runs.
};

#endif // !FUELGAUGE_h;
