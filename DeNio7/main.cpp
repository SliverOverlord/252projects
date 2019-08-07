// File: main.cpp
// Author:  Joshua DeNio
// Program: 7
// Date:    03/27/18

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
  
  cout << "Enter the hour: " << endl;
  cin >> h;
  cout << "Enter the min: " << endl;
  cin >> min;
  time1.setTime(h,min);
  time1.print();
  cout << "Enter a month: " << endl;
  cin >> m;
  cout << "Enter a day: " << endl;
  cin >> d;
  cout << "Enter a year: " << endl;
  cin >> y;
  date1.setDate(m,d,y);
  date1.print();
  
  
 return 0; 
}