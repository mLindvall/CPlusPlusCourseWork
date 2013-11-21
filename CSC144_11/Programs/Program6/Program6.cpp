/*
	Written by Michael Lindvall
	Date:			March 9, 2006
	Description:	An internet provider has three differnt types of packages
					This program will ask the customer what package they have
					and then display their total amount due for the month
	Due Date:		March 13, 2006
*/

#include <iostream.h>
#include <math.h>
#include <iomanip.h>
#include <string.h>


void main(void)

{
	char Package[2], Answer;
	double Hours, PackageA, PackageB, PackageC, HoursA, HoursB, 
		HoursAmount, OverHours, TotalDue, TotalSave;

	PackageA = 9.95;	//Monthly Cost for PackageA
	HoursA = 2;			//Cost per hour over 10 hours
	PackageB = 14.95;	//Monthly Cost for PackageB
	HoursB = 1;			//Cost per hour over 20
	PackageC = 19.95;	//Monthly Cost for PackageC
	
	
	do 
	{
		cout << "\n\nWhat package have you purchased?\n";
		cout << "\t\tPackage A, B, or C: ";
		cin >> Package;
	
		if (strcmp(Package, "A")==0 || strcmp(Package,"a")==0 
			|| strcmp(Package, "B")==0 || strcmp(Package, "b")==0
			|| strcmp(Package, "C")==0 || strcmp(Package, "c")==0)
		{
		{	
			cout << "How many hours was the internet accessed: ";
			cin >> Hours;
		}
			if (Hours >= 0 && Hours <= 744)
			{
				//This will figure what package they have
				//and what they should be charged for the amount of hours they used
				if (strcmp(Package, "A")==0 || strcmp(Package,"a")==0)
				{
					TotalDue = PackageA;
					if (Hours > 10)
					{
						OverHours = Hours - 10;
						HoursAmount = OverHours * HoursA;
					
					}
					else
					{
						HoursAmount = 0;
						OverHours = 0;
					}
				}
				else if (strcmp(Package, "B")==0 || strcmp(Package, "b")==0)
				{
					TotalDue = PackageB;
					if (Hours > 20)
					{
						OverHours = (Hours - 20);
						HoursAmount = OverHours * HoursB;
					
					}
					else
					{
						HoursAmount = 0;
						OverHours = 0;
					}
				}
				else if (strcmp(Package, "C")==0 || strcmp(Package, "c")==0)
				{
					TotalDue = PackageB;
					OverHours = 0;
					HoursAmount = 0;
				}
		
				TotalDue += HoursAmount;
	
				cout << "\nYour Monthly Statement\n";
				cout << "-------------------------------------------\n";
				cout << "Your Monthly Package:\t\t" << setw(6) << Package << endl;
				cout.precision (0);
				cout.unsetf(ios::showpoint);
				cout.setf(ios::right | ios::fixed);
				cout << "Total Hours Used:\t\t" << setw(6) << Hours << endl;
				cout << "Over Plan Hours:\t\t" << setw(6) << OverHours << endl;
				cout.precision (2);
				cout.setf(ios::showpoint);
				cout << "Total Charge for Over Hours:\t$" << setw(7) << HoursAmount << endl;
				cout << "-------------------------------------------\n";
				cout << "Total Due:\t\t\t$" << setw(7) << TotalDue << endl;
	
				if (strcmp(Package, "A")==0 || strcmp(Package,"a")==0)
				{
					if (TotalDue > PackageB && TotalDue < PackageC  || TotalDue > PackageC)
					{
						TotalSave = PackageC - TotalDue;
							if (TotalSave < 0)
								TotalSave = 0;
							else
								cout << "\nYou could of saved $" << TotalSave << " with Package B.\n";
						TotalSave = TotalDue - PackageC;
							if (TotalSave < 0)
								TotalSave =0;
							else
								cout << "\nYou could of saved $" << TotalSave << " with Package C.\n";
					}
				}
				else if (strcmp(Package, "B")==0 || strcmp(Package, "b")==0)
				{
					if (TotalDue > PackageC)
					{
						TotalSave = TotalDue - PackageC;
							if (TotalSave < 0)
								TotalSave = 0;
							else
								cout << "\nYou could of saved $" << TotalSave << " with Package C.\n";
					}
				}
	
			}
			else if (Hours > 744)
			{
				cout << "\n\nHours can not exceed 744 hours.\n";
				cout << "Please run program again.\n";
			}
			else
			{	
				cout << "\n\nPlease enter hours in numeric form\n";
				cout << "and be greater then zero.\n";
			}
		}
	
		else
		{
			cout << "\n\n\t\tPackage " << Package << " does not exist.\n";
			cout << "Please run program again and choose one of the packages.\n";
		}
		
	cout << "\n\n\nWould you like to run program again?\n";
	cout << "\t\tFor YES hit 'Y', for NO hit any other key: ";
	cin >> Answer;
		
	} while (Answer == 'Y' || Answer == 'y');

	cout << "\n\n\t\tThank You and Have a Great Day!!!!\n";
	cout << "\n\nCreated by Michael Lindvall\n";
}