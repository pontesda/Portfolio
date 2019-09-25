#include <iostream>
using namespace std;

int main()
{
	// Variables for option selection.
	int choice;
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
	cin >> choice;
	
	switch (choice)
	{
		case 1 : cout << "What is the radius of the circle?" << endl;
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
        break;
	
		case 2 : cout << "What is the length of the rectangle?" << endl;
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
        break;
	//Area of a Triangle
		case 3 : cout << "What is the length of the triangle's base?" << endl;
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
				cout << "The height and length must not be negative." << endl << endl;
        cout << "------------------------------------------------------------" << endl;
        break;
		//Quit the calculator
		case 4 : return 0;
		break;
		default: cout << "You did not enter 1, 2, 3 or 4!\n";
	}
	return main();
}
