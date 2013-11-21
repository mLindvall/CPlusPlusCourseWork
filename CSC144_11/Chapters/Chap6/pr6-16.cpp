// This program shows that variables declared in a function
// are hidden from other functions. 

#include <iostream.h>

void func(void);  // function prototype

void main(void)
{
	int num = 1;

	cout << "In main, num is " << num << endl;
	func();
	cout << "Back in main, num is still " << num << endl;
}

//*****************************************************************
// Definition of function func.                                   *
// It has a local variable, num, whose value initial value, 20,   *
// is displayed.                                                  *
//*****************************************************************

void func(void)
{
	int num = 20;

	cout << "In func, num is " << num << endl;
}

