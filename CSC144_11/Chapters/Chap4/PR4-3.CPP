//	This program demonstrates how a misplaced semicolon
//	prematurely terminates an if statement.

#include <iostream.h>

void main(void)
{
	int x = 0, y = 10;

	cout << "X is " << x << " and Y is " << y << endl;
	if (x > y);
		cout << "X is greater than Y\n";
}
