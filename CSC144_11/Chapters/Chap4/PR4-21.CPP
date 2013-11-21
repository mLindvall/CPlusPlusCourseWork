// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.

#include <iostream.h>

void main(void)
{
	int testScore;
	char grade;

	cout << "Enter your test score and I will tell you\n";
	cout << "the letter grade you earned: ";
	cin >> testScore;
	if (testScore < 0 || testScore > 100)
	{
		cout << testScore << " is an invalid score.\n";
		cout << "Run the program again and enter a value\n";
		cout << "in the range of 0 to 100.\n";
	}
	else
	{
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
		cout << "Your grade is " << grade << endl;
	}
}
