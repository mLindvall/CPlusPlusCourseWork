// This program demonstrates that an array element is passed
// to a function like any other variable.

#include <iostream.h>

void showValue(int num);	// Function prototype

void main(void)
{
	int collection[8] = {5, 10, 15, 20, 25, 30, 35, 40};

	for (int cycle = 0; cycle < 8; cycle++)
		showValue(collection[cycle]);
}

//**********************************************
// Definition of function showValue.           *
// This function accepts an integer argument.  *
// The value of the argument is displayed.     *
//**********************************************

void showValue(int num)
{
	cout << num << " ";
}

