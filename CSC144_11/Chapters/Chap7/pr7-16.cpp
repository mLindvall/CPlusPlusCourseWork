// This program uses a function that can display the contents
// of an integer array of any size.
#include <iostream.h>

void showValues(int [], int);	// Function prototype

void main(void)
{
	int Set1[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int Set2[4] = {2, 4, 6, 8};
	int Set3[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	showValues(Set1, 8);
	cout << endl;
	showValues(Set2, 4);
	cout << endl;
	showValues(Set3, 12);
}

//*************************************************
// Definition of function showValues.             *
// This function displays the contents of the     *
// array passed into nums. The value passed       *
// into elements is the number of elements in     *
// the nums array.                                *
//*************************************************

void showValues(int nums[], int elements)
{
	for (int index = 0; index < elements; index++)
		cout << nums[index] << " ";
}
