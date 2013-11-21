// This program demonstrates a simple while loop.

#include <iostream.h>

void main(void)
{
	int number = 0;

	cout << "This program will let you enter number after\n";
	cout << "number. Enter 99 when you want to quit the ";
	cout << "program.\n";
	while (number != 99)
		cin >> number;
}
