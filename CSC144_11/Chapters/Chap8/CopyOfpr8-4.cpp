// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream.h>

// Function prototypes
void sortArray(int [], int);
void showArray(int [], int);

void main(void)
{
	int values[6] = {7, 2, 3, 8, 9, 1};

	cout << "The unsorted values are:\n";
	showArray(values, 6);
	sortArray(values, 6);
	cout << "The sorted values are:\n";
	showArray(values, 6);
}

//***********************************************************
// Definition of function sortArray.                        *
// This function performs an ascending order bubble sort on *
// array. elems is the number of elements in the array.     *
//***********************************************************

void sortArray(int array[], int elems)
{
	int swap, temp;

	do
	{
		swap = 0;
		for (int count = 0; count < (elems - 1); count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = 1;
			}
		}
   } while (swap != 0);
}

//*************************************************************
// Definition of function showArray.                          *
// This function displays the contents of array. elems is the *
// number of elements.                                        *
//*************************************************************

void showArray(int array[], int elems)
{
	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
	cout << endl;
}


