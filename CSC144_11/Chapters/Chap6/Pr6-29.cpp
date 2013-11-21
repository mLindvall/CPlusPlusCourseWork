// This program demonstrates overloaded functions to calculate
// the gross weekly pay of hourly-paid or salaried employees.

#include <iostream.h>

// Function prototypes
void getChoice(char &);
float calcWeeklyPay(int, float); 
float calcWeeklyPay(float);

void main(void)
{
	char selection;
	int worked;
	float rate, yearly;

	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly-paid employee, or \n";
	cout << "(S) a salaried employee?\n";
     getChoice(selection);
	switch (selection)
	{
        case 'H' :
		case 'h' :  cout << "How many hours were worked? ";
					cin >> worked;
					cout << "What is the hour pay rate? ";
					cin >> rate;
					cout << "The gross weekly pay is ";
					cout << calcWeeklyPay(worked, rate);
					break;
		case 'S' :
		case 's' :  cout << "What is the annual salary? ";
					cin >> yearly;
					cout << "The gross weekly pay is ";
					cout << calcWeeklyPay(yearly);
					break;	
	}
}

//*************************************************************
// Definition of function getChoice.                          *
// The parameter letter is a reference to a char.             *
// This function asks the user for an H or an S and returns   *
// the validated input.                                       *
//*************************************************************

void getChoice(char &letter)
{
	do
	{
		cout << "Enter your choice (H or S): ";
		cin >> letter;
	} while (letter != 'H' && letter != 'h' &&
 		    letter != 'S' && letter != 's');

}

//***********************************************************
// Definition of overloaded function calcWeeklyPay.         *
// This function calculates the gross weekly pay of         *
// an hourly-paid employee. The parameter hours holds the   *
// number of hours worked. The parameter payRate holds the  *
// hourly pay rate. The function returns the weekly salary. *
//***********************************************************

float calcWeeklyPay(int hours, float payRate)
{
	return hours * payRate;
}

//***********************************************************
// Definition of overloaded function calcWeeklyPay.         *
// This function calculates the gross weekly pay of         *
// a salaried employee. The parameter holds the employee's  *
// annual salary. The function returns the weekly salary.   *
//***********************************************************

float calcWeeklyPay(float annSalary)
{
	return annSalary / 52.0;
}

