/*
	Written by Michael Lindvall
	Program Distance Travel on page 303
	Date March 13, 2006
*/

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main(void)

{
	float Time, Speed, Distance;
	int Count = 1, Run;

	do
	{

	cout << "What is the speed of the vehicle in mph? ";
	cin >> Speed;

	do
	{
		if (Speed < 0)
		{
			cout << "\nPlease enter a positive number for speed\n\n";
			cout << "What is the speed of the vehicle in mph? ";
			cin >> Speed;
		}
	}
	while (Speed <= 0);
	cout << "How many hours has it traveled? ";
	cin >> Time;
	do
	{		
		if (Time < 1)
		{
		cout << "\nTime must be 1 hour or greater.\n\n";
		cout << "How many hours has it traveled? ";
		cin >> Time;
		}
	}
	while (Time <1);

	cout << "\nHour\tDistance Traveled\n";
	cout << "-----------------------------------\n";

	while (Count <= Time)
	{
		Distance = Count * Speed;
		cout << "   " << Count << "\t\t" << setw(7) << Distance << endl;
	
		Count++;
	}
	
		cout << "-----------------------------------\n";

	
		do 
		{
			cout << "\nRun again?\n";
			cout << "\tEnter '1' for YES:\n";
			cout << "\tEnter '2' for NO: ";
			cin >> Run;
		}
		while (Run !=1 || Run !=2);
	}
	while (Run =1);
}