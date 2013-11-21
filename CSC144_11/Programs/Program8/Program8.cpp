/*
	Programmer:		Michael Lindvall
	Date:			March 30, 2006
	Description:	Displays a weekly payroll report
	Due Date:		April 3, 2006
*/

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main(void)
{
	char Run;
	int Employee;
	float GrossPay, StateTax, FederalTax, FICA, Gross=0, State=0, Federal=0, fica=0, total=0,
		GrandTotal=0;

	do
	{
		do
		{
			cout << "\t\t\t***************************************\n";
			cout << "\t\t\t*Enter zero in employee number to exit*\n";
			cout << "\t\t\t***************************************\n\n";
			cout << "Please enter the following information\n\n";
	
			do
			{
				cout << "Employee Number: ";	//Employee Number
				cin >> Employee;
				if (Employee < 0)
				{			
					cout << "Employee Number must be great then zero\n";
					cout << "Please try again!\n\n";
				}			
			}
			while (Employee < 0);
			//If they eneter zero as employee number it will exit them out
			if (Employee == 0)
				break;		//Breaks out of the 'do'
		
			do
			{
				cout << "Gross Pay:       ";			//Gross Pay
				cin >> GrossPay;
				if (GrossPay <=0)
				{
					cout << "Gross Pay must be greater then zero\n";
				}
			}
			while (GrossPay <= 0 );
			
			do
			{
			
				do
				{	
					cout << "State Tax:       ";			//State Tax
					cin >> StateTax;
					if (StateTax <=0)
					{
						cout << "State Tax must be greater then zero\n";
					}
				}
				while (StateTax <=0 );
				
				do
				{
					cout << "Federal Tax:     ";		//Federal Tax
					cin >> FederalTax;
					if (FederalTax <=0 )
					{
						cout << "Federal Tax must be greater then zero\n";
					}
				}
				while (FederalTax <= 0 );
				
				do
				{
					cout << "FICA:            ";				//FICA
					cin >> FICA;
					if (FICA <=0 )
					{
						cout << "FICA must be greater then zero\n";
					}
				}
				while (FICA <= 0 );
				

				total = FederalTax + StateTax + FICA;

				if (total > GrossPay)
				{
					cout << "\nTotals of your taxes cannot exceed your Gross Pay!\n";
					cout << "Please try again\n\n";
				}
			}
			while (total > GrossPay);
			fica+=FICA;
			State+=StateTax;
			Gross+=GrossPay;
			Federal+=FederalTax;
			GrandTotal+=total;
		}
		while (Employee > 0 );
		
		cout << "\n\nPAYROLL REPORT\n";
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout.precision (2);
		cout.setf(ios::fixed | ios::right | ios::showpoint);
		cout << "Gross Pay:\t\t$" << setw(9) << Gross << endl;
		cout << "State Tax:\t\t$" << setw(9) << State << endl;
		cout << "Federal Tax:\t\t$" << setw(9) << Federal << endl;
		cout << "FICA:\t\t\t$" << setw(9) << fica << endl;
		cout << "Net Pay:\t\t$" << setw(9) << Gross-GrandTotal << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		cout << "\n\nWould you like to run program again?\n";
		cout << "\tFor YES hit 'Y', for NO hit any other key: ";
		cin >> Run;
		
		} 
		while (Run == 'Y' || Run == 'y');

	cout << "\n\n\t\t\tThank You!!!!!!\n";
	cout << "\n\nCreated by Michael Lindvall\n\n";
}