// File:    outputSummary.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018

// Description: This file contains the function outputSummary.
// It will output a sudents summary 


//Inputs
#include <string>
#include <fstream>
#include <iomanip>
#include "constants.h"
using namespace std;

// Function: outputSummary
// Description: This function will create the output file 
//              containing student information such as
//              maximum test score, number of students processed
//              high score, low score, range of scores (high - low)
//              average score, median score, standard deviation. 
// Input:  <none>
// Output: output file testsummary.
//         
// Preconditions:  <none>
// Postconditions: This function will create a file
//                 and populate the file.

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
void outputSummary(const int testScores[],const string namesList[],int count,int maxScore)
{
  //open or create the outfile.
  ofstream outfile;
  outfile.open("testsummary");
  
  outfile << fixed << showpoint << setprecision(2);
  //Output all info to outfile.
  
  outfile << maxScore << endl;
  outfile << count << endl;
  outfile << testScores[0] << endl;
  outfile << testScores[count-1] << endl;
  outfile << testScores[0]- testScores[count-1]<< endl;
  outfile << averageScore(testScores,count) << endl;
  outfile << median(testScores,count) << endl;
  outfile << deviation(testScores,count) << endl;
  
  outfile.close();
  
}