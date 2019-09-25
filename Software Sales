#include <iostream>
using namespace std;
int main()
{
	double discount, packageQuanity, totalCost, nextDiscount;

	// Get the amount of packages bought.
	cout << "Enter the amount of packages you would like to purchase:\n";
	cin >> packageQuanity;

	//Determine which discount should be applied and calculate the total cost.

	if (0 < packageQuanity && packageQuanity <= 9)
	{
		totalCost = packageQuanity * 99;
		nextDiscount = 10 - packageQuanity;
		cout << "Your total cost for " << packageQuanity << " is $" << totalCost << ".\n" << "This order does not qualify for a discount. Order " << nextDiscount << " more packages to qualify for a 20% discount!";
	}
	if (10 <= packageQuanity && packageQuanity <= 20)
	{ 
		totalCost = packageQuanity * 99;
		discount = totalCost * .20;
		nextDiscount = 20 - packageQuanity;
		cout << "Your total cost for " << packageQuanity << " is $" << discount << ".\n" << "This order qualifies for a 20% discount! \n Order " << nextDiscount << " more packages to qualify for a 30% discount!";
	}
	if (20 <= packageQuanity && packageQuanity < 50)
	{
		totalCost = packageQuanity * 99;
		discount = totalCost * .30;
		nextDiscount = 50 - packageQuanity;
		cout << "Your total cost for " << packageQuanity << " is $" << discount << ".\n" << "This order qualifies for a 30% discount! \nOrder " << nextDiscount << " more packages to qualify for a 40% discount!";
	}
	if (50 <= packageQuanity && packageQuanity < 100)
	{
		totalCost = packageQuanity * 99;
		discount = totalCost * .40;
		nextDiscount = 100 - packageQuanity;
		cout << "Your total cost for " << packageQuanity << " is $" << discount << ".\n" << "This order qualifies for a 40% discount! \nOrder " << nextDiscount << " more packages to qualify for a 50% discount!";
	}
	if (100 <= packageQuanity)
	{
		totalCost = packageQuanity * 99;
		discount = totalCost * .50;
		cout << "Your total cost for " << packageQuanity << " is $" << discount << ".\n" << "This order qualifies for a 50% discount! \n This is the Maximum discount available!";
	}
	if (packageQuanity <= 0)
		cout << "You entered an invalid response. Please only enter positive numbers.";
	return main();
}
