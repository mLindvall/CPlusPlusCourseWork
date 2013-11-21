
// This program raises the user's number to the powers
// of 0 through 10.

#include <iostream.h>
#include <math.h>

void main(void)
{
	int value;
	char choice;

	cout << "Enter a number: ";
	cin >> value;
	cout << "This program will raise " << value;
	cout << " to the powers of 0 through 10.\n";
	for (int count = 0; count < 10; count++)
	{
		cout << value << " raised to the power of ";
		cout << count << " is " << pow(value, count);
		cout << "\nEnter Q to quit or any other key ";
		cout << "to continue. ";
		cin >> choice;
		if (choice == 'Q' || choice == 'q')
			break;
	}
}
				
