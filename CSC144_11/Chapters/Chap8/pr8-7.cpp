// This program produces a sales report for the Demetris
// Leadership Center. This version of the program uses
// STL vectors instead of arrays.

#include <iostream.h>
#include <iomanip.h>
#include <vector>		// Needed to declare vectors
using namespace std;	// vectors are in the std namespace

// Function prototypes
void initVectors(vector<int> &, vector<int> &, vector<float> &);
void calcSales(vector<int>, vector<float>, vector<float> &);
void showOrder(vector<float>, vector<int>);
void dualSort(vector<int> &, vector<float> &);
void showTotals(vector<float>, vector<int>);

void main(void)
{
	vector<int> id;
	vector<int> units;
	vector<float> prices;
	vector<float> sales;

	// Must provide an initialization routine.
	initVectors(id, units, prices);

	// Calculate and sort the sales totals,
	// and display the results.
	calcSales(units, prices, sales);
	dualSort(id, sales);
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	showOrder(sales, id);
	showTotals(sales, units);
}

//******************************************************************
// Definition of initVectors. Accepts id, units, and prices        *
// vectors as reference arguments. This function initializes each  *
// vector to a set of starting values.                             *
//******************************************************************

void initVectors(vector<int> &id, vector<int> &units,
				 vector<float> &prices)
{
	// Initialize the id vector
	for (int value = 914; value <= 922; value++)
		id.push_back(value);

	// Initialize the units vector
	units.push_back(842);
	units.push_back(416);
	units.push_back(127);
	units.push_back(514);
	units.push_back(437);
	units.push_back(269);
	units.push_back(97);
	units.push_back(492);
	units.push_back(212);

	// Initialize the prices vector
	prices.push_back(12.95);
	prices.push_back(14.95);
	prices.push_back(18.95);
	prices.push_back(16.95);
	prices.push_back(21.95);
	prices.push_back(31.95);
	prices.push_back(14.95);
	prices.push_back(14.95);
	prices.push_back(16.95);
}


//****************************************************************
// Definition of calcSales. Accepts units, prices, and sales     *
// vectors as arguments. The sales vector is passed into a       *
// reference parameter. This function calculates each product's  *
// sales by multiplying its units sold by each unit's price. The *
// result is stored in the sales vector.                         *
//****************************************************************

void calcSales(vector<int> units, vector<float> prices, 
			   vector<float> &sales)
{
	for (int index = 0; index < units.size(); index++)
		sales.push_back(units[index] * prices[index]);
}

//****************************************************************
// Definition of function dualSort. Accepts id and sales vectors *
// as reference arguments. This function performs a descending   *
// order selection sort on the sales vector. The elements of the *
// id vector are exchanged identically as those of the sales     *
// vector.                                                       *
//****************************************************************

void dualSort(vector<int> &id, vector<float> &sales)
{
	int startScan, maxIndex, tempid, elems;
	float maxValue;

	elems = id.size();
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

//*****************************************************************
// Definition of showOrder function. Accepts sales and id vectors *
// as arguments. The function first displays a heading, then the  *
// sorted list of product numbers and sales.                      *
//*****************************************************************

void showOrder(vector<float> sales, vector<int> id)
{
	cout << "Product number\tsales\n";
	cout << "----------------------------------\n";
	for (int index = 0; index < id.size(); index++)
	{
		cout << id[index] << "\t\t$";
		cout << setw(8) << sales[index] << endl;
	}
	cout << endl;
}

//*******************************************************************
// Definition of showTotals function. Accepts sales and id vectors  *
// as arguments. The function first calculates the total units (of  *
// all products) sold and the total sales. It then displays these   *
// amounts.                                                         *
//*******************************************************************

void showTotals(vector<float> sales, vector<int> units)
{
	int totalUnits = 0;
	float totalSales = 0.0;

	for (int index = 0; index < units.size(); index++)
	{
		totalUnits += units[index];
		totalSales += sales[index];
	}
	cout << "Total units Sold:  " << totalUnits << endl;
	cout << "Total sales:      $" << totalSales << endl;
}

