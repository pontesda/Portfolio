#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int MIN_VALUE = 1, MAX_VALUE = 1000;
	int firstNumber, secondNumber, userInput, answer;

	unsigned seed = time(0);
	srand(seed);

	firstNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	secondNumber = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	cout << "Hello young padawan that struggles in math." << endl <<  "My name is Pythagoras and I will be your math tutor." << endl;
	cout << "Type your answer and press enter.\n Only then will I reveal the correct answer..." << endl;
	cout << "  " << firstNumber << endl;
	cout << "+ " << secondNumber << endl;
	cout << "-------" << endl;
	cin >> userInput;
	answer = firstNumber + secondNumber;
	if (userInput == answer)
		cout << endl << "That is CORRECT!" << endl << endl;
	if (userInput != answer)
		cout << endl << "Not quite. The correct answer is " << answer << endl << endl;
	return main();
}
