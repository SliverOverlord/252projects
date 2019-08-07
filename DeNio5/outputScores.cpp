// File:   outputScores.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018
#include <iomanip>
#include <iostream>
#include "constants.h"
using namespace std;
// Description: This file contains the function ouputScores.

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

//set up output function using a for loop.
void outputScores(const int testScores[],int count,int maxScore)
{
  cout << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << setw(15) << left << "Score" << setw(15) << "Percentage"<< setw(15)  << "Letter Grade" << endl;
  cout << "-----------------------------------------------------------" << endl;
  for (int i=0; i < count; i++)
  {
    cout << setw(15) << left << testScores[i] << setw(15) << calcPercentage(testScores[i], maxScore)<< setw(15)  << 
    calcLetterGrade(testScores[i],maxScore)<< endl;
  }
    
  
}