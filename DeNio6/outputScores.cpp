// File:   outputScores.cpp
// File:    outputScores
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018

// Description: This file contains the function ouputScores.

// Imports.
#include <string>
#include <iomanip>
#include <fstream>
#include "constants.h"
using namespace std;

// Function: outputScores
// Description: This function saves the output names, scores, % and grades
// into the output file testresults.
//
// Input:  <none>
// Output: numbers (array of int)
//         count (int) - the number of values read and stored into the array
// Preconditions:  There must be valid content in the two arrays.
// Postconditions: A file called testresults will be populated with the test 
//                 results.

// function declarations prototypes.
void sort(int testScores[],string namesList[], int count);
void read(int testScores[],string namesList[], int& count, int& maxScore);
void outputScores(const int testScores[],const string namesList[],int count,int maxScore);
void outputSummary(const int testScores[],int count,int maxScore);
char calcLetterGrade(int score, int maxScore);
float calcPercentage(int score, int maxScore);
float averageScore(const int testScores[], int count);
float median(const int testScores[], int count);
float deviation(const int testScores[],int count);

//set up output function using a for loop.
void outputScores(const int testScores[],const string namesList[],int count,int maxScore)
{
  //Open or create the file.
  ofstream outfile;
  outfile.open("testresults");
  
  
  outfile << fixed << showpoint << setprecision(2);
  outfile << setw(15) << left << "Name" << setw(15) << left << "Score" << setw(15) << left
  << "Percentage"<< setw(15)  << left << "Letter Grade" << endl;
  outfile << "-----------------------------------------------------------" << endl;
  for (int i=0; i < count; i++)
  {
    outfile << setw(15) << left << namesList[i] << setw(15) << left << testScores[i] << setw(15) << left 
    << calcPercentage(testScores[i], maxScore)<< setw(15) << left << 
    calcLetterGrade(testScores[i],maxScore)<< endl;
  }
    
  outfile.close();
}