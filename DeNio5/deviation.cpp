// File:   deviation.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018
#include <cmath>
using namespace std;
// Description: This file contains the function deviation. 

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