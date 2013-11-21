// This program uses a reference variable as a function
// parameter.

#include <iostream.h>

// Function prototype. The parameter is a reference variable.
void doubleNum(int &);

void main(void)
{
	int value = 4;

	cout << "In main, value is " << value << endl;
	cout << "Now calling doubleNum..." << endl;
	doubleNum(value);
	cout << "Now back in main. value is " << value << endl;
}

//***********************************************************
// Definition of doubleNum.                                 *
// The parameter refVar is a reference variable. The value  *
// in refVar is doubled.                                    *
//***********************************************************

void doubleNum (int &refVar)
{
	refVar *= 2;
}
