

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main(void)
{

	char line[80];
	int index;

	cout << "Please type any sentance: \n";
	cin.getline(line, 80);


	/*for (index = 0; index < 80; index++)
	{
		if (line[index] > 96 && line[index] <= 122)
		{
			line[index] = line[index] - 32;
		}
	}*/

	for (index = 0; index < 80; index++)
	{
		if (index == 0)
		{
			if (line[index] > 96 && line[index] <= 122)
			{
				line[index] = line[index] - 32;
			}
		}
		else if (line[index] < 32 || line[index] > 32)
			line[index] = line[index];
		else if (line[index] = 32)
		{
			
			if (line[index + 1] > 96 && line[index] <= 122)
			{
				line[index +1 ] = line[index + 1] - 32;
			}
		}
	
	}


	cout << line << endl;
	
	
}
