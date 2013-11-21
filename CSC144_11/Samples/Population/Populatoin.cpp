/*
	Programmer:		Michael Lindvall
	Date:			March 20th
	Program:		Page 304 number 7 Population
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>

void main(void)

{
	double Beg, Daily, Pop;
	int Days;

	do
	{
		cout << "What will be the starting population size: ";
		cin >> Pop;
		if (Pop < 2)
		{
			cout << "\nStarting population must be larger or\n";
			cout << "equal to 2.  Please try again.\n\n";
		}
	}
	while (Pop < 2);

	do
	{
		cout << "\nWhat will the daily increase of the\n";
		cout << "population be as a percentage: ";
		cin >> Daily;
		if (Daily < 0)
		{
			cout << "\nDaily increase mus be greater then 0 percent\n";
			cout << "Please try again\n\n";
		}
	}
	while (Daily > 100 || Daily < 0);

	do
	{
		cout << "\nHow many days will the population multiply for: ";
		cin >> Days;
		if (Days < 1)
		{
			cout << "\nThe number of days must be greater or equal to 1\n";
			cout << "Please try again\n\n";
		}
	}
	while (Days < 1);

	Daily = Daily/100;  //To change it to a a decimal
	int count;	
	double Increase;
	Beg = Pop;
	for (count=1; count <= Days; count++)
	{
		
		Increase = Pop * Daily;
		Pop += Increase;

		if (Pop > 10000000)
		{
			cout.setf(ios::showpoint | ios::fixed | ios::right | ios::scientific);
			cout.precision (0);
			cout << "Population on Day "<< count <<": \t" << setw(9) << (Pop) << endl;
		}
		else
		{
			cout.setf(ios::showpoint | ios::fixed | ios::right);
			cout.precision (0);
			cout << "Population on Day "<< count <<": \t" << setw(9) << (Pop) << endl;
		}

	}
}

