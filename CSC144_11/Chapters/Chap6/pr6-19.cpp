// This program has an uninitialized global variable.

#include <iostream.h>

int globalNum; // Global variable. Automatically set to zero.

void main(void)
{
	cout << "GlobalNum is " << globalNum << endl;
}

