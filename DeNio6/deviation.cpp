// File:   deviation.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018
#include <cmath>
using namespace std;
// Description: This file contains the function deviation. 

// Function: deviation
// Description: calculates the standard deviation.
// Input:  none
//         
// Output: returns the deviation.
// Preconditions:  must have valid input in testScores and count 
//                 must be initualized to a valid number.
// Postconditions: returns deviation.

//set up a function to find the standard deviation.
float deviation(const int testScores[],int count)
{
  float sum = 0.0, mean, deviation = 0.0;

    int i;

    for(i = 0; i < count; ++i)
    {
        sum += testScores[i];
    }

    mean = sum/count;

    for(i = 0; i < count; ++i)
        deviation += pow(testScores[i] - mean, 2);

    return sqrt(deviation / count);
}