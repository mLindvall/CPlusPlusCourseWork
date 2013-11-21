// This program uses the modulus operator to determine
// if a number is odd or even. If the number is evenly divided
// by 2, it is an even number. A remainder indicates it is odd.

#include <iostream.h>

void main(void)
{
	int number;

	cout << "Enter an integer and I will tell you if it\n";
	cout << "is odd or even. ";
	cin >> number;
	if (number % 2 == 0)
		cout << number << " is even.\n";
	else
		cout << number << " is odd.\n";
}
