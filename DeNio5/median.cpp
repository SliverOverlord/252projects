// File:   median.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018
#include <cmath>
using namespace std;
// Description: This file contains the function median. 


//set up function to calculate the median score.
float median(const int testScores[], int count)
{
  float median;
 if (count% 2 == 0)
 {
   median = (testScores[count/2] + testScores[(count/2) - 1])/2.0;
 }
 else
 {
   median = testScores[count/2];
 }
 return median;
}
