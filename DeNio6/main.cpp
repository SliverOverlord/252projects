// File:    main.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018

// Description: This file contains the main function
// The program will read ints from an input file into an array until the
// end of the file, sort them ascendingly, then output them
// to an output file.
#include <string>
#include <iomanip>
#include "constants.h"  
using namespace std;


// Function: main
// Description: The main function of the program that calls other functions
// Input:  testscores
// Output: testsummary, testresults.
// Preconditions: testscores must exist and have valid format.
// Postconditions: Will create text files: testresults and testsummary.

// function declarations prototypes.
void sort(int testScores[],string namesList[], int count);
void read(int testScores[],string namesList[], int& count, int& maxScore);
void outputScores(const int testScores[],const string namesList[],int count,int maxScore);
void outputSummary(const int testScores[],const string namesList[],int count,int maxScore);
char calcLetterGrade(int score, int maxScore);
float calcPercentage(int score, int maxScore);
float averageScore(const int testScores[], int count);
float median(const int testScores[], int count);
float deviation(const int testScores[],int count);

int main()
{
  //declare veriables.
  int maxScore;
  int testScores[arraySize];
  string namesList[arraySize];
  int count;
  
  //function calls.
  read(testScores,namesList,count,maxScore);
  sort(testScores,namesList,count);
  outputScores(testScores,namesList,count,maxScore);
  outputSummary(testScores,namesList,count,maxScore);


return 0;
}