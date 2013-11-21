// This program demonstrates a function with a parameter.

#include <iostream.h>

// Function Prototype
void displayValue(int);

void main(void)
{
	cout << "I am passing 5 to displayValue.\n";
	displayValue(5);	// Call displayValue with argument 5
	cout << "Now I am back in main.\n";
}

//**********************************************************
// Definition of function displayValue.                    *
// It uses an integer parameter whose value is displayed.  *
//**********************************************************

void displayValue(int num)
{
	cout << "The value is " << num << endl;
}
