// This program has two functions: main and displayMessage

#include <iostream.h>

//*****************************************
// Definition of function displayMessage. *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
}

void main(void)
{
	cout << "Hello from main.\n";
	displayMessage();
	cout << "Back in function main again.\n";
}

