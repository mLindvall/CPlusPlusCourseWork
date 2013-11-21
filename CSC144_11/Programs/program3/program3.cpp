/*
	Programmer:		Michael Lidnvall
	Date:			Feb. 14, 2006
	Description:	Box Office:
					Figures the gross box office profit,
					the net box office profit,and the
					amount paid to the movie company.
	Due Date:		Feb. 15, 2006
	Pragram #:		Program3
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>
void main(void)

{
	char MovieName[31];		//The name of the movie
	float Adult, Child,
		APrice=6,			//Price for an Adult
		CPrice=3,			//Price for a Child
		
	float GrossProfits, NetBox, MovieCo; 
	double	MovieTheater=0.2;	//The percentage the movie threater 
								//keeps which is 20%

	//Get information about the movie
	cout << "\n\nName of the movie: ";
	cin.getline(MovieName,31);
	cout <<"The number of tickets sold for:\n";
	cout <<"			Adults: ";
	cin >> Adult;
	cout <<"			 Child: ";
	cin >> Child;

	//Calculations
	GrossProfits=float((Adult*APrice)+(Child*CPrice));	//(number of adults*6)+(number of child*3)
	NetBox=GrossProfits*MovieTheater;					//Figures the 20% the movie threater makes
	MovieCo=GrossProfits-NetBox;						//Figures what the movie co. makes off
														//the movie

	//Displays the results	
	cout <<"\n\nMovie Name:\t\t\t\"" << MovieName <<"\"" << endl;

	//Set the cout's ios flag
	cout.setf(ios::right);

	//show the number of adult & child tickets
	cout <<"Adult Tickets Sold:\t\t " << setw(5) << Adult << endl;
	cout <<"Child Tickets Sold:\t\t " << setw(5) << Child << endl;
	
	//Set cout's ios flags and precision
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint | ios::right);

	//show the dollar amounts that were made off the movie
	cout <<"Gross Box Office Profit:\t$"<< setw(8) << GrossProfits << endl;
	cout <<"Net Box Office Profit:\t\t$" << setw(8) << NetBox << endl;
	cout <<"Amount Paid to MovieCo.:\t$" << setw(8) << MovieCo << endl;
	cout << "\n\n\nCreated by Michael Lindvall\n";
}

