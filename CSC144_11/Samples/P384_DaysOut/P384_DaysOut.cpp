/*
	Written by Michael Lindvall
	Date April 3, 206
	Page 384 Problem 4
*/

#include <iostream.h>
#include <iomanip.h>


//Function Prototype
int NumEmp(void);
int DaysMissed(int);
float AveDaysMissed(int, int);

void main(void)

{
	int Emp, Days;
	float Avg;

	cout << "------------------------------------\n";
	cout << "|         Days Out of Work          |\n";
	cout << "------------------------------------\n";

	Emp = NumEmp();
	Days = DaysMissed(Emp);
	Avg = AveDaysMissed(Emp, Days);

	cout.precision (1);
	cout.setf(ios::fixed);
	cout << "\nThe average number of days missed per employee is " << Avg << ".\n";
	
}





//Function NumEmp
//This function asks the user to enter in the number of employees
//Validation is performed to verify at lest one employee is employeed
//The value entered is returned to main.
int NumEmp(void)
{
	int num;
	do
	{
		cout << "Number of employees in company: ";
		cin >> num;
		if (num < 1)
			cout << "Enter at least 1.\n";
	}
	while (num < 1);
	return num;
}

//Function DaysMissed
//This function accepts an argument(number of employees in a company).
//Then the users is asked to enter the amount of days missed per employee.
//Validation is performed to confirm negative number is not entered.
//The total days missed by all employees is returned
int DaysMissed(int Employees)
{
	int count, days, TotalDays=0;
	for (count = 1; count <= Employees ; count++)
	{
		do
		{
			cout << "Days missed for employee # " << count << ": ";
			cin >> days;
			if (days < 0)
				cout << "Enter at least a zero days missed.\n";
			else if (days > 365)
				cout << "Can't miss more then 365 days in one year!\n";
		}
		while (days < 0 || days > 365);
		TotalDays +=days;
	}

	return TotalDays;
}


//Function AvgDaysMissed
//This fucntion accepts the no of employees (results of function 1) and total
//no of days missed by all the employees (result of fucntion 2).
//The average number of days missed is calculated and returned.

float AveDaysMissed(int Emps, int Days)
{
	float avg;
	avg = float(Days)/Emps;
	return avg;
}