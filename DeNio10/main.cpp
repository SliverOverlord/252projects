// File: main.cpp
// Author:  Joshua DeNio
// Program: 10
// Date:    04/23/18

// Description: This file contains code for the main program.

// Function: main
// Description: This file contains the main
// Input:  none
// Output: print to terminal.
// Preconditions:  <none>
// Postconditions: creates objects of the studentType.
//                 and outputs them to a file after reading them from a file.

#include <iostream>
#include "listType.h"
#include "dateType.h"
#include "studentType.h"


using namespace std;

void read(listType<studentType>&);
void output(const listType<studentType>&);

int main()
{
   listType<studentType> students;
   read(students);
   output(students);
  
  
 return 0; 
}