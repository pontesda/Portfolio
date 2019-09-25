//Homework Question 2
#include <iostream>
using namespace std;

int main()
{
	// userInput is used to determine which option is selected.
	double userInput; 
	// Variables for option selection.
	double option1 = 1, option2 = 2, option3 = 3, option4 = 4;
	// Variables used for option 1.
	double radius, circleArea;
	// Variables used for option 2.
	double lengthRec, widthRec, areaRec;
	// Variables used for option 3.
	double lengthTri, heightTri, areaTri;

	// This is the main menu for the calculator. 
	cout << "Geometry Calculator" << endl;
	cout << "  1. Calculate the Area of a Circle" << endl;
	cout << "  2. Calculate the Area of a Rectangle" << endl;
	cout << "  3. Calculate the Area of a Triangle" << endl;
	cout << "  4. Quit" << endl;
	cin >> userInput;

	if (userInput == option1)
	{
		//Area of a circle.

			cout << "What is the radius of the circle?" << endl;
			cin >> radius;
			if (radius >= 0)
			{
				circleArea = radius * 3.14159;
				cout << "The area of the circle is " << circleArea << endl;
        cout << "------------------------------------------------------------" << endl;
			}
			else
				cout << "The radius must not be negative." << endl;
        cout << "------------------------------------------------------------" << endl;
	}
		//Area of a rectangle.
	else if (userInput == 2)
	{
			cout << "What is the length of the rectangle?" << endl;
			cin >> lengthRec;
			if (lengthRec >= 0)
			{
				cout << "What is the width of the rectangle?" << endl;
				cin >> widthRec;
				if (widthRec >= 0)
				{
					areaRec = lengthRec * widthRec;
					cout << "The area of the rectangle is " << areaRec << endl;
          cout << "------------------------------------------------------------" << endl;
				}
			}
			else
				cout << "The length and the width must not be negative." << endl;
        cout << "------------------------------------------------------------" << endl;
	}
	//Area of a Triangle
	else if (userInput == option3)
	{
		{
			cout << "What is the length of the triangle's base?" << endl;
			cin >> lengthTri;
			if (lengthTri >= 0)
			{
				cout << "What is the height of the triangle?" << endl;
				cin >> heightTri;

				if (heightTri >= 0)
				{
					areaTri = lengthTri * heightTri;
					cout << "The area of the triangle is " << areaTri << endl;
          cout << "------------------------------------------------------------" << endl;
				}
			}
			else
				cout << "The height and length must not be negative." << endl <<;
        cout "------------------------------------------------------------" << endl;
		}
	}
		//Quit the calculator
	else if (userInput == option4)
	{
			return 0;
	}
	else
	{
		//Invalid Input if userInput is not 1 or 2 or 3 or 4.
			cout << "Invalid option." << endl;
      cout << "------------------------------------------------------------" << endl;
	}
	//Return to main menu.
	return main();
}

