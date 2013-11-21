// This program displays the number of days in each month.
// It uses a 12-element int array.

#include <iostream.h>

void main(void)
{
	int days[12];

	days[0] = 31;  // January
	days[1] = 28;  // February
	days[2] = 31;  // March
	days[3] = 30;  // April
	days[4] = 31;  // May
	days[5] = 30;  // June
	days[6] = 31;  // July
	days[7] = 31;  // August
	days[8] = 30;  // September
	days[9] = 31;  // October
	days[10] = 30; // November
	days[11] = 31; // December

	for (int count = 0; count < 12; count++)
	{
		cout << "Month " << (count + 1) << " has ";
		cout << days[count] << " days.\n";
	}
}

