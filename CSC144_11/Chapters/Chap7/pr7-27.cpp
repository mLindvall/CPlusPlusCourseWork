// This program demonstrates the vector clear member function.

#include <iostream.h>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

void main(void)
{
	vector<int> values(100);

	cout << "The values vector has "
		 << values.size() << " elements.\n";
	cout << "I will call the clear member function...\n";
	values.clear();
	cout << "Now, the values vector has "
		 << values.size() << " elements.\n";
}

