// File:   calcLetterGrade.cpp
// Author:  Joshua DeNio
// Program: 10
// Date:    04/23/2018
#include "constants.h"
#include <cmath>
using namespace std;
// Description: This file contains the function calcLetterGrade.

// Function: calcLetterGrade
// Description: Calculates the letter grade using the score and max score.
//              based on scores in constants.h
// Input:  <none>
//         
// Output: returns the letter grade.
// Preconditions:  takes a score (int) and maxScore(int)
// Postconditions: returns a letter grade.

//set up the calcPercentage function.
float calcPercentage(int score, int maxScore)
{
  float pct;
  pct = static_cast<float>(score) / maxScore * 100;
  return pct;
}

// set up the calcLetterGrade function.
char calcLetterGrade(int score, int maxScore)
{
  char grade;
  float pct;
  
  pct = static_cast<float>(score) / maxScore * 100;
  if(pct >= AMin)
    grade = 'A';
  else if (pct >= BMin)
    grade = 'B';
  else if (pct >= CMin)
    grade = 'C';
  else if (pct >= DMin)
    grade = 'D';
  else
    grade = 'F';
  return grade;
  
}
