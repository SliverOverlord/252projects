// File:    output.cpp
// Author:  Joshua DeNio
// Program: 10
// Date:    4/23/2018

// Description: This file contains the function output. 

#ifndef _output_
#define _output_
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "studentType.h"
#include "listType.h"

// Function: output
// Description: This function saves the output names and scores
// into the output file results.
//
// Input:  listType students
// Output: results file
// Postconditions: A file called results will be populated with the students info.
void output(const listType<studentType>& students)
{
 studentType s;
 ofstream o;
 string name;
 int score;
 o.open("results");
 
 o << setw(20) << left << "Name" << setw(10)  << right << "Score" << endl;
 for (int i = 0; i < students.listSize(); i++)
 {
  students.retrieveAt(i,s);
  name = s.getName();
  score = s.getScore();
  o << setw(20) << left << name << setw(10)  << right << score << endl;
  //o << s << endl;
 }
 o.close();
  
}

#endif