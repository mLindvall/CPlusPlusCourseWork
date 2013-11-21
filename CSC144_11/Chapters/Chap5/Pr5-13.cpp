// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.

#include <iostream.h>

void main(void)
{
	int numStudents, numTests, total;
	float average;

	cout << "This program averages test scores.\n";
	cout << "For how many students do you have scores? ";
	cin >> numStudents;
	cout << "How many test scores does each student have? ";
	cin >> numTests;
	for (int count1 = 1; count1 <= numStudents; count1++)
	{
		total = 0;      // Initialize the accumulator.
		for (int count2 = 1; count2 <= numTests; count2++)
		{
			int score;
			cout << "Enter score " << count2 << " for ";
			cout << "student " << count1 << ": ";
			cin >> score;
			total += score;
		}
		average = total / numTests;
		cout << "The average score for student " << count1;
		cout << " is " << average << ".\n\n";
	}
}

