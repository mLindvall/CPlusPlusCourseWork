// This program asks the user for the number of hours worked
// by 6 employees. It uses a 6-element int array to store the
// values. 

#include <iostream.h>

void main(void)
{
	short hours[6];

	cout << "Enter the hours worked by six employees.\n";
	for (int count = 1; count <= 6; count++)
	{
		cout << "Employee " << count << ": ";
		cin >> hours[count - 1];
	}
	cout << "The hours you entered are\n";
	for (int count = 1; count <= 6; count++)
	{
		cout << "Employee " << count << ": ";
		cout << hours[count - 1] << endl;
	}
}
