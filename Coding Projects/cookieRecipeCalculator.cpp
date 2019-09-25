#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double userInput, sugar, butter, flour, cookieRatio;

	cout << "How many cookies would you like to make tonight?";
	cin >> userInput;
	
	//48 cookies = 1.5 cups of sugar, 1 cup of butter, 2.75 cups of flour.
	cookieRatio = userInput / 48;
	sugar = cookieRatio * 1.5;
	butter = cookieRatio * 1;
	flour = cookieRatio * 2.75;

	cout << "In order to make " << userInput << " cookies, you will need: \n" << setprecision(3) << sugar << " cups of sugar.\n";
	cout << setprecision(3) << butter << " cups of butter.\n";
	cout << setprecision(3) << flour << " cups of flour.\n";
	cout << "Happy Baking!";
	return 0;
}
