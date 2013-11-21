// This program shows that a global variable is visible 
// to all the functions that appear in a program after 
// the variable's declaration.

#include <iostream.h>

void func(void); // Function prototype

void main(void)
{
	cout << "In main, num is not visible!\n";
	func();
	cout << "Back in main, num still isn't visible!\n";
}

int num = 2; // Global variable

//******************************************************
// Definition of function func                         *
// func changes the value of the global variable num.  *
//******************************************************

void func(void)
{
	cout << "In func, num is " << num << endl;
	num = 50;
	cout << "But, it is now changed to " << num << endl;
}
