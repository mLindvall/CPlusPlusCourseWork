// This program is a driver that tests a function comparng the contents
// of two short arrays.

#include <iostream.h>

// Function Prototype
bool testPIN(short [], short []);

void main(void)
{
	short PIN1[7] = {2, 4, 1, 8, 7, 9, 0}; // Base set of values.
	short PIN2[7] = {2, 4, 6, 8, 7, 9, 0}; // Only 1 element is different from PIN1.
	short PIN3[7] = {1, 2, 3, 4, 5, 6, 7}; // All elements are different from PIN1.

	if (testPIN(PIN1, PIN2))
		cout << "ERROR: PIN1 and PIN2 report to be the same.\n";
	else
		cout << "SUCCESS: PIN1 and PIN2 are different.\n";

	if (testPIN(PIN1, PIN3))
		cout << "ERROR: PIN1 and PIN3 report to be the same.\n";
	else
		cout << "SUCCESS: PIN1 and PIN3 are different.\n";

	if (testPIN(PIN1, PIN1))
		cout << "SUCCESS: PIN1 and PIN1 report to be the same.\n";
	else
		cout << "ERROR: PIN1 and PIN1 report to be different.\n";
}

//*****************************************************************
// The following function accepts two short arays. The arrays are *
// comapred. If they contain the same values, true is returned.   *
// If the contain different values, false is returned.            *
//*****************************************************************

bool testPIN(short custPIN[], short databasePIN[])
{
	for (short ndx = 0; ndx < 7; ndx++)
	{
		if (custPIN[ndx] != databasePIN[ndx])
			return false; // We've found two different values.
	}
	return true;  // If we make it to here, the values are the same.
}

