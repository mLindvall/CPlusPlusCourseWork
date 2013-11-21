// Michael Lindvall
// This program calculates the users's pay.
#include <iostream.h>
void main (void)
{
	float hours, rate, pay;
	cout << "How many hours did you work? ";
	cin >> hours;
	cout << "How much do you get paid per hour? ";
	cin >> rate;
	pay = hours * rate;
	cout << "You have earned $" << pay << endl;
}