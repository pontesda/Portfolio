/*
2.	
Write a program to a file named “Budget.txt” that asks the user to enter the amount that he or she has budgeted for a month.  
A loop should then prompt the user to enter each of his or her expenses for the month and keep a running total.  
The program should write both the expense name and corresponding expense, along with how much he or she is over-budget or under-budget to the file.
EXAMPLE:
Enter the amount for budgeting: 1200
Please enter the name of your expense followed by the amount.
Enter ‘#’ to quit.
Enter an expense: Gas 15.50
Enter an expense: Food 250.00
Enter an expense: #
Data has been written to the file.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream outputFile;
	int budget, total = 0, amount = 1;
	const string sentinal = "#";
	string expenseName;
	outputFile.open("Budget.txt");

		// Get the budget and expenses from the user.
		cout << "Enter your budget" << endl;
		cin >> budget;
		// Get the amount of expenses.
		while (expenseName != "#")
		{
			cout << "Enter your expenses followed by the amount." << endl;
			cout << "Enter '#' to quit." << endl;
			cin >> expenseName;
			if (expenseName == "#")
				break;
			else
			{
				cin >> amount;
				outputFile << expenseName << amount;
				total += amount;
			}
			if (total < budget)
			{
				cout << "You are underbudget." << endl;
			}
			else
			{
				cout << "You are over budget." << endl;
			}
		}
		outputFile.close();
		cout << "Data has been written to the file.";
		return 0;
}
