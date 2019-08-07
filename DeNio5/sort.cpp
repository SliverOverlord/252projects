// File:   sort.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018

// Description: This file contains the function sort. 

#include <iostream>

using namespace std;

//set up the sort function.
void sort(int testScores[], int count)
{
   int temp;
   int large;
   // put count-1 ints in their correct spot
   for (int i=0; i<count-1; i++)  
   {
      large=i;
      // loop to find the largest
      for (int j=i+1; j<count; j++)  
         if (testScores[j] > testScores[large])
            large=j;

      // put largest in proper position
      temp = testScores[i];     
      testScores[i] = testScores[large];
      testScores[large] = temp;
   }
}
