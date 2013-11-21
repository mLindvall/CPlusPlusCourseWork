// This program allows the user to enter a product number
// and then displays the title, description, and price of
// that product.

#include <iostream.h>

const int numProds = 9;		// The number of products produced.
const int titleSize = 26;	// The max size of a title string
const int descSize = 12;	// The max size of a desc. string

// Function prototypes
int getProdNum(void);
int binarySearch(int [], int, int);
void displayProd(char [][titleSize], char [][descSize], float [], int);

void main(void)
{
	int id[numProds] = {914, 915, 916, 917, 918, 919, 920,
	                    921, 922};

	char title[numProds][titleSize] = 
								{	"Six Steps to Leadership",
									"Six Steps to Leadership",
									"The Road to Excellence",
									"Seven Lessons of Quality",
									"Seven Lessons of Quality",
									"Seven Lessons of Quality",
									"Teams are Made, not Born",
									"Leadership for the Future",
									"Leadership for the Future"
								};

   char description[numProds][descSize] = 
								{	"Book", "Audio Cass.", "Video",
									"Book", "Audio Cass.", "Video",
									"Book", "Book", "Audio Cass."
								};

	float prices[numProds] = {12.95, 14.95, 18.95, 16.95, 21.95,
	                          31.95, 14.95, 14.95, 16.95};
	int prodNum, index;
	char again;

	do
	{
		prodNum = getProdNum();
   		index = binarySearch(id, numProds, prodNum);
		if (index == -1)
   			cout << "That product number was not found.\n";
		else
   			displayProd(title, description, prices, index);
		cout << "Would you like to look up another product? (y/n) ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

//***************************************************
// The getProdNum function asks the user to enter a *
// product number. The input is validated, and when *
// a valid number is entered, it is returned.       *
//***************************************************

int getProdNum(void)
{
   int prodNum;

	cout << "Enter the item's product number: ";
   	cin >> prodNum;
	// Validate input
	while (prodNum < 914 || prodNum > 922)
	{
      	cout << "Enter a number in the range 914 - 922\n";
		cin >> prodNum;
	}
	return prodNum;
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of numElems        *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// -1 is returned indicating the value was not in the array.    *
//***************************************************************

int binarySearch(int array[], int numElems, int value)
{
	int first = 0,				// First array element
		last = numElems - 1,	// Last array element
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

//************************************************************
// The displayProd function accepts three arrays and an int. *
// The arrays parameters are expected to hold the title,     *
// description, and prices arrays defined in main. The       *
// ndx parameter holds a subscript. This function displays   *
// the information in each array contained at the subscript. *
//************************************************************

void displayProd(char title[][titleSize], char desc[][descSize], float price[], int ndx)
{
   cout << "Title: " << title[ndx] << endl;
   cout << "Description: " << desc[ndx] << endl;
   cout << "Price: $" << price[ndx] << endl;
}


