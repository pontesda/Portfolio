#pragma once
#ifndef ODOMETER_h
#define ODOMETER_h
#include <string>
#include <iostream>
#include "FUELGAUGE.h"

using namespace std;

class odometer {

	private:
		char userInput;
		double currentMileage;
		double const MAX_MILES = 999999;
		double const MPG = 24;
		int timesReset;
		fuelGauge fg1;		// Access to the FuelGauge class. It should decrease the FuelGauge
							// object’s current amount of fuel by 1 gallon for every 24 miles traveled. 
							// The car’s fuel economy is 24 miles per gallon.

	public:
		odometer();				// Constructor to initalize the object.
		void printOdometer();	// Function to print out the odometer current mileage. 
		void resetOdometer();	// Function to reset the Odometer after reaching 999,999 miles.
		void simulateDriving();
								// Function simulates car running. The function will fillup the car's
								// empty gas tank at the start of the do while loop. Then the car will
								// simulate driving until empty. The car gets 24 MPG. At the end of each
								// iteration, 1 gallon is removed from the gas tank and 24 miles are 
								// added to the odometer.
								// The user is given the option to continue driving after the car runs
								// out of gas.
};

#endif // !ODOMETER_h;
