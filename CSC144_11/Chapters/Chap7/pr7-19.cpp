// This program demonstrates a function that accepts a
// two-dimensional array as an argument.
#include <iostream.h>
#include <iomanip.h>

void showArray(int [][4], int); // Function prototype

void main(void)
{
	int table1[3][4] = {{1, 2, 3, 4},
	                    {5, 6, 7, 8},
                        {9, 10, 11, 12}};
	int table2[4][4] = {{10, 20, 30, 40},
	                    {50, 60, 70, 80},
                        {90, 100, 110, 120},
						{130, 140, 150, 160}};
	cout << "The contents of table1 are:\n";
	showArray(table1, 3);
	cout << "The contents of table2 are:\n";
	showArray(table2, 4);
}

//******************************************************************
// Function Definition for showArray.                              *
// This function accepts a two-dimensional integer array as an     *
// argument. The array must have four columns. The second          *
// argument, rows, specifies the number of rows in the array. The  *
// function displays the contents of the array.                    *
//******************************************************************

void showArray(int array[][4], int rows)
{
	for (int X = 0; X < rows; X++)
	{
		for (int Y = 0; Y < 4; Y++)
		{
			cout << setw(4) << array[X][Y] << " ";
		}
		cout << endl;
	}
}
