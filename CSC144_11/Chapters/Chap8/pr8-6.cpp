// This program produces a sales report for the Demetris
// Leadership Center.

#include <iostream.h>
#include <iomanip.h>

// Function prototypes
void calcSales(int [], float [], float [], int);
void showOrder(float [], int [], int);
void dualSort(int [], float [], int);
void showTotals(float [], int [], int);

// numProds is the number of products produced.
const int numProds = 9;

void main(void)
{
	int id[numProds] = {914, 915, 916, 917, 918, 919, 920,
   	                    921, 922};
	int units[numProds] = {842, 416, 127, 514, 437, 269, 97,
   	                       492, 212};
	float prices[numProds] = {12.95, 14.95, 18.95, 16.95, 21.95,
   	                          31.95, 14.95, 14.95, 16.95};
	float sales[numProds];

	calcSales(units, prices, sales, numProds);
	dualSort(id, sales, numProds);
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	showOrder(sales, id, numProds);
	showTotals(sales, units, numProds);
}

//****************************************************************
// Definition of calcSales. Accepts units, prices, and sales     *
// arrays as arguments. The size of these arrays is passed       *
// into the num parameter. This function calculates each         *
// product's sales by multiplying its units sold by each unit's  *
// price. The result is stored in the sales array.               *
//****************************************************************

void calcSales(int units[], float prices[], float sales[],
               int num)
{
	for (int index = 0; index < num; index++)
		sales[index] = units[index] * prices[index];
}

//***************************************************************
// Definition of function dualSort. Accepts id and sales arrays *
// as arguments. The size of these arrays is passed into elems. *
// This function performs a descending order selection sort on  *
// the sales array. The elements of the id array are exchanged  *
// identically as those of the sales array. elems is the number *
// of elements in each array.                                   *
//***************************************************************

void dualSort(int id[], float sales[], int elems)
{
   int startScan, maxIndex, tempid;
   float maxValue;

	for (startScan = 0; startScan < (elems - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = sales[startScan];
		tempid = id[startScan];
		for(int index = startScan + 1; index < elems; index++)
		{
			if (sales[index] > maxValue)
			{
				maxValue = sales[index];
				tempid = id[index];
				maxIndex = index;
			}
      }
	  sales[maxIndex] = sales[startScan];
	  id[maxIndex] = id[startScan];
	  sales[startScan] = maxValue;
	  id[startScan] = tempid;
   }
}

//****************************************************************
// Definition of showOrder function. Accepts sales and id arrays *
// as arguments. The size of these arrays is passed into num.    *
// The function first displays a heading, then the sorted list   *
// of product numbers and sales.                                 *
//****************************************************************

void showOrder(float sales[], int id[], int num)
{
	cout << "Product number\tsales\n";
	cout << "----------------------------------\n";
	for (int index = 0; index < num; index++)
	{
		cout << id[index] << "\t\t$";
		cout << setw(8) << sales[index] << endl;
	}
	cout << endl;
}

//*****************************************************************
// Definition of showTotals function. Accepts sales and id arrays *
// as arguments. The size of these arrays is passed into num.     *
// The function first calculates the total units (of all          *
// products) sold and the total sales. It then displays these     *
// amounts.                                                       *
//*****************************************************************

void showTotals(float sales[], int units[], int num)
{
	int totalUnits = 0;
	float totalSales = 0.0;
	for (int index = 0; index < num; index++)
	{
		totalUnits += units[index];
		totalSales += sales[index];
	}
	cout << "Total units Sold:  " << totalUnits << endl;
	cout << "Total sales:      $" << totalSales << endl;
}

