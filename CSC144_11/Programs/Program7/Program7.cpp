/*
	Written by Michael Lindvall
	Date:			March 14, 2006
	Description:	Displays the centigrade temperature and
				fahrenheit temperatures in a table
	Due Date:		March 20, 2006
*/

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main(void)

{
	float Centigrade, Fahrenheit, EndTemp;
	char Run;

	do
	{
	cout << "\nWhat centigrade temperature would\n";
	cout << " you like to start from: ";
	cin >> Centigrade;
	
	do 
	{
		if (Centigrade < -100 || Centigrade > 200)
		{
			cout << "\n\nTry again!\n";
			cout << "Temperature must be between -100 and 200.\n";
			cout << "\nWhat centigrade temperature would\n";
			cout << "you like to start from: ";
			cin >> Centigrade;	
		}
	}
	while (Centigrade < -100 || Centigrade > 200);

	cout << "\nWhat centigrade temperature would\n";
	cout << "you like to end at: ";
	cin >> EndTemp;

	do
	{
		if (EndTemp < -100 || EndTemp > 200)
		{
			cout << "\n\nTry again!\n";
			cout << "Temperature must be between -100 and 200.\n";
			cout << "\nWhat centigrade temperature would\n";
			cout << "you like to end at: ";
			cin >> EndTemp;	
		}
		else if ( EndTemp <= Centigrade)
		{
			cout << "\n\nTry again!\n";
			cout << "Your ending number can't be less\n";
			cout << "then your beginning number.\n";
			cout << "\nWhat centigrade temperature would\n";
			cout << "you like to end at: ";
			cin >> EndTemp;	
		}
	}
	while (Centigrade < -100 || Centigrade > 200 || EndTemp < Centigrade);
	
	cout << "------------------------------------------------\n";
	cout << "|\tCentigrade\t|\tFahrenheit\t|\n";
	cout << "|\tTemperature\t|\tTemperature\t|\n";
	cout << " -----------------------------------------------\n";


	float count;

	count = Centigrade;
	for (count = count ; count <= EndTemp; count++)
	{
		

		Fahrenheit = ( 9 / 5 ) * count + 32;
		
		cout.setf(ios::right);
				
		cout << "|\t" << setw(7) << count << "\t\t|\t" << setw(7) << Fahrenheit << "\t\t|\n";
	}
	

	cout << " -----------------------------------------------\n";
	
	cout << "\n\nWould you like to run program again?\n";
	cout << "\tFor YES hit 'Y', for NO hit any other key: ";
	cin >> Run;
		
	} 
	while (Run == 'Y' || Run == 'y');
	
	cout << "\n\t\t\tThank You!!!\n";
	cout << "\t\t    Have a Great Day!!!!\n";
		
	cout << "\n\n\tCreated by Michael Lindvall\n\n";
}


