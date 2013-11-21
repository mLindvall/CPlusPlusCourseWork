// This program uses independent if/else statements to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
// Do you think it will work?

#include <iostream.h>

void main(void)
{
	int testScore;
	char grade;

	cout << "Enter your test score and I will tell you\n";
	cout << "the letter grade you earned: ";
	cin >> testScore;
	if (testScore < 60)
		grade = 'F';
	if (testScore < 70)
		grade = 'D';
	if (testScore < 80)
		grade = 'C';
	if (testScore < 90)
		grade = 'B';
	if (testScore <= 100)
		grade = 'A';
	cout << "Your grade is " << grade << ".\n";
}
