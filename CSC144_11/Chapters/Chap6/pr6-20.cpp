// This program shows that when a local variable has the
// same name as a global variable, the function only sees
// the local variable.

#include <iostream.h>

// Function prototypes
void texas(void); 
void arkansas(void);

int cows = 10;

void main(void)
{
	cout << "There are " << cows << " cows in main.\n";
	texas();
	arkansas();
	cout << "Back in main, there are " << cows << " cows.\n";
}

//******************************************
// Definition of function texas.           *
// The local variable cows is set to 100.  *
//******************************************

void texas(void)
{
	int cows = 100;

	cout << "There are " << cows << " cows in texas.\n";
}

//*******************************************
// Definition of function arkansas.         *
// The local variable cows is set to 50.    *
//*******************************************

void arkansas(void)
{
	int cows = 50;

	cout << "There are " << cows << " cows in arkansas.\n";
}
