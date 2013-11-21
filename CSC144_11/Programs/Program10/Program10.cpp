/*
	Programmer:		Michael Lindvall
	Date:			April 24, 2006
	Description:	Rainfall Statistics
					the user enters in the total rainfall for six months.
					the program then calculates the total rainfall for the
					six months.
	Due Date:		April 26, 2006
	Folder:			CSC144_11\Programms
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>

//Fucntion Prototype
void getTotal(float []);
float getAverage(float []);
float getLargest(float []);
float getSmallest(float []);


void main(void)
{
	float rainfall[6], Average, Largest, Smallest;
	
	getTotal(rainfall);
	Average = getAverage(rainfall);
	Largest = getLargest(rainfall);
	Smallest = getSmallest(rainfall);
	
	float Total=0;
	for (int i=0; i < 6; i++)
	{
		Total+=rainfall[i];
	}

	cout << "Total rainfall is: " << Total << endl;
}



// ********************************************************************************
// getTotal Description
// To get the total rainfall for six months
// The user will be promted to enter in six totals for the six different months
// ********************************************************************************
void getTotal(float rainfall[6])
{
	for (int i = 0; i < 6 ; i++)
	{
		do
		{
			cout << "Please enter total rainfall for month #" << i + 1 << ": ";
			cin >> rainfall[i];
			if (rainfall[i] < 0)
			{
				cout << "Rainfall must be great then zero.\n";
				cout << "Please try again.\n\n";
			}
		}
		while (rainfall[i] < 0);
	}
}
// ******************************************************************************
// getAverage Description
// The data that the user keyed in will be used to compute the average 
// amount of rain over the six month span they entered data in for
// ******************************************************************************
float getAverage(float rainfall[])
{
	float Average=0;
	
	for (int i =0; i < 6; i++)
	{
		Average += rainfall[i];
	}
	
	Average = Average/i;
	cout << "\nThe average is " << Average << endl;
	return Average;
}
// *****************************************************************************
// getLargest Description
// This function will find the largest number out of the data that was
// entered in by the user.  It will then return that number to the main function
// *****************************************************************************
float getLargest(float rainfall[])
{
	float largest;
	largest = rainfall[0];
	for (int i = 1; i < 6 ; i++)
	{
		if (rainfall[i] > largest)
			largest = rainfall[i];
	}
	cout << "The largest value is: " << largest << endl;
	return largest;
}
// *****************************************************************************
// getSmallest Decription
// This function will find the month with the smallest amount of rainfall
// *****************************************************************************
float getSmallest(float rainfall[])
{
	float smallest;
	smallest = rainfall[0];
	for (int i = 1; i < 6 ; i++)
	{
		if (rainfall[i] < smallest)
			smallest = rainfall[i];
	}
	cout << "The smallest value is: " << smallest << endl;
	return smallest;
}