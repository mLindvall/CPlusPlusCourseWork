// This program is a driver for testing the adult function.

#include <iostream.h>

// Prototype
void adult(int);

void main(void)
{
	cout << "Calling the Adult function with argument 2.\n";
	adult(2);
	cout << "Calling the Adult function with argument 10.\n";
	adult(10);
	cout << "Calling the Adult function with argument 25.\n";
	adult(25);
}

//*****************************************************************
// Definition of function adult. Uses an integer parameter, mon.  *
// mon holds the number of months the membership should be        *
// calculated for. The cost of an adult membership for that many  *
// months is displayed.                                           *
//*****************************************************************

void adult(int mon)
{
    cout << "The total charges are $";
    cout << (mon * 40.0) << endl;
}
