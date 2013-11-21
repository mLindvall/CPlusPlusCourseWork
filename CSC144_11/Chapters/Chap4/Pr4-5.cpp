//	This program averages 3 test scores. The if statement
//	uses the = operator, but the == operator was intended.

#include <iostream.h>

void main(void)
{
	int score1, score2, score3;
	float average;

	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	cout.precision(1);
	cout.setf(ios::showpoint | ios::fixed);
	cout << "Your average is " << average << endl;
	if (average = 100)
		cout << "Congratulations! That's a perfect score!\n";
}
