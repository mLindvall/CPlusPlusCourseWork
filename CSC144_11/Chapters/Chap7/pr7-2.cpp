// This program asks the user for the number of hours worked
// by 6 employees. It uses a 6-element int array to store the
// values. 

#include <iostream.h>

void main(void)
{
	short hours[6];

	cout << "Enter the hours worked by six employees: ";
	for (int count = 0; count < 6; count++)
		cin >> hours[count];
	cout << "The hours you entered are:";
	for (count = 0; count < 6; count++)
		cout << " " << hours[count];
	cout << endl;
}
