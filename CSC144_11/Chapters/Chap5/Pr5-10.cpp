// This program displays a menu and asks the user to make a
// selection. A switch statement determines which item the
// user has chosen. A do-while loop repeats the program until
// the user selects item 4 from the menu.

#include <iostream.h>

void main(void)
{
	int choice, months;
	float charges;

	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	do
	{
		cout << "\n\t\tHealth Club Membership Menu\n\n";
		cout << "1.  Standard Adult Membership\n";
		cout << "2.  Child Membership\n";
		cout << "3.  Senior Citizen Membership\n";
		cout << "4.  Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;
		if (choice > 0 && choice < 4)
		{
			cout << "For how many months? ";
			cin >> months;
		}
		switch (choice)
		{
			case 1:  charges = months * 40.00;
			         cout << "The total charges are $";
			         cout << charges << endl;
			         break;
			case 2:  charges = months * 20.00;
			         cout << "The total charges are $";
			         cout << charges << endl;
			         break;
			case 3:  charges = months * 30.00;
			         cout << "The total charges are $";
			         cout << charges << endl;
			         break;
			case 4:  cout << "Thanks for using this ";
				     cout << "program.\n";
			         break;
			default: cout << "The valid choices are 1-4. ";
			         cout << "Try again.\n";
		}
	} while (choice != 4);
}

