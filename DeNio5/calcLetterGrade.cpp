// File:   calcLetterGrade.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018
#include "constants.h"
#include <cmath>
using namespace std;
// Description: This file contains the function calcLetterGrade.

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
