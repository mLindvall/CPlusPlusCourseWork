/*	Feb. 6, 2006
	Learning how to use modulus
				modulus is only used for integer division.
	Chapter 3
	Programmer Michael Lindvall
*/

#include <iostream.h>
void main(void)

{
	int number1, number2;
	float answer, remainder;
	cout << "Enter in a number to be number1: ";
	cin >> number1;
	cout << "\n\nEnter in another number to be number2: ";
	cin >> number2;
	answer = number1/number2;
	cout << "\n\nYour answer is " << answer << endl;
	remainder = number1 % number2;
	cout <<"\nThe remainder to the answer is " << remainder << endl;
}