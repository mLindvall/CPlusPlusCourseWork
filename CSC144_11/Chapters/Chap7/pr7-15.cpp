// This program demonstrates an array being passed to a function.

#include <iostream.h>

void showValues(int []);	// Function prototype

void main(void)
{
	int set1[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int set2[8] = {2, 4, 6, 8, 10, 12, 14, 16};

	showValues(set1);
	cout << endl;
	showValues(set2);
}

//*************************************************
// Definition of function showValue.              *
// This function accepts an array of 8 integers.  *
// as its argument. The contents of the array     * 
// is displayed.                                  *
//*************************************************

void showValues(int nums[])
{
	for (int index = 0; index < 8; index++)
		cout << nums[index] << " ";
}
