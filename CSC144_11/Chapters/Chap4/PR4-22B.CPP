// This program demonstrates late variable declaration

#include <iostream.h>

void main(void)
{
	cout << "What is your annual income? ";
        float income;   // variable declaration
	cin >> income;
	cout << "How many years have you worked at "
		 << "your current job? ";
        int years;      // variable declaration
	cin >> years;
	if (income >= 35000 || years > 5)
		cout << "You qualify.\n";
	else
	{
		cout << "You must earn at least $35,000 or have\n";
		cout << "been employed for more than 5 years.\n";
	}
}
