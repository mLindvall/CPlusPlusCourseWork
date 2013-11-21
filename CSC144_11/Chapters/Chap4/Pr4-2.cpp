//	This program averages 3 test scores

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
	if (average > 95)
		cout << "Congratulations! That's a high score!\n";
	else
		if (average > 85 )
			cout << "You are doing a fine job!\n";
		else 
			if (average > 69)
				cout << "You are an average studend!\n";
			else
				if (average > 50)
					cout << "You are below average!\n";
				else
					cout << "You are failing!\n";
}
