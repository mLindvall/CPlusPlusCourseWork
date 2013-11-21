// This program demonstrates a function with a return statement.

#include <iostream.h>

// Function prototype
void halfway(void);

void main(void)
{
	cout << "In main, calling halfway...\n";
	halfway();
	cout << "Now back in main.\n";
}

//*********************************************************
// Definition of function halfway.                        *
// This function has a return statement that forces it to *
// terminate before the last statement is executed.       *
//*********************************************************

void halfway(void)
{
	cout << "In halfway now.\n";
	return;
	cout <<"Will you ever see this message?\n";
}
