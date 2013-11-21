// This program displays the number of days in each month.
// It uses a 12-element int array.

#include <iostream.h>

void main(void)

{

	int days[12] = {31, 28, 31, 30, 
			        31, 30, 31, 31, 
                    30, 31, 30, 31};

	for (int count = 0; count < 12; count++)
	{
		cout << "Month " << (count + 1) << " has ";
		cout << days[count] << " days.\n";
	}
}
