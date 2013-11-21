// This program uses two variables with the name Number.

#include <iostream.h>

void main(void)
{
	int number;

	cout << "Enter a number greater than 0: ";
	cin >> number;
	if (number > 0)
	{
		int number;
		cout << "Now enter another number: ";
		cin >> number;
		cout << "The second number you entered was ";
		cout << number << endl;
	}
	cout << "Your first number was " << number << endl;
}

