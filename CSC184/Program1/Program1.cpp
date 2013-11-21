//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program.cpp                             Assignment #: 1                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Sept. 12, 2006       *
//*                                                                                             *
//***********************************************************************************************

//*******************************  Program Description  *****************************************
//*                                                                                             *
//*  Process:  This program is to take an input of student IDs and test scores and calculate    *
//*            the lowest, highest and average score.  This program will also group the         *
//*            students by who got an 'A', 'B', 'C', 'D', or 'F'.                               *
//*                                                                                             *
//*                                                                                             *
//*  User Defined Modules                                                                       *
//*                                                                                             *
//*       displayHeader - This function place programmer's name, date, class, and assignment    *
//*                         number on top of each output page.                                  *
//*       fillArray		- This function fills the test score array and the student id array     *
//*       printOuput	- This function prints the students ID# and Test Score                  *
//*       getAvg        - This function finds the average test score and prints it to the       *
//*                         outfile.                                                            *
//*       getHigh       - This function searches through the test scores and finds the highest  *
//*                         and prints it to the outfile.                                       *
//*       getLow        - This function searches through the test scores and finds the lowest   *
//*                         test score and prints it to the outfile.                            *
//*		  groupGrades   - This function ranks the ID# by whether they recieved an A, B, C, D,   *
//*                          or F on their test.                                                *
//***********************************************************************************************

#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include <fstream.h>

#define count 50

//Function Prototype
void displayHeader(ofstream &);
void fillArray(ifstream &, float[], int[], int&);
void printOutput(ofstream , float[], int[], int);
float getAvg(ofstream, float [], int);
int getHigh(ofstream, float [], int);
int getLow(ofstream, float [], int);
void groupGrades(ofstream, float[], int[], int);


void main(void)
{
	//Declaring the variables
	float TestScores[count];
	int ID[count];
	int size, HighScore, Lowest;
	float Average;		
	ifstream Infile;
	ofstream Outfile;
	
	Infile.open ("data1", ios::in);			//Opening the input file
	Outfile.open ("Output.txt", ios::out);		//Opening the output file
	
	fillArray(Infile, TestScores, ID, size);	//Getting the data from the infile to put into
												// TestScore array and ID array

	displayHeader(Outfile);						//Printing authors name, assignment # and ect

	printOutput (Outfile, TestScores, ID, size);		//Print the arrays of studentIDs and 
														//thier test scores
		
	groupGrades(Outfile, TestScores, ID, size);			//Print the IDs in grade letter groupings
	
	HighScore = getHigh(Outfile, TestScores, size);	//Sending testscores to function getHigh to 
													//find the highest score by ID
	//Print the Highest Score to outfile
	Outfile << "\n\nHighest Score" << setw(8) << TestScores[HighScore] << endl;	
	
	Lowest= getLow(Outfile, TestScores, size);		//Sending testscores to function getLow to 
													//find the highest score by ID	
	//Print the Lowest score to outfile
	Outfile << "Lowest Score " << setw(8) << TestScores[Lowest] << endl;
	
	Average = getAvg(Outfile,TestScores, size);			//ending testscores to function to find
														//the avg score
	//Formating the output to go to the output file
	Outfile << setprecision(1);
	Outfile << setiosflags(ios::fixed | ios::showpoint);
	//Print the Average score to the outfile
	Outfile << "Average Score" << setw(8) << Average << endl;


	Outfile.close();					//Close the output file
	Infile.close();						//Close the input file
}

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
	Outfile << setw(20) << "Assignment #1\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function Header  **************************************


//*********************************** Function printOutput  ************************************
//**********************************************************************************************
void printOutput(ofstream Outfile, float TestScores[], int ID[], int size)
{
				//Recieves - the output file, array testscores, array ID the size.
				//Task - Print the output for scores and ID 
				//Returns - the printed output for user

	int i;
	Outfile << "Student ID#\t\tTest Score\n";
	
	for(i = 0; i < size; i++)
	{
		Outfile << ID[i];
		Outfile << setiosflags(ios::fixed | ios::showpoint);
		Outfile << setprecision(1);
		Outfile << setw(16) << TestScores[i] << endl;
	}
}
//**********************************  End of printOutput ***************************************


