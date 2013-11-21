/*
	Programmer is Michael Lindvall
	Date April 19, 2006
*/


#include <iostream.h>
#include <math.h>

void main(void)

{
	int Scores[5], num, largest, smallest;

	for (num = 0; num < 5; num++)
	{
		cout << "\nPlease enter in the test scores:\n";
		do
		{
			cout << "\tTest #" << num + 1 << ": ";
			cin >> Scores[num];
			if (Scores[num] <0 || Scores[num] > 100)
				cout << "Enter a score in the range of 0 - 100.\n";
		}
		while (Scores[num] < 0 || Scores[num] > 100);
	}

	smallest = Scores[0];
	for (num = 1; num < 5; num++)
	{
		if (Scores[num] < smallest)
			smallest = Scores[num];
	}
	cout << "\nThe smallest value is: " << smallest << endl;

	largest = Scores[0];
	for (num = 1; num < 5 ; num++)
	{
		if (Scores[num] > largest)
			largest = Scores[num];
	}
	cout << "\nThe largest value is: " << largest << endl;
}



