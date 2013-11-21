// This program correctly tests two C-strings for equality 
// with the strcmp function.

#include <iostream.h>
#include <string>

void main(void)
{
	char firstString[40], secondString[40];

	cout << "Enter a string: ";
	cin.getline(firstString, 40);
	cout << "Enter another string: ";
	cin.getline(secondString, 40);
	if (strcmp(firstString, secondString) == 0)
		cout << "You entered the same string twice.\n";
	else
		cout << "The strings are not the same.\n";
}
