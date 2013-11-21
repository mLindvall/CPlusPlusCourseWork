// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.

#include <iostream.h>

void main(void)
{
	int testScore;

	cout << "Enter your test score and I will tell you\n";
	cout << "the letter grade you earned: ";
	cin >> testScore;
	if (testScore < 60)
	{
		cout << "Your grade is F.\n";
		cout << "This is a failing grade. Better see your ";
		cout << "instructor.\n";
	}
	else if (testScore < 70)
	{
		cout << "Your grade is D.\n";
		cout << "This is below average. You should get ";
		cout << "tutoring.\n";
	}
	else if (testScore < 80)
	{
		cout << "Your grade is C.\n";
		cout << "This is average.\n";
	}
	else if (testScore < 90)
	{
		cout << "Your grade is B.\n";
		cout << "This is an above average grade.\n";
	}
	else if (testScore <= 100)
	{
		cout << "Your grade is A.\n";
		cout << "This is a superior grade. Good work!\n";
	}
}
