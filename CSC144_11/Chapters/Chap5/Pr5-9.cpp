// This program averages 3 test scores. It repeats as
// many times as the user wishes.

#include <iostream.h>

void main(void)
{
	int score1, score2, score3;
	float average;
	char again;

	do
	{
		cout << "Enter 3 scores and I will average them: ";
		cin >> score1 >> score2 >> score3;
                average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
}
