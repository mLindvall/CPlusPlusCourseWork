// This program averages a set of test scores for multiple
// students. It lets the user decide how many.

#include <iostream.h>

void main(void)
{
	int numStudents, count = 0;

	cout << "This program will give you the average of three\n";
	cout << "test scores per student.\n";
	cout << "How many students do have test scores for? ";
	cin >> numStudents;
	cout << "Enter the scores for each of the students.\n";
	cout.precision(2);
	while (count++ < numStudents)
	{
		int score1, score2, score3;
		float average;
		cout << "\nStudent " << count << ": ";
		cin >> score1 >> score2 >> score3;
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";
	}
}
