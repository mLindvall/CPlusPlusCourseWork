// This program asks the user for two numbers, Num1 and Num2.
// Num1 is divided by Num2 and the result is displayed.
// Before the division operation, however, Num2 is tested
// for the value 0. If it contains 0, the division does not
// take place.

#include <iostream.h>

void main(void)
{
	float num1, num2, quotient;

	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
	if (num2 == 0)
	{
		cout << "Division by zero is not possible.\n";
		cout << "Please run the program again and enter\n";
		cout << "a number besides zero.\n";
	}
	else
	{
		quotient = num1 / num2;
		cout << "The quotient of " << num1 << " divided by ";
		cout	<< num2 << " is " << quotient << ".\n";
	}
}

