//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program.3cpp                            Assignment #: 3                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Oct 10, 2006         *
//*                                                                                             *
//***********************************************************************************************

//*******************************  Program Description  *****************************************
//*                                                                                             *
//*  Process:  This program is to take an input of student IDs and test scores and calculate    *
//*            the lowest, highest and average score.  This program will also sort the test     *
//*            scores by a bubble sort and then print to an output file and this program will   *
//*            also sort the student IDs with an exchange sort and then print the sorted IDs    *
//*            to the output file.                                                              *
//*                                                                                             *
//*                                                                                             *
//*  User Defined Modules                                                                       *
//*                                                                                             *
//*       displayHeader - This function place programmer's name, date, class, and assignment    *
//*                         number on top of each output page.                                  *
//*       printOuput	- This function prints the students ID# and Test Score                  *
//*       fillArray		- This function fills the test score array and the student id array     *
//*		  BubbleSort	- Ths function sorts student IDs using a bubble sort                    *
//*       getAvg        - This function finds the average test score                            *
//*		 getLetterGrade - This function looks at the average score and figures what letter      *
//*                         grade the student should get.                                       *
//*       printGrades	- Does the samething as printOutput, but has to added fields to it.     *
//*                         An average test score column and what letter grade that student     *
//*                         should recieve.                                                     *
//*       avgBubbleSort - This bubble sort sorts the testscores by the average score.           *
//*                                                                                             *
//***********************************************************************************************

#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include <fstream.h>

#define count 50
#define scores 4

//Function Prototype
void displayHeader(ofstream &);
void fillArray(ifstream &, float[][scores], int[], int&, int&);
void printOutput(ofstream , float[][scores], int[], int, int);
void BubbleSort(float[][scores], int[], int, int);
void getAvg(float [][scores],float[], int, int);
void getLetterGrade(char[], float [], int, int);

void printGrades(ofstream , float[][scores], int[], char[], float[], int, int);
void avgBubbleSort(float[][scores], int[],char[], float[], int, int);


void main(void)
{
	//Declaring the variables
	float TestScores[count][scores] = {0}, Average[count];
	int ID[count], cSize, rSize;
	char Grade[count];
	ifstream Infile;
	ofstream Outfile;

	Infile.open ("data3", ios::in);						//open the input file
	Outfile.open ("Output.txt", ios::out);				//open the output file

	//Print the header to output
	displayHeader(Outfile);

	//Open data file and send information to arrays to be used
	fillArray(Infile, TestScores, ID, rSize, cSize);

	//print the arrays that were collected in previous function to output
	printOutput(Outfile, TestScores, ID, rSize, cSize);

	//sort the grades by student ID
	BubbleSort(TestScores, ID, rSize, cSize);			

	//Print the sorted test scores and student IDs to the output
	Outfile << "The list of students sorted by ID Number high to low is:" << endl;
	printOutput(Outfile, TestScores, ID, rSize, cSize);

	//Find the average test score for each student ID
	getAvg(TestScores, Average, rSize, cSize);

	//Find what letter grade each student deserves from their average score
	getLetterGrade(Grade, Average, rSize, cSize);

	//Print the student IDs and test scores with the average score and letter grade
	Outfile << "The list of students with their test average and course grade is:" << endl;
	printGrades(Outfile, TestScores, ID, Grade, Average, rSize, cSize);

	//Sort student IDs, test scores, average score and grade letter by the average score
	avgBubbleSort(TestScores, ID, Grade, Average, rSize, cSize);

	//print the new sorted IDs testscores, letter grade and average score
	Outfile << "The list of students sorted by test average high to low is:" << endl;
	printGrades(Outfile, TestScores, ID, Grade, Average, rSize, cSize);
	

	Outfile.close();		//Close the output file
	Infile.close();			//Close the input file

}


//*******************************Function fillArray  ********************************************
//***********************************************************************************************
void fillArray(ifstream &in, float TestScores[][scores], int ID[], int &RS, int &CS)
{
				//Recieves - the data file with the data
				//Task - collects the data and puts it into an array
				//Returns - Nothing, but puts them in an array
	int code;
	RS = CS = 0;
	in >> code;

	while (code > 0)
	{
		ID[RS] = code;
		for(CS = 0; CS<scores; CS++)		//send the test scores to an array
			in >> TestScores[RS][CS];
		++RS;
		in >> code;
	}
	return;
}
//*******************************  End of fillArray  ********************************************

//*********************************** Function printOutput  ************************************
//**********************************************************************************************
void printOutput(ofstream Outfile, float TestScores[][scores], int ID[], int RS, int CS)
{
				//Recieves - the output file, array testscores, array ID the size.
				//Task - Print the output for scores and ID 
				//Returns - the printed output for user

	int i;

	Outfile << "Student ID#\t\tTest1\t\t\tTest2\t\t\tTest3\t\t\tTest4\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n";
	
	
	for(i = 0; i < RS; i++)
	{
		Outfile << ID[i];
		Outfile << setiosflags(ios::fixed | ios::showpoint);
		Outfile << setprecision(1);
		for(int j=0; j < scores; j++)
			Outfile << setw(16) << TestScores[i][j];
		Outfile << endl;
	}
	Outfile << endl << endl;
	return;
}
//**********************************  End of printOutput ***************************************

