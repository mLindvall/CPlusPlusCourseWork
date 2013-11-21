// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.

#include <iostream.h>

void main(void)
{
	int testScore;
	char grade;

	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;
	if (testScore < 60)
		grade = 'F';
	else if (testScore < 70)
		grade = 'D';
	else if (testScore < 80)
		grade = 'C';
	else if (testScore < 90)
		grade = 'B';
	else if (testScore <= 100)
		grade = 'A';
	cout << "Your grade is " << grade << ".\n";
}

