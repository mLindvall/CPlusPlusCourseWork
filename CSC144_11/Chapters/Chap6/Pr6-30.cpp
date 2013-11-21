// This program shows how the exit function causes a program
// to stop executing.

#include <iostream.h>
#include <stdlib.h>	// For exit

void function(void);  // Function prototype

void main(void)
{
	function();
}

//**************************************************************
// This function simply demonstrates that exit can be used     *
// to terminate a program from a function other than main.     *
//**************************************************************

void function(void)
{
	cout << "This program terminates with the exit function.\n";
	cout << "Bye!\n";
	exit(0);
	cout << "This message will never be displayed\n";
	cout << "because the program has already terminated.\n";
}

