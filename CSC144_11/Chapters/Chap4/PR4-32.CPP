// The switch statement in this program tells the user something
// he or she already knows: what they just entered!


#include <iostream.h>

void main(void)
{
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;
	switch (choice)
	{
		case 'A':	cout << "You entered A.\n";
		case 'B':	cout << "You entered B.\n";
		case 'C':	cout << "You entered C.\n";
		default:	cout << "You did not enter A, B, or C!\n";
	}	
}

