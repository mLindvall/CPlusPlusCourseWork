/*	Written by Michael Lindvall
	Date: Feb. 20, 2006
*/

#include <iostream.h>
#include <iomanip.h>

void main(void)

{
	double Hours, Payrate, Pay, Overtime, Regular;

	cout.setf(ios::right);
	cout.precision(2);
	cout.setf(ios::showpoint | ios::fixed);

	cout << "Number of hours worked: ";
	cin >> Hours;
	cout << "Payrate: ";
	cin >> Payrate;

	if (Hours > 40)
	{
		Regular = 40 * Payrate;
		Overtime = (Hours -40) * Payrate * 1.5;
		Pay = Regular + Overtime;
	}
	else
		Pay = Hours * Payrate;

	cout << "Your pay is $" << Pay << endl;
}

	
		