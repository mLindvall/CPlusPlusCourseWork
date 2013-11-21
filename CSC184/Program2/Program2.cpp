//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program2.cpp                            Assignment #: 2                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Sept. 26, 2006       *
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
//*		  BubbleSort	- Ths function sorts testscores using a bubble sort                     *
//*       ExchangeSort  - This function sorts student ids using an exchange sort                *
//*       getAvg        - This function finds the average test score and prints it to the       *
//*                         outfile.                                                            *
//*       getHigh       - This function searches through the test scores and finds the highest  *
//*                         and prints it to the outfile.                                       *
//*       getLow        - This function searches through the test scores and finds the lowest   *
//*                         test score and prints it to the outfile.                            *
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
void BubbleSort(float[], int[], int);
void ExchangeSort(float[], int[], int);
float getAvg(ofstream, float [], int);
int getHigh(ofstream, float [], int);
int getLow(ofstream, float [], int);

void main(void)
{
	//Declaring the variables
	float TestScores[count], Average;
	int ID[count], size, HighScore, Lowest;
	ifstream Infile;
	ofstream Outfile;

	Infile.open ("data2", ios::in);						//opening the input file
	Outfile.open ("Output.txt", ios::out);				//opening the output file

	fillArray(Infile, TestScores, ID, size);		//opening function fillarray to fill arrays
	displayHeader(Outfile);										// TestScores and ID
	printOutput(Outfile, TestScores, ID, size);		//printing testscores and ids to output file

	BubbleSort(TestScores, ID, size);				//printing testscores and id to get bubble sorted
	Outfile << "\nTest Scores Sorted with a Bubble Sort\n";
	Outfile << "-----------------------------------";
	Outfile << "-----------------------------------\n\n";
	

	printOutput(Outfile, TestScores, ID, size);		//printing bubble sorted testscores to outfile

	ExchangeSort(TestScores, ID, size);			//Sending testscores and id to get exchange sorted
	Outfile << "\nIDs Sorted with a Exchange Sort\n";
	Outfile << "-----------------------------------";
	Outfile << "-----------------------------------\n\n";
	printOutput(Outfile, TestScores, ID, size);			//printing exchange sorted ids to outfile


	Outfile << "\n-----------------------------------";
	Outfile << "-----------------------------------\n\n";
	HighScore = getHigh(Outfile, TestScores, size);		//Sending testscores to function getHigh to 
															//find the highest score by ID
	//Print the Highest Score to outfile
	Outfile << "Highest Score" << setw(8) << TestScores[HighScore] << endl;	
	
	Lowest= getLow(Outfile, TestScores, size);			//Sending testscores to function getLow to 
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


	Outfile.close();									//Close the output file
	Infile.close();										//Close the input file
}

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
//*******************************  End of fillArray  ********************************************
   
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
	Outfile << setw(20) << "Assignment #2\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function Header  *************************************

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


//**********************************  Function BubbleSort  *************************************
//**********************************************************************************************
void BubbleSort(float Score[], int ID[], int EU)
{
				//Recieves - the array TestScores, and the array ID as well as elements used(EU)
				//Tasks -  Uses a BubbleSort to sort the test scores from highest to lowest
				//Returns - the sorted array TestScores from High to Low along with the
						//IDs arranged with the Scores

	int M, N;
	float temp, temp2;

		for ( M = 0 ; M < EU-1; M++)			// M controls how many times we pass 
		 {												//thru the array
			for ( N = EU-1; N > M ; N--)		// N controls at which end of the array  
			{											//we begin and which elements are
			    if (Score[N] > Score[N-1])				//compared and swapped if needed.
				{
					temp = Score[N];
					temp2 = ID[N];
					Score[N] = Score[N-1];
					ID[N] = ID[N-1];
					Score[N-1] = temp;
					ID[N-1] = temp2;
				}
			}
		}
    return;  
}
//********************************  End of BubbleSort  *****************************************


//**********************************  Function ExchangeSort  ***********************************
//**********************************************************************************************
void ExchangeSort (float Score[], int ID[], int EU)
{  
				//Recieves - the array TestScores, and the array ID as elements used
				//Tasks - Uses an Exchanga Sort to sort IDs from from low to high
				//Returns - the sorted array IDs from low to high along with the Score
						// arranged with the IDs

    int startScan, minIndex, minValue, minIndex2;
	float minValue2;
	

	for (startScan = 0; startScan < (EU -1); startScan++)
	{
		minIndex = minIndex2 = startScan;
		minValue = ID[startScan];
		minValue2 = Score[startScan];

		for (int i = startScan + 1; i < EU; i++)
		{
			if (ID[i] < minValue)
			{
				minValue = ID[i];
				minValue2 = Score[i];
				minIndex = minIndex2 = i;
				
			}
		}
		ID[minIndex] = ID[startScan];
		Score[minIndex2] = Score[startScan];
		ID[startScan] = minValue;
		Score[startScan] = minValue2;
	}
	return;
}          
//********************************* End of ExchangeSort  *****************************************

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

//*********************************  Function GetHigh   *****************************************
//***********************************************************************************************
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
//*****************************  End of Function getHigh  ***************************************