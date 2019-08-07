// File:    main.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018

// Description: This file contains the main function
// The program will read ints from the keyboard into an array until the
// sentinel value is entered, sort them ascendingly, then output them
// to the screen.

#include <iostream>
#include <iomanip>
#include "constants.h"  
using namespace std;


// Function: main
// Description: the main function of the program that calls other functions
// Input:  <none>
// Output: <none>
// Preconditions: <none> 
// Postconditions: <none>

// function declarations prototypes.
void sort(int testScores[], int count);
void read(int testScores[], int& count, int& maxScore);
void outputScores(const int testScores[],int count,int maxScore);
void outputSummary(const int testScores[],int count,int maxScore);
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
  int count;
  
  //function calls.
  read(testScores,count,maxScore);
  sort(testScores,count);
  outputScores(testScores,count,maxScore);
  outputSummary(testScores,count,maxScore);


return 0;
}