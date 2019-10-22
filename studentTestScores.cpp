#include <iostream>
using namespace std;

int main()
{
	// Define Variables
	const int MAX_STUDENTS = 5; // Number of Students
	const int MAX_TESTS = 4;	// Number of Tests
	const int MAX_GRADE = MAX_TESTS * 100;  // Max Grade if all tests are out of 100
	string studentFirstName[MAX_STUDENTS];	// First Name of the Student
	string studentLastName[MAX_STUDENTS];	// Last Name of the Student
	char studentLetterGrade[MAX_STUDENTS];	// Letter Grade ex. A, B, F etc.
	double total; // Student's total points scored in class.
	double testGrades[MAX_STUDENTS][MAX_TESTS];	// Two-Dimensional Array to account for MAX_TESTS per MAX_STUDENTS
	double finalGrade[MAX_STUDENTS]; // Student's final average grade.

	// Using Nested Loop to get [MAX_TEST] grades from [MAX_STUDENTS] different students.
	for (int student = 0; student < MAX_STUDENTS; student++)
	{
		cout << "Enter the student's First and Last Name: ";
		cin >> studentFirstName[student] >> studentLastName[student];
		total = 0; // Reset total

		for (int test = 0; test < MAX_TESTS; test++)
		{
			cout << "Enter " << studentFirstName[student] << " " << studentLastName[student] << "'s Test " << test + 1 << " grade: ";
			cin >> testGrades[student][test];
			if (testGrades[student][test] < 0 || testGrades[student][test] > 100)
			{
				cout << "Invalid Input! Enter a test grade in between 0 - 100!" << endl;
				test = test - 1;
			}
			else
			{
				total += testGrades[student][test];
			}
		}
		// Leaving Test Score Input Loop
		// Now Calculate Student's total grade and store it in the Array finalGrade.
		finalGrade[student] = (total / MAX_GRADE) * 100;
		// Determine Student's letter grade.
		if (finalGrade[student] >= 90)
			studentLetterGrade[student] = 'A';
		else if (finalGrade[student] >= 80 && finalGrade[student] <= 90)
			studentLetterGrade[student] = 'B';
		else if (finalGrade[student] >= 70 && finalGrade[student] <= 80)
			studentLetterGrade[student] = 'C';
		else if (finalGrade[student] >= 60 && finalGrade[student] <= 70)
			studentLetterGrade[student] = 'D';
		else if (finalGrade[student] <= 60)
			studentLetterGrade[student] = 'F';
	}
	cout << endl << endl;
	for (int student = 0; student < MAX_STUDENTS; student++)
	{
		cout << "Final Grade for "<< studentFirstName[student] << " " << studentLastName[student] << ": " << finalGrade[student] << " = " << studentLetterGrade[student] << endl;
	}
	return 0;
}
