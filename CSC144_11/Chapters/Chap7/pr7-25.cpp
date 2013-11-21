// This program demonstrates the vector size 
// member function.

#include <iostream.h>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

void main(void)
{
	vector<int> values;

	for (int count = 0; count < 7; count++)
		values.push_back(count * 2);
	showValues(values);
}

//**************************************************
// Definition of function showValues.              *
// This function accepts an int vector as its      *
// argument. The value of each of the vector's     *
// elements is displayed.                          *
//**************************************************

void showValues(vector<int> vect)
{
	for (int count = 0; count < vect.size(); count++)
		cout << vect[count] << endl;
}
