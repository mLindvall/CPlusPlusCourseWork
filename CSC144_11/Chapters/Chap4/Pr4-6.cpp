//	This program averages 3 test scores.
//	It uses the variable HighScore as a flag.

#include <iostream.h>

void main(void)
{
	int score1, score2, score3;
	bool highScore = false;
	float average;

	cout << "Enter your 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;
	average = (score1 + score2 + score3) / 3.0;
	if (average > 95)
		highScore = true;	// Set the flag variable
	cout.precision(1);
	cout.setf(ios::showpoint | ios::fixed);
	cout << "Your average is " << average << endl;
	if (highScore)
		cout << "Congratulations! That's a high score!\n";
}
