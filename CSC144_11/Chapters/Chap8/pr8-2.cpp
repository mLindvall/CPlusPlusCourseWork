// This program demonstrates the binarySearch function, which
// performs a binary search on an integer array.

#include <iostream.h>

// Function prototype
int binarySearch(int [], int, int);

const int arrSize = 20;

void main(void)
{
	int tests[arrSize] = {101, 142, 147, 189, 199, 207, 222,
                         234, 289, 296, 310, 319, 388, 394,
                         417, 429, 447, 521, 536, 600};
	int results, empID;

	cout << "Enter the Employee ID you wish to search for: ";
	cin >> empID;
	results = binarySearch(tests, arrSize, empID);
	if (results == -1)
		cout << "That number does not exist in the array.\n";
	else
	{
		cout << "That ID is found at element " << results;
		cout << " in the array\n";
	}
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of numelems        *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// -1 is returned indicating the value was not in the array.    *
//***************************************************************

int binarySearch(int array[], int numelems, int value)
{
	int first = 0,				// First array element
		last = numelems - 1,	// Last array element
		middle,					// Mid point of search
		position = -1;			// Position of search value
	bool found = false;			// Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;	// Calculate mid point
		if (array[middle] == value)		// If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value)	// If value is in lower half
			last = middle - 1;
 		else
			first = middle + 1;			// If value is in upper half
	}
	return position;
}