//*******************************  Function Header  *********************************************
//***********************************************************************************************
void displayHeader(ofstream& Outfile)
{
				//Recieves - the output file
				//Task - Print the output preamble
				//Returns - Nothing
	Outfile << setw(30) << "Michael Lindvall";
	Outfile << setw(17) << "CSC 184";
	Outfile << setw(15) << "Section 21\n";
	Outfile << setw(30) << "Fall 2006";
	Outfile << setw(20) << "Assignment #3\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function Header  *************************************

//**********************************  Function BubbleSort  *************************************
//**********************************************************************************************
void BubbleSort(float Score[][scores], int ID[], int RS, int CS)
{
				//Recieves - the array TestScores, and the array ID as well as elements used(EU)
				//Tasks -  Uses a BubbleSort to sort the test scores from highest to lowest
				//Returns - the sorted array TestScores from High to Low along with the
						//IDs arranged with the Scores

	int M, N, i;
	float temp, temp2[count][scores];

		for ( M = 0 ; M < RS-1; M++)			// M controls how many times we pass 
		 {												//thru the array
			for ( N = RS-1; N > M ; N--)		// N controls at which end of the array  
			{											//we begin and which elements are
			    if (ID[N] > ID[N-1])				//compared and swapped if needed.
				{
					temp = ID[N];
					for(i=0; i < scores; i++)
						temp2[N][i] = Score[N][i];
					ID[N] = ID[N-1];
					for(i=0; i < scores; i++)
						Score[N][i] = Score[N-1][i];
					ID[N-1] = temp;				
					for(i=0; i < scores; i++)
						Score[N-1][i] = temp2[N][i];
				}
			}
		}
    return;  
}
//********************************  End of BubbleSort  *****************************************

//**********************************  Function Get Average  **************************************
//************************************************************************************************
void getAvg(float Score[][scores], float Avg[], int RS, int CS)
{				
				//Recieves - the test scores
				//Task -  addes test scores up and then finds the average
				//Returns the average
	float avg = 0;	
	int i, j;
	
	for (i = 0; i < RS; i++)
	{
		for(j=0; j < CS; j++)
			avg +=Score[i][j];
		Avg[i]=avg/j;
		avg=0;
	}

	return;
}
//*********************************  End of Funtion GetAvg  **************************************


//**********************************  Function Get LetterGrade  **********************************
//************************************************************************************************
void getLetterGrade(char Grade[], float Avg[], int RS, int CS)
{				
				//Recieves - the array of average test scores and row and column size
				//Task - figure out what letter grade each stundet should recieve based on
							//students average score
				//Returns the letter grade for each student in an array
	
	int i;

	for(i=0; i < RS; i++)
	{
		// if state to see what grade each student should get
		if(Avg[i] >= 90)
			Grade[i] = 'A';
		if(Avg[i] < 90 && Avg[i]>=80)
			Grade[i] = 'B';
		if(Avg[i] < 80 && Avg[i]>=70)
			Grade[i] = 'C';
		if(Avg[i] < 70 && Avg[i]>=60)
			Grade[i] = 'D';
		if(Avg[i] < 60)
			Grade[i] = 'F';
	}
	return;
}
//*********************************  End of Funtion Get LetterGrade  *****************************

//*********************************** Function printGrades  ************************************
//**********************************************************************************************
void printGrades(ofstream Outfile, float TestScores[][scores], int ID[], char Grade[], 
				 float Avg[], int RS, int CS)
{
				//Recieves - arrays to be printed to the outfile
				//Task - print test scores, student id, average score and letter grade 
				//Returns - the printed output for user

	int i;

	Outfile << "Student ID#\t\tTest1\t\t\tTest2\t\t\tTest3\t\t\tTest4\t\t\tAverage\t\t\tGrade\n";
	Outfile << setw(35) << "-----------------------------------------------------";
	Outfile << setw(35) << "-----------------------------------------------------\n";
	
	
	for(i = 0; i < RS; i++)
	{
		Outfile << ID[i];
		Outfile << setiosflags(ios::fixed | ios::showpoint);
		Outfile << setprecision(1);
		for(int j=0; j < scores; j++)
			Outfile << setw(16) << TestScores[i][j];
		Outfile << setw(16) << Avg[i];
		Outfile << setw(16) << Grade[i];
		Outfile << endl;
	}
	Outfile << endl << endl;
	return;
}
//**********************************  End of printOutput ***************************************


//**********************************  Function avgBubbleSort  **********************************
//**********************************************************************************************
void avgBubbleSort(float Score[][scores], int ID[], char Grade[], float Avg[], int RS, int CS)
{
				//Recieves - the array TestScores, and the array ID as well as elements used(EU)
				//Tasks -  Uses a BubbleSort to sort the test scores from highest to lowest
				//Returns - the sorted array TestScores from High to Low along with the
						//IDs arranged with the Scores

	int M, N, i;
	float temp, temp2[count][scores], temp3, temp4;

		for ( M = 0 ; M < RS-1; M++)			// M controls how many times we pass 
		 {												//thru the array
			for ( N = RS-1; N > M ; N--)		// N controls at which end of the array  
			{											//we begin and which elements are
			    if (Avg[N] > Avg[N-1])				//compared and swapped if needed.
				{
					
					temp = Avg[N];
					for(i=0; i < scores; i++)
						temp2[N][i] = Score[N][i];
					temp3 = ID[N];
					temp4 = Grade[N];

					Avg[N] = Avg[N-1];
					for(i=0; i < scores; i++)
						Score[N][i] = Score[N-1][i];
					ID[N] = ID[N-1];
					Grade[N] = Grade[N-1];

					Avg[N-1] = temp;				
					for(i=0; i < scores; i++)
						Score[N-1][i] = temp2[N][i];
					ID[N-1] = temp3;
					Grade[N-1] = temp4;
				}
			}
		}
    return;  
}
//********************************  End of BubbleSort  *****************************************