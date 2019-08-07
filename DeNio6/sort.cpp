// File:   sort.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018

// Description: This file contains the function sort. 
#include <string>

using namespace std;

//set up the sort function.
void sort(int testScores[],string namesList[], int count)
{
   int temp;
   string tmpName;
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
      tmpName = namesList[i];
      
      testScores[i] = testScores[large];
      namesList[i] = namesList[large];
      testScores[large] = temp;
      namesList[large] = tmpName;
   }
}
