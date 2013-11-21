// The switch statement in this program uses the "fallthrough"
// feature to catch both upper and lowercase letters entered
// by the user.

#include <iostream.h>

void main(void)
{
	char feedGrade;

	cout << "Our dog food is available in three grades:\n";
	cout << "A, B, and C. Which do you want pricing for? ";
	cin >> feedGrade;
	switch(feedGrade)
	{
		case 'a':
		case 'A':	cout << "30 cents per pound.\n";
					break;
		case 'b':
		case 'B':	cout << "20 cents per pound.\n";
					break;
		case 'c':
		case 'C':	cout << "15 cents per pound.\n";
					break;
		default:	cout << "That is an invalid choice.\n";
	}
}
