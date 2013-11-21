/*
	Programmer:		Michael Lidnvall
	Date:			April 12, 2006
	Description:	Paint Job Estimator
					Helps determine the cost of a paint job, 
					charges $18/hour.
	Due Date:		April 12, 2006
*/


#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include <stdlib.h>


//Fucntion Prototype
int getNumberofRooms();
float getPaintPrice();
float getWallSquareFeet(int);
int numberOfGallons(float);
float laborHours(float);
void displayCost(int, float, float, int);


void main(void)

{
	char Run;
	int Rooms, Gallons;
	float PaintPrice, SquareFeet, Hours;
	
	cout << "\n\n\t----------------------------------------------------\n";
	cout << "    \t|                Paint Job Estimator               |\n";
	cout <<     "\t----------------------------------------------------\n";
	do
	{
		cout << "\n\n";
		Rooms = getNumberofRooms();	//Get the number of rooms
		PaintPrice = getPaintPrice(); //Get the price of the paint			
		
		SquareFeet = getWallSquareFeet(Rooms); //Figure out the total sqaure footage						
				
		Gallons = numberOfGallons(SquareFeet); //Figure out the total amount of gallons needed
		
		Hours = laborHours(SquareFeet); //Figure out the total amount of labor hours
		
		displayCost(Gallons, PaintPrice, Hours, Rooms); //Display all of the totals
	
		//The following asks if you would like to run the program again
		//*************************************************************
		cout << "\n\nWould you like to run program again?\n";
		cout << "\tFor YES hit 'Y', for NO hit any other key: ";
		cin >> Run;		
	} 
	while (Run == 'Y' || Run == 'y');

	cout << "\n\n\t\t\tThank You!!!!!!\n";
	cout << "\n\nCreated by Michael Lindvall\n\n";
	
}
//**********************************************
// getNumberofRooms Description
// Asks for the number of rooms to be painted
// Number of rooms cannot be less the 1 else 
// the user will be asked to re-enter the amount
// of rooms
//**********************************************
int getNumberofRooms(void)
{
	int Num;
	do
	{
		cout << "How many rooms will be painted: ";
		cin >> Num;
		if (Num < 1)
		{
			cout << "\nNumber of rooms must be equal to 1 or greater.\n";
			cout << "Please try again\n\n";
		}
	}
	while (Num < 1);
	return Num;
}
//****************************************************
// getPaintPrice Description
// Asks for the price of the paint to be used
// Paint Price cannot be less then $10 and the user
// will be asked to re-enter the price.
//****************************************************
float getPaintPrice(void)
{
	float Price;
	do
	{
		cout << "What is the price of the paint: ";
		cin >> Price;
		if (Price < 10)
		{
			cout << "\nThe price of the paint cannot be less then $10.\n";
			cout << "Please try again.\n\n";
		}
	}
	while (Price < 10 );	
	return Price;
}
//****************************************************
// getWallSquareFeet Description
// Asks the user to enter in the sqaure footage for 
// each room.
//****************************************************
float getWallSquareFeet(int Rooms)
{
	float Feet;
	float Total = 0;
	for (int count=1; count <= Rooms; count ++)
	{
		cout << "\nPlease enter the following for room # " << count << endl;
	do
	{
		cout << "\tRoom's size in square feet: ";
		cin >> Feet;
		if (Feet <= 0 )
		{
			cout << "\nThe room's square footage cannot be\n";
			cout << "less then or equal to zero.\n";
			cout << "Please try again.\n\n";
		}
	}
	while (Feet <= 0 );
	Total += Feet;
	}
	return Total;
}
//**************************************************
// numberOfGallons Description
// This is figure out the amount of gallons need to
// paint all the rooms
//**************************************************
int numberOfGallons(float Feet)
{
	float IGal, Remainder;
	float FGal;
	FGal = Feet / 115;
	IGal = static_cast<int>(FGal);
	Remainder = FGal-static_cast<int>(FGal);
	if (Remainder > 0)
		IGal += 1;	
	return IGal;
}
//*************************************************
// laborHours Description
// This function will determine the amount of hours
// it will take to paint all the rooms
//*************************************************
float laborHours(float Feet)
{	
	float Hours;
	Hours = Feet/115;
	return Hours;
}
//*************************************************
// displayCost Description
// This function will display the cost of painting
// the room, the cost of paint, and the labor cost
//*************************************************
void displayCost(int Gallons, float pPrice, float Hours , int Rooms)
{
	float Labor, Total, Price;

	Price = float(Gallons) * pPrice;
	Labor = Hours * 18;
	Total =	Labor + Price; 

	cout << "\n\n\t----------------------------------------------------\n";
	cout << "    \t|                 Paint Job Totals                 |\n";
	cout <<     "\t----------------------------------------------------\n";

	//Format the output
	cout.precision (2);
	cout.setf(ios::fixed | ios::right | ios::showpoint);
	
	cout << "\n\n";
	cout << "\tNumber of Rooms to be painted:\t " << setw(4) << Rooms << endl;
	//Displays info dealing with paint
	cout << "\tNumber of gallons of paint:\t " << setw(4) << Gallons << endl;
	cout << "\tCost of paint @ $"<< pPrice << "\t\t$" << setw(7) << Price << endl;
	cout << "\t\t\t\t\t-----------\n";
	//Displays info dealing with Labor
	cout << "\tHours of labor:\t\t\t " << setw(7) << Hours << endl;
	cout << "\tLabor charges @ $18/hr\t\t$" << setw(7) << Labor << endl;

	cout << "\t\t\t\t\t===========\n";
	//Displays the total cost of paint job
	cout << "\tTotatl cost of paint job:\t$" << setw(7) << Total << endl;
}