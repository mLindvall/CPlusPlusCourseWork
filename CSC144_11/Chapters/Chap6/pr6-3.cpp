// This program has three functions: main, first, and second.

#include <iostream.h>

//*************************************
// Definition of function first.      *
// This function displays a message.  *
//*************************************

void first()
{
	cout << "I am now inside the function first.\n";
}

//*************************************
// Definition of function second.     *
// This function displays a message.  *
//*************************************

void second()
{
	cout << "I am now inside the function second.\n";
}

void main(void)
{
	cout << "I am starting in function main.\n";
	first();	// Call function first
	second();	// Call function second
	cout << "Back in function main again.\n";
}
