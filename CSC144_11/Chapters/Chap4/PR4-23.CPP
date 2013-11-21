// This program demonstrates a variable declared in an inner block.

#include <iostream.h>

void main(void)
{
	cout << "What is your annual income? ";
        float income;   // variable declaration
	cin >> income;	
	if (income >= 35000)
	{
                int years;      // variable declaration
		cout << "How many years have you worked at "
			<< "your current job? ";
		cin >> years;
		if (years > 5)
			cout << "You qualify.\n";
		else
		{
			cout << "You must have been employed for\n";
			cout << "more than 5 years to qualify.\n";
		}
	}
	else
	{
		cout << "You must earn at least $35,000 to\n";
		cout << "qualify.\n";
	}
}
