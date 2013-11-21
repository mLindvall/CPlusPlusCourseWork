/*
	Programmer:		Michael Lindvall
	Description:	Using arrays to figure out employees pay.
	Date:			May 8, 2006
	Foloder:		CSC100_11/Programs/Program11
	Due Date:		May 8, 2006
*/



#include <iostream.h>
#include <iomanip.h>
#include <math.h>

//Fucntion Prototype
void getEmpInfo(int [], float [], float []);
void getPayAmount(float [], float [], float []);
void displayInfo(int [], float []);


void main(void)
{
	int empID[5] = {5658845, 8451277, 4520125, 1302850, 7895122};
	float empHrs[5], empRate[5], empPay[5];

	getEmpInfo(empID, empHrs, empRate);
	getPayAmount(empHrs, empRate, empPay);
	displayInfo(empID, empPay);

	cout << "Created by Michael Lindvall\n\n";

}


// **********************************************************************
// getEmpInfo Description
// Asks the user to input hours and pay rate for each employee
// and then saves them in the arrays
// **********************************************************************
void getEmpInfo(int empID[], float empHrs[], float empRate[])
{
	for(int i = 0; i < 5; i++)
	{
		
		cout << "Please enter the following information for \n";
		cout << "employee # " << empID[i] << ": \n";
		do
		{
			cout << "\tNumber of hours: ";
			cin >> empHrs[i];
			if (empHrs < 0)
			{
				cout << "Sorry, but you cannot have a negative number\n";
				cout << "for amount of hours\n";
				cout << "Please try again\n";
			}
		}
		while(empHrs < 0);
		do
		{
			cout << "\tEmployee's pay rate: ";
			cin >> empRate[i];
			if (empRate[i] < 6)
			{
				cout << "Employee pay rate cannot be less then $6\n";
				cout << "Please try again\n";
			}
		}
		while(empRate[i] < 6);
	}
}

// ************************************************************************
// getPayAmount Description
// this function performs the calculations to find the total amount that
// each employee gets paid
// ************************************************************************
void getPayAmount(float empHrs[], float empRate[], float empPay[])
{
	for(int i = 0; i < 5; i++)
	{ 
		empPay[i] = empHrs[i] * empRate[i];
		cout << empPay[i];
	}
}

// *************************************************************************
// displayInfo Description
// This function will display the employee number and the amount that should
// be paid out to that employee
// *************************************************************************
void displayInfo(int empID[], float empPay[])
{
	cout << "\n\t =======================================";
	cout << "\n\t|          Employee Pay Roll            |";
	cout << "\n\t =======================================\n\n";
	
	cout << "Employee #\tPay\n";
	cout << "=============================\n";
	cout.precision(2);
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	for (int i = 0; i < 5; i++)
	{
		cout << empID[i] <<"\t\t" << setw(7) << empPay[i] << endl;
	}
	cout << "=============================\n\n\n";
}
