//	This program demonstrates the setw manipulator being
//	used with values of various data types.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	int intValue = 3928;
	float floatValue = 91.5;
	char stringValue[] = "John J. Smith";

	cout << "(" << setw(5) << intValue << ")" << endl;
	cout << "(" << setw(8) << floatValue << ")" << endl;
	cout << "(" << setw(16) << stringValue << ")" << endl;
}
