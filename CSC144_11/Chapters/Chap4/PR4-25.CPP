// This program illustrates that you cannot compare C-strings
// with relational operators. Although it appears to test the
// strings for equality, that is NOT what happens.

#include <iostream.h>

void main(void)
{
	char firstString[40], secondString[40];

	cout << "Enter a string: ";
	cin.getline(firstString, 40);
	cout << "Enter another string: ";
	cin.getline(secondString, 40);
	if (firstString == secondString)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";
}
