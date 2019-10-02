#include<iostream>
using namespace std;
int main()
{
	int userInput, count;
	for (count = 1; count <= 4; count++)
	{
		cout << "Enter a positive integer no greater than 15. This program will end after 4 attempts." << endl;
		cin >> userInput;
		if (userInput < 1 || userInput > 15)
		{
			cout << "Error! Invalid Input!" << endl;
		}
		{
			for (int row = 1; row <= userInput; row++)
			{
				for (int x = 1; x <= userInput; x++)
				{
					cout << 'x';
				}
				cout << endl;
			}
		}
	}
			return 0;
}
