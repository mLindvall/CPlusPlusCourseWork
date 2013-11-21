// This program displays a menu and asks the user to make a
// selection. An if/else if statement determines which item
// the user has chosen.

#include <iostream.h>

void main(void)
{
	int choice, months;
	float charges;

	cout << "\t\tHealth Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	if (choice == 1)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * 40.00;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * 20.00;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 3)
	{
		cout << "\nFor how many months? ";
		cin >> months;
		charges = months * 30.00;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		cout << "The valid choices are 1 through 4. Run the\n";
		cout << "program again and select one of those.\n";
	}
}
