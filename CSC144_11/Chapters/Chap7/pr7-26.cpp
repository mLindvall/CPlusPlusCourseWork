// This program demosntrates the vector size member function.

#include <iostream.h>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

void main(void)
{
	vector<int> values;

	values.push_back(1);
	values.push_back(2);
	values.push_back(3);
	cout << "The size of values is " << values.size() << endl;

	// Remove a value from the vector
	cout << "Popping a value from the vector...\n";
	values.pop_back();
	cout << "The size of values is now " << values.size() << endl;

	// Now remove another value from the vector
	cout << "Popping a value from the vector...\n";
	values.pop_back();
	cout << "The size of values is now " << values.size() << endl;

	// Remove the last value from the vector
	cout << "Popping a value from the vector...\n";
	values.pop_back();
	cout << "The size of values is now " << values.size() << endl;
}

