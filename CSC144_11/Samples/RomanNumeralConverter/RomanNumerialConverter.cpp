/*
	Written by Michael Lindvall
	Program number 2 on page 246
	Feb. 27, 06
*/

#include <iostream.h>
#include <iomanip.h>

void main(void)


{
	int num1;

	cout << "Please enter a number between 1 and 10: ";
	cin >> num1;

/*	if (num1 > 10)
		{	cout << "\nPlease run program again and choose\n";
			cout << "a number between 1 and 10\n\n";
		}
	else
		if (num1 < 1)
		{	cout << "\nPlease run program again and choose\n";
			cout << "a number between 1 and 10\n\n";
		}
		else
			if (num1==1)
				cout << "\nRoman Numerial " << num1 << " is I\n\n";
			else
				if (num1==2)
					cout << "\nRoman Numerial " << num1 << " is II\n\n";
				else
					if (num1==3)
						cout << "\nRoman Numerial " << num1 << " is III\n\n";
					else
						if (num1==4)
							cout << "\nRoman Numerial " << num1 << " is IV\n\n";
						else
							if (num1==5)
								cout << "\nRoman Numerial " << num1 << " is V\n\n";
							else
								if (num1==6)
									cout << "\nRoman Numerial " << num1 << " is VI\n\n";
								else
									if (num1==7)
										cout << "\nRoman Numerial " << num1 << " is VII\n\n";
									else
										if (num1==8)
											cout << "\nRoman Numerial " << num1 << " is VIII\n\n";
										else
											if (num1==9)
												cout << "\nRoman Numerial " << num1 << " is IX\n\n";
											else
												if (num1==10)
													cout << "\nRoman Numerial " << num1 << " is X\n\n";
*/

	if (num1 < 1 || num1 > 10)
		cout << "\n" << num1 << " is not a valid number.  Please run program again.\n";
	else
	{
		cout << "\nThe Roman numeral for " << num1 << " is " ;
		switch (num1)
		{
			case 1: cout << "I\n";
				break;
			case 2: cout << "II\n";
				break;
			case 3: cout << "III\n";
				break;
			case 4: cout << "IV\n";
				break;
			case 5: cout << "V\n";
				break;
			case 6: cout << "VI\n";
				break;
			case 7: cout << "VII\n";
				break;
			case 8: cout << "VIII\n";
				break;
			case 9: cout << "IX\n";
				break;
			case 10: cout << "X\n";
				break;
		}
	}

	cout <<"\nCreated by Michael Lindvall\n";
}