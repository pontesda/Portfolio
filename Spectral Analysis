/*If a scientist knows the wavelength of an electromagnetic wave, 
he or she can determine what type of radiation it is. 
Write a program that asks for the wavelength of an electromagnetic wave in meters 
and then displays what that wave is according to the chart.  */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long double wavelength, microwaves, infared, visibleLight, ultraviolet, xRays, gammaRays;
	microwaves = 1 * pow(10.0, -2.0);
	infared = 1 * pow(10.0, -3.0);
	visibleLight = 7 * pow(10.0, -7.0);
	ultraviolet = 4 * pow(10.0, -7.0);
	xRays = 1 * pow(10.0, -8.0);
	gammaRays = 1 * pow(10.0, -11.0);

	cout << "Enter the electromagnetic wavelength in meters to determine the type of wave." << endl;
	cin >> wavelength;

	if (wavelength > microwaves)
		cout << "The wavelength is a Radio Wave." << endl << endl;
	else if (wavelength <= microwaves && wavelength > infared)
		cout << "The wavelength is a Microwave." << endl << endl;
	else if (wavelength <= infared && wavelength > visibleLight)
		cout << "The wavelength is Infared." << endl << endl;
	else if (wavelength <= visibleLight && wavelength > ultraviolet)
		cout << "The wavelength is Visible Light." << endl << endl;
	else if (wavelength <= ultraviolet && wavelength > xRays)
		cout << "The wavelength is Ultraviolet." << endl << endl;
	else if (wavelength <= xRays && wavelength > gammaRays)
		cout << "The wavelength is an X Ray." << endl << endl;
	else if (wavelength <= gammaRays)
		cout << "The wavelength is a Gamma Ray." << endl << endl;
	else
	{
		cout << "Invalid input." << endl << endl;
	}
	return main();
}
