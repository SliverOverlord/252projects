// File: timeType.cpp
// Author:  Joshua DeNio
// Program: 7
// Date:    03/27/18

// Description: This file contains code for the class timeType

// Function: timeType
// Description: This file contains the timeType class
// Input:  
// Output: 
// Preconditions:  The hours and minutes input must be accurate.
// Postconditions: creates an object of the timeType.

#include "timeType.h"

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

timeType::timeType()
{
   setTime(0,0);
   
}


timeType::timeType(const int& hour,const int& min)
{
   setTime(hour,min);
   
}



int timeType::getHours() const
{
   return hours;
}


int timeType::getMin() const
{
   return minutes;
}

void timeType::setTime(const int& hour, const int& min)
{
   hours = hour;
   minutes = min;
}

void timeType::print() const
{
  int tmpHour = 0;
  int tmpMin = 0;
  int stHour = 0;
  tmpHour = getHours();
  tmpMin = getMin();
  string amPm = "";
  if (tmpHour == 24)
  {
    stHour = tmpHour-12;

    amPm = " a.m";
  }
  else if (tmpHour == 12)
  {
    stHour = tmpHour;
    amPm = " p.m";
  }
  else if(tmpHour >= 12)
  {
   
   stHour = tmpHour-12;
   amPm = " p.m";
   
  }
  else 
  {
    stHour = tmpHour;
    amPm = " a.m";
  }
  cout << stHour << ":";
  cout << setfill('0') << setw (2) << right << tmpMin;
  cout << amPm << endl;
  
  
}

