#include "ODOMETER.h"
#include "FUELGAUGE.h"

odometer::odometer() {

	currentMileage = 0; // Sets the car's mileage to 0.
	timesReset = 0;     // Variable that tells the user how many times
						// the odometer has been reset.
}

// Function to print out the odometer current mileage. 
void odometer::printOdometer() {

	cout << "Odometer: " << currentMileage << endl;
}

// Function to reset the Odometer after reaching 999,999 miles.
void odometer::resetOdometer() {

	if (currentMileage >= MAX_MILES)
	{
		currentMileage = 0;
		timesReset++;
		cout << "Your odometer has been reset." << endl;
		cout << "Reset count: " << timesReset;
	}
	else
	{
		cout << "";
	}
}

// Refer to ODOMETER.h file for function details.
void odometer::simulateDriving() {

	do
	{
	fg1.fillUpCar(); // Access the the Fuel Gauge Object to increase the gas to max.
	for (double i = 0; i < 15; i++)
	{
		currentMileage += MPG; // After driving on one gallon, 24 miles will be added to the odometer.
		fg1.decrementFuel(); // Access the Fuel Gauge Object to decrement fuel.
		odometer::printOdometer(); // Print odometer reading after one gallon of fuel used.
	}
	fg1.printFuel(); // Print current fuel to user.
	cout << "Refuel car and keep driving? (Y/N): ";
	cin >> userInput;
	} while (userInput == 'y' || userInput == 'Y'); // User decides to continue driving.
}
