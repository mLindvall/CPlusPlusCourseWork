/*
	Written by:		Michael Lindvall
	Date:			March 6, 2006
	Discription :	Determines the back charges for the amount of ckecks written
	Due Date:		March 6, 2006
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>

void main(void)

{
	double	LessTwenty = .1, LessForty = .08, LessSixty = .06, MoreSixty = .04,
			BegBalance,			//User enters in beginning Balance
			UnderMinBal = 15,	//If account balance is under $400, gets charged $15
			NumOfChecks,		//The number of checks
			TotalCharge,		//Number checks written for the account
			EndBalance,
			Monthly = 10;

	//Prompts for the beginning bank balance
	cout << "Please enter beginning balance: ";
	cin >> BegBalance;
	//Prompts for the number of checks written
	cout << "What is the total number of checks\n";
	cout << "written for this month: ";
	cin >> NumOfChecks;

	//Determines if account has less then the min amount
	if (BegBalance < 400 && BegBalance >= 0)
	{
			EndBalance = BegBalance - UnderMinBal;	//subtracts the $15 for being under $400
			cout << "\n\nAccount charged $15 for being under $400.\n\n";
	}
	else if (BegBalance >= 400)
			EndBalance = BegBalance;		//sets the balance to what users inputed
	
	if (BegBalance < 0)
	{
		cout << "\n\n\t\t\tUrgent Notice\n";
		cout << "\tAccount is overdarwn and a deposit is needed.\n\n\n";
	}
	else
		if (NumOfChecks < 0)
		{
			cout << "\nCan't have negative amount of checks.\n";
			cout << "Please run program again.\n\n";
		}
		else
			if (NumOfChecks < 20)
				TotalCharge = (NumOfChecks * LessTwenty);
			else
				if (NumOfChecks < 40)
					TotalCharge = (NumOfChecks * LessForty);
				else
					if (NumOfChecks < 60)
						TotalCharge = (NumOfChecks * LessSixty);
					else 
						if (NumOfChecks >= 60)
							TotalCharge = (NumOfChecks * MoreSixty);
		
		EndBalance = EndBalance - TotalCharge - Monthly;

		if (BegBalance >= 0 && NumOfChecks >=0)
		{
		//sets the aligment
		cout.precision (2);
		cout.setf(ios::fixed | ios::right | ios::showpoint);
		cout << "\nAccount Beginning Balance:\t$" << setw(9) << BegBalance << endl;
		cout << "Monthly Bank Charge: \t\t$"	<< setw(9) << Monthly << endl;

		//changes showpoint
		cout.precision (0);
		cout.unsetf(ios::showpoint);
		
		cout << "Total Number of Checks: \t" << setw(7) << NumOfChecks << endl;

		//changes it back
		cout.precision (2);
		cout.setf(ios::showpoint);
		cout << "Total Charged for Checks\t$" << setw(9) << TotalCharge << endl;
		cout << "Account Ending Balance: \t$" << setw(9) << EndBalance << endl;
		}		


		cout << "\n\n\t\tCreated by Michael Lindvall\n\n";
		 
}
