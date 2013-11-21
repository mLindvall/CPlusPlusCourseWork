//	This program demonstrates how cin can read multiple values
//	of different data types.

#include <iostream.h>

void main(void)
{
	int whole;
	float fractional;
	char letter;

	cout << "Enter an integer, a float, and a character: ";
	cin >> whole >> fractional >> letter;
	cout << "Whole: " << whole << endl;
	cout << "Fractional: " << fractional << endl;
	cout << "Letter: " << letter << endl;
}
