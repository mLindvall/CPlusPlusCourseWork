// This program shows that a static local variable is only
// initialized once.

#include <iostream.h>

void showStatic(void); // Function prototype

void main(void)
{
	for (int count = 0; count < 5; count++)
		showStatic();
}

//*****************************************************************
// Definition of function showStatic.                             *
// StatNum is a static local variable. Its value is displayed     *
// and then incremented just before the function returns.         *
//*****************************************************************

void showStatic(void)
{
	static int statNum = 5;

	cout << "StatNum is " << statNum << endl;
	statNum++;
}
