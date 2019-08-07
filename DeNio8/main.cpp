// File: main.cpp
// Author:  Joshua DeNio
// Program: 8
// Date:    04/10/18

// Description: This file contains code for the main program.

// Function: main
// Description: This file contains the main
// Input:  keyboard
// Output: print to terminal.
// Preconditions:  <none>
// Postconditions: creates objects of the dateType.
//                 and of the timeType and tests them.

#include <iostream>
#include "dateType.h"
#include "timeType.h"

using namespace std;

int main()
{
  int d;
  int m;
  int y;
  int h;
  int min;
  timeType time1;
  dateType date1;
  dateType date2;
  
  h = 5;
  min =  20;
  time1.setTime(h,min);
  cout << time1 << endl;
  
  
  
  
  m = 2;
  d= 3;
  y = 1988;
  date1.setDate(m,d,y);
  cout << date1 << endl;
  
  m = 3;
  d = 4;
  y = 2000;
  date2.setDate(m,d,y);
  if(date1 < date2)
    cout << date1 << " is < " << date2 << endl;
  
  
 return 0; 
}