//*****************************  Function groupGrades  *******************************************
//************************************************************************************************
void groupGrades(ofstream Outfile, float Score[], int ID[], int size)
{
				//Recieves - the output file, array testscores, array Id and the size.
				//Task -  Print the ID's in letter grade groupings
				//Returns - prints to the outfile what letter grade students got.
	int i;
	
	Outfile << "\nStudents with A's: ";
	for(i = 0; i < size; i++)
	{	
		if (Score[i] >= 90)				//these scores will be A's
		{
			Outfile << ID[i] << " ";
		}
	}
	Outfile << "\nStudents with B's: ";		//these scores will be B's
	for(i = 0; i < size; i++)
	{	
		if (Score[i] <90 && Score[i] >= 80)
		{
			Outfile << ID[i] << " ";
		}
	}
	Outfile << "\nStudents with C's: ";		//these scores will be C's
	for(i = 0; i < size; i++)
	{		
		if (Score[i] < 80 && Score[i] >= 70)
		{
			Outfile << ID[i] << " ";
		}
	}
	Outfile << "\nStudents with D's: ";		//thess scores will be D's
	for(i = 0; i < size; i++)
	{
		if (Score[i] < 70 && Score[i] >= 60)
		{
			Outfile << ID[i] << " ";
		}
	}
	Outfile << "\nStudents with F's: ";		//These scores will be F's
	for(i = 0; i < size; i++)
	{		
		if (Score[i] < 60)
		{
			Outfile << ID[i] << " ";
		}
	}
}
//******************************  End of groupGrades  ******************************************

//*******************************Function fillArray  ********************************************
//***********************************************************************************************
void fillArray(ifstream &in, float TestScores[], int ID[], int &size)
{
				//Recieves - the data file with the data
				//Task - collects the data and puts it into an array
				//Returns - Nothing, but puts them in an array
	int code;
	size = 0;
	in >> code;
	
	while (code > 0)
	{
		ID[size] = code;
		in >> TestScores[size++];
		in >> code;
	}

	return;
}
//************************************************************************************************
   

//**********************************  Function Get Average  **************************************
//************************************************************************************************
float getAvg(ofstream Outfile, float scores[], int size)
{				
				//Recieves - the test scores
				//Task -  addes test scores up and then finds the average
				//Returns the average
	float avg = 0;	
	int i;
	
	for (i = 0; i < size; i++)
		avg= avg + scores[i];

	avg = avg/i;
	return avg;
}
//*********************************  End of Funtion GetAvg  **************************************


//*********************************  Function GetLow   *******************************************
//************************************************************************************************
int getLow(ofstream Outfile, float score[], int size)
{
				//Recieves - the output file, array testscores and size
				//Task - find the lowest test score and print to outfile
				//Returns - returns the lowest test
	
	int i, MinLoc=0;
	int MinValue=110;		//Setting the value to something i know won't be found
	for (i=0; i < size; i++)
		if (MinValue > score[i])
		{
			MinValue = score[i];
			MinLoc = i;				//Storing the lowest score array spot
		}	

	return MinLoc;
}
//*****************************  End of Function getLow  ****************************************

//*********************************  Function GetHigh   *******************************************
//************************************************************************************************
int getHigh(ofstream Outfile, float score[], int size)
{
				//Recieves - the output file, array testscores and size
				//Task - find the highest test score and print to outfile
				//Returns - returns the highest test
	
	int i, MaxLoc=0;
	int MaxValue=-5;		//Setting the value to something i know won't be found
	for (i=0; i < size; i++)
		if (MaxValue < score[i])
		{
			MaxValue = score[i];
			MaxLoc = i;				//Storing the highest score array spot
		}	
	return MaxLoc;
}
//*****************************  End of Function getHigh  ****************************************