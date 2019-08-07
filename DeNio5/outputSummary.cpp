// File:    outputSummary.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018

// Description: This file contains the function read. 

#include <iostream>
#include <iomanip>
#include "constants.h"
using namespace std;

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

//set up summary function.
void outputSummary(const int testScores[],int count,int maxScore)
{
  cout <<endl;
  cout << fixed << showpoint << setprecision(2);
  cout << "SUMMARY" << endl;
  cout << "-----------------------------------------------------------" << endl;
  cout << setw(20) << left << "Maximum Score" << setw(10) << maxScore << endl;
  cout << setw(20) << "Number of students" << setw(10) << count << endl;
  cout << setw(20) << "High Score" << setw(10) << testScores[0] << endl;
  cout << setw(20) << "Low Score" << setw(10) << testScores[count-1] << endl;
  cout << setw(20) << "Range of Scores" << setw(10) << testScores[0]- testScores[count-1]<< endl;
  cout << setw(20) << "Average Score" << setw(10) << averageScore(testScores,count) << endl;
  cout << setw(20) << "Median Score" << setw(10) << median(testScores,count) << endl;
  cout << setw(20) << "Standard Deviation" << setw(10) << deviation(testScores,count) << endl;
  
}