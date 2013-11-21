// This program allows the user to enter two sets of numbers.
// It finds the intersection of the two sets (which is the
// set of numbers contained in both sets). The intersecting
// values are displayed.

#include <iostream.h>

// Function Prototypes
void getArrays(int [], int []);
int findIntersection(int [], int [], int []);
void displayIntValues(int [], int);

void main(void)
{
	int set1[10],			// First set
		set2[10],			// Second set
		intersection[10],	// Set containing intersection values
		numIntValues;		// number of values in intersection

	getArrays(set1, set2);
	numIntValues = findIntersection(set1, set2, intersection);
	displayIntValues(intersection, numIntValues);
}

//****************************************************
// The following function accepts two int arrays as  *
// arguments. It prompts the user to enter 10 values *
// for each array.                                   *
//****************************************************

void getArrays(int first[], int second[])
{
	// Get values for first array.
	cout << "Enter 10 values for the first set:\n";
	for (int ndx = 0; ndx < 10; ndx++)
		cin >> first[ndx];
	// Get values for second array.
	cout << "Enter 10 values for the second set:\n";
	for (ndx = 0; ndx < 10; ndx++)
		cin >> second[ndx];
}


//***********************************************************
// The following functon accepts three arrays as arguments. *
// The first two arrays (first and second) are scanned,     *
// and all values appearing in both are stored in the       *
// third array (intersect). The number of values found      *
// in both arrays is returned.                              *
//***********************************************************

int findIntersection(int first[], int second[], int intersect[])
{
	int intCount = 0, ndx3 = 0;

	for (int ndx1 = 0; ndx1 < 10; ndx1++)
	{
		for(int ndx2 = 0; ndx2 < 10; ndx2++)
		{
			if (first[ndx1] == second[ndx2])
			{
				intersect[ndx3] = first[ndx1];
				ndx3++;
				intCount++;
			}
		}
	}
	return intCount;
}

//*******************************************************
// The following function acepts two arguments: an      *
// array of ints, and an int. The second argument is    *
// the number of valid elements contained in the array. *
// These values are displayed, if there are any.        *
//*******************************************************

void displayIntValues(int intersect[], int num)
{
	if (!num)
		cout << "There are no intersecting values.\n";
	else
	{
		cout << "Here is a list of the intersecting values:\n";
		for (int ndx = 0; ndx < num; ndx++)
			cout << intersect[ndx] << " ";
		cout << endl;
	}
}

