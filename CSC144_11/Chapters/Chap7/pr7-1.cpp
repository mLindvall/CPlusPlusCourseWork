// This program asks the user for the number of hours worked
// by 6 employees. It uses a 6-element int array to store the
// values. 

#include <iostream.h>

void main(void)
{
	short hours[6];

	cout << "Enter the hours worked by six employees: ";
	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];
	cin >> hours[4];
	cin >> hours[5];
	cout << "The hours you entered are:";
	cout << " " << hours[0];
	cout << " " << hours[1];
	cout << " " << hours[2];
	cout << " " << hours[3];
	cout << " " << hours[4];
	cout << " " << hours[5] << endl;
}
