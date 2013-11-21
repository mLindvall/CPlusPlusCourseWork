// This program uses the bubble sort algorithm to sort an 
// array in ascending order.

#include <iostream.h>
#include <fstream.h>

// Function prototypes
void sortArray(int [], int);
void showArray(int [], int);

void main(void)
{
	int values[10000], id, i = 0;
	ifstream inFile;
	//ofstream outFile;

	inFile.open("G:\\CSC144_11\\Data\\random1.txt");
	//outFile.open("G:\\CSC144_11\\Data\\sorted.txt");

	while(!inFile.eof())
	{
		inFile >> id;
		values[i] = id;
		i++;
	}
	
	inFile.close();


	cout << "The unsorted values are:\n";
	selectionSort(values, 10000);
	
//	for (int k=0; k<1000000; k++)
//		for(int j=0; j<5000; j++);

	sortArray(values, 10000);
	cout << "The sorted values are:\n";
	showArray(values, 10000);

	//outFile.close();
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
	ofstream outFile;
	outFile.open("G:\\CSC144_11\\Data\\sort.txt");

	for (int count = 0; count < elems; count++)
		cout << array[count] << " ";
		outFile << array[count] << " ";
	cout << endl;

	outFile.close();
}

