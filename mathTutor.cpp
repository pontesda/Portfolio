#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	char cont = 'y';
	cout << "Hello young padawan that struggles in math." << endl << "My name is Pythagoras and I will be your math tutor." << endl;
	cout << "Type your answer and press enter.\nOnly then will I reveal the correct answer..." << endl << endl;

	do
	{
		const int MIN_VALUE = 1, MAX_VALUE = 1000;
		int firstNumber, secondNumber, userInput, answer, score;

		score = 0;

		unsigned seed = time(0);
		srand(seed);

		firstNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

		secondNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		cout << "  " << firstNumber << endl;
		cout << "+ " << secondNumber << endl;
		cout << "-------" << endl;
		cin >> userInput;
		if (cin.fail())
		{
			cout << "ERROR -- You did not enter an integer";

			// get rid of failure state
			cin.clear();

			// From Eric's answer (thanks Eric)
			// discard 'bad' character(s) 
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		answer = firstNumber + secondNumber;
		if (userInput == answer)
		{
			cout << endl << "That is CORRECT!" << endl << "Your score is now " << ++score << endl;
			cout << "Continue? (Y/N)" << endl;
			cin >> cont;
			cout << endl << endl;

		}
		else if (userInput != answer)
		{
			cout << endl << "Not quite. The correct answer is " << answer << endl << "Your score is now " << --score << endl << endl;
			cout << "Continue? (Y/N)" << endl;
			cin >> cont;
			cout << endl << endl;
		}
		else
		{
			cout << "Invalid Entry." << endl << endl;
			cout << "Continue? (Y/N)" << endl;
			cin >> cont;

		}

	} while (cont == 'Y' || cont == 'y');
	return 0;
}
