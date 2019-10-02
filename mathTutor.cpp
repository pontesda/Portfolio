#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream outputFile;
	int budget, total = 0, amount, underBudget, overBudget;
	string expenseName;
	outputFile.open("Budget.txt");

		// Get the budget and expenses from the user.
		cout << "Enter your budget" << endl;
		cin >> budget;
		outputFile << "Your budget is $" << budget << "." << endl;
		// Get the amount of expenses via while loop.
		while (expenseName != "#")
		{
			cout << "Enter your expenses followed by the amount." << endl;
			cout << "Enter '#' to quit." << endl;
			cin >> expenseName;
			//To end the loop if the user decides to quit.
			if (expenseName == "#")
				break;
			//If user chooses not to quit then the program will process the amount and write the expense to the text file.
				else
				{
					cin >> amount;
					//If user enters invalid entry into amount, this will allow the program to restart without writing wrong information into the budget file.
					if (cin.fail())
					{
						cout << "ERROR -- Invalid Input. This information has not been saved to your file." << endl;

						// get rid of failure state
						cin.clear();

						// discard 'bad' character(s) 
						cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					}
					// If user enters valid entry, the program will write it to the budget file.
					else
					{
						outputFile << expenseName << " $" << amount << endl;
						total += amount;
					}
				}
			}
		//If the user decides to quit, then the program will determine if the user is over/under budget by comparing the total expenses to the budget.
		if (total < budget)
		{
			underBudget = budget - total;
			cout << "You are under budget by $" << underBudget << "." << endl;
			outputFile << "You are under budget." << endl;
		}
		else
		{
			overBudget = total - budget;
			cout << "You are over budget by $" << overBudget << "." << endl;
			outputFile << "You are over budget." << endl;
		}
		//Close the file.
		outputFile.close();
		//Infrom the user that the data is written.
		cout << "Data has been written to the file.";
		return 0;
}
