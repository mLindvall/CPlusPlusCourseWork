// This program uses a function that doubles the contents of
// the elements within an array.

#include <iostream.h>

void doubleArray(int [], int);	// Function prototype
const int arraySize = 12;

void main(void)
{
	int set[arraySize] = {1, 2, 3, 4, 5, 6,
	                      7, 8, 9, 10, 11, 12};
	cout << "The arrays values are:\n";
	for (int index = 0; index < arraySize; index++)
		cout << set[index] << " ";
	cout << endl;
	doubleArray(set, arraySize);
	cout << "After calling doubleArray, the values are:\n";
	for (index = 0; index < arraySize; index++)
		cout << set[index] << " ";
	cout << endl;
}

//*****************************************************
// Definition of function doubleArray.                *
// This function doubles the value of each element    *
// in the array passed into nums.                     *
// The value passed into size is the number of        *
// elements in the nums array.                        *
//*****************************************************

void doubleArray(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		nums[index] *= 2;
}
