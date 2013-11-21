// This program calculates the total number of points a 
// soccer team has earned over a series of games. The user
// enters a series of point values, then -1 when finished.

#include <iostream.h>

void main(void)
{
	int count = 0, points = 0, total = 0;

	cout << "Enter the number of points your team has earned\n";
	cout << "so far in the season, then enter -1 when\n";
	cout << "finished.\n";
	while (points != -1)
	{
		count++;
		cout << "Enter the points for game " << count << ": ";
		cin >> points;
		if (points != -1)
			total += points;
	}
	cout << "The total points are " << total << endl;
}
