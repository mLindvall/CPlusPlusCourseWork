// The function displayMessage is repeatedly called
// from a loop.

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
	for (int count = 0; count < 5; count++)
		displayMessage();	// Call displayMessage
	cout << "Back in function main again.\n";
}

