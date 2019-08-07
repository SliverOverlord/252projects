// File:    read.cpp
// Author:  Joshua DeNio
// Program: 6
// Date:    3/19/2018

// Description: This file contains the function read. 

#include <fstream>
#include <string>
#include "constants.h"
using namespace std;

// Function: read
// Description: reads student names and scores from the text file testscores 
// and saves them to arrays. Sets maxScore to the maxScore found in the file.
// Input:  <testscores>
// Output: testScores (array of int), namesList (array of strings)
//         count (int) - the number of values read and stored into the array
// Preconditions:  <none>
// Postconditions: The array will be populated with the values from the
// file and the count will contain the number 
// of values in the arrays.  

//set up the read function.
void read(int testScores[],string namesList[], int& count, int& maxScore)
{
  ifstream infile;
  infile.open("testscores");
  string name;
  
  count = 0;
  int  grade;
  int tmpMaxScore;
  
  //Get max score.
  infile >>tmpMaxScore;
  infile.ignore(80,'\n');
  maxScore = tmpMaxScore;
  
  // use a while loop to iterate through the input file.
  getline(infile,name);
  
  while (!infile.eof() && count<arraySize){
    
    infile >> grade;

    //Add to the arrays.
    namesList[count] = name;
    testScores[count] = grade;
    //Incriment the counter.
    count++;
    infile.ignore(80,'\n');
    getline(infile,name);
    
  }
   //Close the file.
   infile.close();
}
