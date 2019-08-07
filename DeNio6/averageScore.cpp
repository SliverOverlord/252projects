// File:   averageScore.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018
#include <cmath>
using namespace std;
// Description: This file contains the function averageScore. 

// Function: averageScore
// Description: this function calculates the averageScore
// Input:  <none>
//         
// Output: returns the averageScore.
// Preconditions:  count and test testScores must have valid input.
// Postconditions: average score will be retuned.

//set up average function.
float averageScore(const int testScores[], int count)
{
  float tmpSum = 0;
  float ave;
  for(int i = 0; i < count; i++)
  {
   tmpSum += testScores[i]; 
  }
  ave = tmpSum/count;
  return ave;
  
}
