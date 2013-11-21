// This program asks the user for their annual income and 
// the number of years they have been employed at their current
// job. The || operator is used in a if statement that
// determines if the income is at least $35,000 or their time
// on the job is more than 5 years.

#include <iostream.h>

void main(void)
{
	float income;
	int years;

	cout << "What is your annual income? ";
	cin >> income;
	cout << "How many years have you worked at "
		 << "your current job? ";
	cin >> years;
	if (income >= 35000 || years > 5)
		cout << "You qualify.\n";
	else
	{
		cout << "You must earn at least $35,000 or have\n";
		cout << "been employed for more than 5 years.\n";
	}
}


