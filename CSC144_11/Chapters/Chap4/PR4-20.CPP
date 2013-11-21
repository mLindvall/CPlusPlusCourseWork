// This program asks the user for their annual income and 
// the number years they have been employed at their current
// job. The ! operator reverses the logic of the expression
// in the if/else statement.

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
	if (!(income >= 35000 || years > 5))
	{
		cout << "You must earn at least $35,000 or have\n";
		cout << "been employed for more than 5 years.\n";
	}
	else
		cout << "You qualify.\n";
}
