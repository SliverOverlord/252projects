// File:   averageScore.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018
#include <cmath>
using namespace std;
// Description: This file contains the function averageScore. 

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
