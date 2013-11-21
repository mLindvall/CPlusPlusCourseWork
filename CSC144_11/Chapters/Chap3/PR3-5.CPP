//	This program demonstrates how cin can read a string into
//	a character array.

#include <iostream.h>

void main(void)
{
	char name[21];

	cout << "What is your name? ";
	cin >> name;
	cout << "Good morning " << name << endl;
}
