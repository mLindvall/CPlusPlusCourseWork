/*
	Programmer:	Michael Lindvall
	Date:		May 3, 2006
	Program:	Driver's License Exam
				p 457 problem 7
*/


#include <iostream.h>


//Function Prototype
void getAnswers(char []);
void ChangeCaseToUpper(char []);
int compareAnswers(char [], char []);


void main(void)
{
	
	char Answer[6],
		Correct[6] = {'B', 'D', 'A', 'A', 'C'};
	int NumCorrect;

	getAnswers(Answer);
	ChangeCaseToUpper(Answer);
	NumCorrect = compareAnswers(Answer, Correct);

	cout << NumCorrect;
}

// **********************************************************************
// getAnswers Description 
// Get the Answers from the stundents who are taking the test
// **********************************************************************
void getAnsers(char Answer[])
{

	for (int i = 0 ; i < 6 ; i++)
	{
		do
		{
			cout << "Please enter anser for question #" << i + 1 << ": ";
			cin >> Answer[i];
			if (Answer[i] != 'A' || 'a' || 'B' || 'b' || 'C' || 'c' || 'D' || 'd')
				cout << "That is not a vaild answer\n";
		}
		while(Answer[i] != 'A' || 'a' || 'B' || 'b' || 'C' || 'c' || 'D' || 'd');
	}
}

// **********************************************************************
// ChangeCaseToUpper Description
// This will change the case of the later that the user inputed to 
// upper case
// **********************************************************************
void ChangeCaseToUpper(char line [])
{
	for (int index = 0; index < 6; index++)
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
}

// **********************************************************************
// compareAnswers Description
// This function will compare the students answers to the correct answers
// and then it will return the number of answers the student got right
// **********************************************************************
int compareAnswers(char StudentAnswers, char CorrectAnswers)
{
	int right, wrong, i;

	for (i = 0; i < 6; i++)
	{
		if (StudentAnswers[i] == CorrectAnswers[i])
			right += 1;
		else
			wrong += 1;
			
	}
	return right;
}