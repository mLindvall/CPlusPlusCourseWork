//	This program displays the values of true and false
//  states.

#include <iostream.h>

void main(void)

{
	int trueValue, falseValue, x = 5, y = 10;
	
	trueValue = x < y;
	falseValue = y == x;
	
	cout << "True is  " << trueValue << endl;
	cout << "False is  " << falseValue << endl;

}
