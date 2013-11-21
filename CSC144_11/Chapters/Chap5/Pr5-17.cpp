// This program produces a loan amortization chart for the
// Central Mountain Credit Union.

#include <iostream.h>
#include <iomanip.h>
#include <math.h> // For pow function

void main(void)
{
	float loan,         // Loan amount
		  rate,         // Annual interest rate
		  years,        // Years of loan
		  balance,      // Monthly balance
		  term,         // Used to calculate payment
		  payment;      // Monthly payment

    // Ask user for input.
	cout << "Loan amount: $";
	cin >> loan;
	cout << "Annual Interest Rate: ";
	cin >> rate;
	cout << "Years of loan: ";
	cin >> years;
	// Calculate monthly payment.
	term = pow((1 + rate / 12.0), 12.0 * years);
	payment = (loan * rate / 12.0 * term) / (term - 1.0);
	// Display monthly payment.
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "Monthly payment: $" << payment << endl;
	// Display report header.
	cout << endl;
	cout << setw(5) << "Month";
	cout << setw(10) << "Interest";
	cout << setw(10) << "Principal";
	cout << setw(10) << "Balance" << endl;
	cout << "----------------------------------------\n";
	// Produce a listing for each month.
	balance = loan;
	int numPayments = 12 * years;
	for (int month = 1; month <= numPayments; month++)
	{
		float minterest, principal;

		// Calculate monthly interest
		minterest = rate / 12 * balance;
		if (month != numPayments)
			principal = payment - minterest;
		else			// If this is the last month
		{
			principal = balance;
			payment = balance + minterest;
		}

		// Calculate the new loan balance.
		balance -= principal;

		// Display payment figures
		cout << setw(4) <<  month;
		cout << setw(10) << minterest;
		cout << setw(10) << principal;
		cout << setw(10) << balance << endl;			
	}	 
}
