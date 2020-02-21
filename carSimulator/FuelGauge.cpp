#include "FUELGAUGE.h"
#include "ODOMETER.h"

// Consturctor to set currentFuel of the object to 0.
fuelGauge::fuelGauge() {

	currentFuel = 0;
}

// Function to print the amount of fuel in the car.
void fuelGauge::printFuel() {

	cout << "Your current fuel is at: " << currentFuel << "/15 gallons." << endl;
}

// Function that decrements one gallon of fuel from the gas tank.
void fuelGauge::decrementFuel() {

	currentFuel--;
	cout << "You burned one gallon of fuel." << endl;
	cout << "You currently have " << currentFuel << "/15 gallons." << endl;
}

// Function that increments one gallon of fuel from the gas tank.
void fuelGauge::incrementFuel() {

	currentFuel++;
	cout << "You added one gallon of fuel." << endl;
	cout << "You currently have " << currentFuel << "/15 gallons." << endl;
}


// To be able to decrement the amount of fuel by 1 gallon, 
// if the amount of fuel is greater than 0 gallons.
// This simulates burning fuel as the car runs.

void fuelGauge::fillUpCar() {

	while (currentFuel == 0) // Add gas when car is empty
	{
		for (int i = 0; i < 15; i++)
		{
			incrementFuel();
		}
	};
}
