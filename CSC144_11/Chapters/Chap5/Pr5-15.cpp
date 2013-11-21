// This program calculates the charges for video rentals.
// Every third video is free.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	int videoCount = 1, numVideos;
	float total = 0.0;
	char current;
	
	cout << "How many videos are being rented? ";
	cin >> numVideos;
	do
	{
		if ((videoCount % 3) == 0)
		{
			cout << "Video #" << videoCount << " is free!\n";
			continue;
		}
		cout << "Is video #" << videoCount;
		cout << " a current release? (Y/N)";
		cin >> current;
		if (current == 'Y' || current == 'y')
                        total += 3.50;
		else
                        total += 2.50;
	} while (videoCount++ < numVideos);
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The total is $" << total << endl;
}
