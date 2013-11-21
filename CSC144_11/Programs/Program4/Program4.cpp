/*
	Programmer:		Michael Lindvall
	Date:			Feb. 15, 2006
	Discription:	Asks for the principal, the interest rate
					and the number of times the interest is compounded.
	Due Date:		Feb. 22, 2006
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>

void main(void)

{
	double	Rate, Interest, NPayments, LAmount, 
			Payments, PaidBack, InterestPaid;


	//Get information about loan
	cout << "What is the amount of the loan: ";
	cin >> LAmount;
	cout << "How many payments: ";
	cin >> NPayments;
	cout << "What is the annual interest rate\n";
	cout << "in decimal form: "; 
	cin >> Interest;

	//Calculations
	Rate = Interest / 12;
	Payments = ((Rate * pow((1 + Rate), NPayments)) / (pow((1 + Rate), NPayments) - 1)) * LAmount;
	PaidBack = NPayments * Payments;
	InterestPaid = PaidBack - LAmount;
	Rate = Rate * 100;		//so it can be display with out being a decimal
	//Display the output
	cout.precision(2);
	cout.setf(ios::right | ios::showpoint | ios::fixed);
	cout << "\n\n\nLoan Amount:\t\t\t$" << setw(9) << LAmount << endl;

	//Change the format of the display
	cout.precision(0);
	cout.unsetf(ios::showpoint);
	
	cout << "Monthly Interest Rate:\t\t" << setw(9) << Rate << "%" << endl;
	cout << "Number of Payments:\t\t" << setw(10) << NPayments << endl;

	//Reset the showpoint
	cout.precision (2);
	cout.setf(ios::showpoint);
	cout << "Monthly Payment:\t\t$" << setw(9) << Payments << endl;
	cout << "Amount Paid Back:\t\t$" << setw(9) << PaidBack << endl;
	cout << "Interest Paid:\t\t\t$" << setw(9) << InterestPaid << "\n\n";

	//The Creator
	cout << "\tCreated by Michael Lindvall\n";
}