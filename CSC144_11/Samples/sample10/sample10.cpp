/*	Programmer:	Michael Lindvall
	Date:		Feb. 8, 2006
	Description:Calculates a car's gas mileage
*/

#include <iostream.h>
#include <math.h>
void main(void)

{
	double	Gallons,		//Number of gallons the tank can hold
			TotalMiles,		//Total number of miles car can drive on full tank
			MPG;			//Miles the car can drive on one gallon
	
	cout<<"How many gallons can your gas tank hold when full? ";
	cin >> Gallons;
	cout<<"\n\nWhat is the total amount of miles that can be driven on a full tank of gas? ";
	cin>> TotalMiles;

	MPG=TotalMiles/Gallons;

	cout<<"\n\n\tYou can drive a total of " <<MPG<< " miles on one gallon of gas!\n\n";
	cout<<"Created by Michael Lindvall\n";
}