// Programmer Michael Lindvall

#include <iostream.h>
#include <math.h>

//Fucntion Prototype
void getValues(int &, int &, int &, int &, int &);
int findLowest(int &, int &, int &, int &, int &);
void calcAverage(int &, int &, int &, int &, int &);

void main(void)
{
	int test1, test2, test3, test4, test5;

	getValues(test1, test2, test3, test4, test5);
	calcAverage(test1, test2, test3, test4, test5);
}

/*
************************************************************
	Function getValues uses five reference parameters.
	The user is asked to enter five test scores, which
	are stored in the parameters
************************************************************
*/
void getValues(int &val1, int &val2, int &val3, int &val4, int &val5)
{
	cout << "\nPlease enter in the test scores:\n";
	do
	{
		cout << "\tTest #1: ";
		cin >> val1;
		if (val1 <0 || val1 > 100)
			cout << "Enter a score in the range of 0 - 100.\n";
	}
	while (val1 < 0 || val1 > 100);
	
	do
	{
		cout << "\tTest #2: ";
		cin >> val2;
		if (val2 <0 || val2 > 100)
			cout << "Enter a score in the range of 0 - 100.\n";
	}
	while (val2 < 0 || val2 > 100);

	do
	{
		cout << "\tTest #3: ";
		cin >> val3;
		if (val3 <0 || val3 > 100)
			cout << "Enter a score in the range of 0 - 100.\n";
	}
	while (val3 < 0 || val3 > 100);

	do
	{
		cout << "\tTest #4: ";
		cin >> val4;
		if (val4 <0 || val4 > 100)
			cout << "Enter a score in the range of 0 - 100.\n";
	}
	while (val4 < 0 || val4 > 100);

	do
	{
		cout << "\tTest #5: ";
		cin >> val5;
		if (val5 <0 || val5 > 100)
			cout << "Enter a score in the range of 0 - 100.\n";
	}
	while (val5 < 0 || val5 > 100);

}

/*
**************************************************************
	Function calcAverage accepts five test scores as arguemtns.
	it cals the function findLowest to determine th lowest score.  The average
	of the four highest scores is then calculated and returned.
*******************************************************************************
*/
void calcAverage(int &s1, int &s2, int &s3, int &s4, int &s5)
{
	int sum, lowScore;
	float average;

	lowScore = findLowest(s1, s2, s3, s4, s5);
	sum = s1 + s2 + s3 + s4 + s5 - lowScore;
	average = float(sum) / 4;
	cout << "\nAfter dropping the lowest test score, the test average is " << average << endl;
}

/*
***************************************************************
	Function findLowest accecptcs fice test scores as arguments.
	The Lowest of the five is returned
***************************************************************
*/
int findLowest(int &val1, int &val2, int &val3, int &val4, int &val5)
{
	int Lowest;
	Lowest = val1;

	if (val2 < Lowest)
		Lowest = val2;
	if (val3 < Lowest)
		Lowest = val3;
	if (val4 < Lowest)
		Lowest = val4;
	if (val5 < Lowest)
		Lowest = val5;

	return Lowest;
}



	