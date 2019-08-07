// File:   median.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018
#include <cmath>
using namespace std;
// Description: This file contains the function median. 

// Function: median
// Description: calculates the median score.
// Input:  <none>
//         
// Output: returns the median.
// Preconditions:  must have valid content in testScores 
//                 and count must be initualized.
// Postconditions: Returns median.

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
