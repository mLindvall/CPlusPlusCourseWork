// This is a menu-driven program that makes a function call
// for each selection the user makes.

#include <iostream.h>

// Function Prototypes
void adult(int);
void child(int);
void senior(int);

void main(void)
{
	int choice, months;

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
			case 1:	adult(months);
					break;
			case 2:	child(months);
					break;
			case 3:	senior(months);
					break;
			case 4: cout << "Thanks for using this ";
					cout << "program.\n";
			        break;
			default:cout << "The valid choices are 1-4. ";
			        cout << "Try again.\n";
		}
	} while (choice != 4);
}

//*****************************************************************
// Definition of function adult. Uses an integer parameter, mon.  *
// mon holds the number of months the membership should be        *
// calculated for. The cost of an adult membership for that many  *
// months is displayed.                                           *
//*****************************************************************

void adult(int mon)
{
    cout << "The total charges are $";
    cout << (mon * 40.0) << endl;
}

//*****************************************************************
// Definition of function child. Uses an integer parameter, mon.  *
// mon holds the number of months the membership should be        *
// calculated for. The cost of a child membership for that many   *
// months is displayed.                                           *
//*****************************************************************

void child(int mon)
{
    cout << "The total charges are $";
    cout << (mon * 20.0) << endl;
}

//*****************************************************************
// Definition of function senior. Uses an integer parameter, mon. *
// mon holds the number of months the membership should be        *
// calculated for. The cost of a senior citizen membership for    *
// that many months is displayed.                                 *
//*****************************************************************

void senior(int mon)
{
    cout << "The total charges are $";
    cout << (mon * 30.0) << endl;
}
