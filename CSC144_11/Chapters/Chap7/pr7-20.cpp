// This program displays the number of days in each month.
// It uses a two-dimensional character array to hold the 
// names of the months and an int array to hold the number
// of days.

#include <iostream.h>

void main(void)
{

	char months[12][10] = {"January", "February", "March",
	                       "April", "May", "June", 
			               "July", "August", "September",
	                       "October", "November", "December"};
	int days[12] = {31, 28, 31, 30, 
				    31, 30, 31, 31, 
                    30, 31, 30, 31};

	for (int count = 0; count < 12; count++)
	{
		cout << months[count] << " has ";
		cout << days[count] << " days.\n";
	}
}
