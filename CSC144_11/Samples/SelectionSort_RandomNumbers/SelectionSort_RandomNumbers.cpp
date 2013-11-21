// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream.h>
#include <fstream.h>

// Function prototypes
void selectionSort(int [], int);
void showArray(int [], int);

void main(void)
{
	int values[10000], id, i = 0;
	ifstream inFile;
	inFile.open("G:\\CSC144_11\\Data\\random1.txt");
	while(!inFile.eof())
	{
		inFile >> id;
		values[i] = id;
		i++;
	}
	
	inFile.close();


	cout << "The unsorted values are:\n";
	showArray(values, 10000);
	
//	for (int k=0; k<1000000; k++)
	//	for(int j=0; j<5000; j++);

	selectionSort(values, 10000);
	cout << "The sorted values are:\n";
	showArray(values, 10000);
}

//**************************************************************
// Definition of function SelectionSort                        *
// This function performs an ascending order selection sort on *
// array. elems is the number of elements in the array.		   *
//**************************************************************

void selectionSort(int array[], int elems)
{
	int startScan, minIndex, minValue;

	for (startScan = 0; startScan < (elems - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for(int index = startScan + 1; index < elems; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
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

