#include <iostream>
using namespace std;

int main()
{
	//Defined Variables Start
	const int NUM_EMPLOYEES = 7;
	int emplID[NUM_EMPLOYEES] = { 5658845, 4520125, 7895122,
		                          8777541, 8451277, 1302850, 
		                          7580489 };
	int hours[NUM_EMPLOYEES];
	double payRate[NUM_EMPLOYEES];
	double grossPay[NUM_EMPLOYEES];
	//Defined Variables End

	//Get Employee Hours
	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "How many hours did Employee: " << emplID[index] << " work?" << endl;
		cin >> hours[index];
		cout << "What is Employee: " << emplID[index] << " hourly pay rate?" << endl;
		cin >> payRate[index];
		grossPay[index] = hours[index] * payRate[index];
		cout << "---------------------------------------" << endl;
	}

	for (int index = 0; index < NUM_EMPLOYEES; index++)
	{
		cout << "Employee: " << emplID[index] << " = $" << grossPay[index] << endl;
	}
	return 0;
}
