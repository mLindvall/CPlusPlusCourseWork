/*	Programmer:	Michael Lindvall
	Date:		Feb. 8, 2006
	Description:	Display the test scores of four people as well as the average.
	Due Date:	Feb. 8, 2006
	Program #:	Program # 2	
*/

#include <iostream.h>
void main(void)

{
	int test1, test2, test3, test4, test5, average;
	test1=89;
	test2=95;
	test3=74;
	test4=80;
	test5=100;

	cout << "\nThe test score for person A is " <<test1<< endl;
	cout << "The test score for person B is " <<test2<< endl;
	cout << "The test score for person C is " <<test3<< endl;
	cout << "The test score for person D is " <<test4<< endl;
	cout << "The test score for person E is " <<test5<< endl;

	average=(test1+test2+test3+test4+test5)/5;

	cout << "\n\n\tThe average test score is " <<average<<endl;

	cout << "\n\n\t\t\t\t\t\tCreated by Michael Lindvall\n\n";
}