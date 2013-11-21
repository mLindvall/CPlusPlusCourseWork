// This program demonstrates the exit function.

#include <iostream.h>
#include <stdlib.h> // For exit

void main(void)
{
	char response;

	cout << "This program terminates with the exit function.\n";
	cout << "Enter S to terminate with the EXIT_SUCCESS code\n";
	cout << "or F to terminate with the EXIT_FAILURE code: ";
	cin >> response;
	if (response == 'S')
	{
		cout << "Exiting with EXIT_SUCCESS.\n";
		exit(EXIT_SUCCESS);
	}
	else
	{
		cout << "Exiting with EXIT_FAILURE.\n";
		exit(EXIT_FAILURE);
	}
}

