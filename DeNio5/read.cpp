// File:    read.cpp
// Author:  Joshua DeNio
// Program: 5
// Date:    2/27/2018

// Description: This file contains the function read. 

#include <iostream>
#include "constants.h"
using namespace std;

// Function: read
// Description: reads ints from standard input (keyboard) until the sentinel
//              value is entered and stores them them in an array.
// Input:  <none>
// Output: testScores (array of int)
//         count (int) - the number of values read and stored into the array
// Preconditions:  <none>
// Postconditions: The array will be populated with the values entered
//                 from the keyboard and the count will contain the number 
//                 of values in the array.  

//set up the read function.
void read(int testScores[], int& count, int& maxScore)
{
  count = 0;
  int  grade;
  
  cout << "Enter the maximum points availible: " << endl;
  cin >> maxScore;
  
  cout << "Enter a test score: (" << sentinal << " to quit) " << endl;
  cin >> grade;
  while (grade != sentinal && count < arraySize)
  {
   testScores[count] = grade;
   count++;
   cin >> grade;
    
  }

}
