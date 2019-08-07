// File:    read.cpp
// Author:  Joshua DeNio
// Program: 10
// Date:    04/23/2018

// Description: This file contains the function read. 

#include <fstream>
#include <string>
#include "listType.h"
#include "studentType.h"
using namespace std;

// Function: read
// Description: reads student names and scores from the text file scores
// and saves them to a listType object.
// Input:  <scores>
// Output: none
// Preconditions:  <none>
// Postconditions: the listType objects will contain the values from scores.

//set up the read function.
void read(listType<studentType>& students)
{
  ifstream infile;
  studentType student;
  infile.open("scores");
  string tmpName;
  int tmpScore;
  
  getline(infile,tmpName);
  
  //infile >> student;
  
  while (!infile.eof() && !students.isFull()){
    infile >> tmpScore;
    infile.ignore(80,'\n');
    student.setScore(tmpScore);
    student.setName(tmpName);
    students.insert(student);
    getline(infile, tmpName);
    
  }
   //Close the file.
   infile.close();
}
