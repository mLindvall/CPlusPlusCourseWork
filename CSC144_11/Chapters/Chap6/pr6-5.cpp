// This program has three functions: main, First, and Second.

#include <iostream.h>

// Function Prototypes
void first(void);
void second(void);

void main(void)
{
	cout << "I am starting in function main.\n";
	first();	// Call function first
	second();	// Call function second
	cout << "Back in function main again.\n";
}

//*************************************
// Definition of function first.      *
// This function displays a message.  *
//*************************************

void first(void)
{
	cout << "I am now inside the function first.\n";
}

//*************************************
// Definition of function second.     *
// This function displays a message.  *
//*************************************

void second(void)
{
	cout << "I am now inside the function second.\n";
}
