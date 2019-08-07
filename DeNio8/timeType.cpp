// File: timeType.cpp
// Author:  Joshua DeNio
// Program: 8
// Date:    04/10/18

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


int timeType::getMinutes() const
{
   return minutes;
}

void timeType::setTime(const int& hour, const int& min)
{
   hours = hour;
   minutes = min;
}

istream& operator>>(istream& i,timeType& t)
{
   int hour;
   int nHour;
   int min;
   string ampm;
   char tmp;
   i >> hour;
   i >> tmp;
   i >> min;
   i >> ampm;
   //ampm = ampm.tolower();
   //ampm = tolower(ampm);
   if (hour < 1 || hour > 12)
     cerr << "Incorect input hour is out of range" << endl;
   else if (min < 1 || min > 59)
     cerr << "Minutes are out of range" << endl;
   else
   {
     if (hour == 12 && ampm == "am")
     {
       nHour = 0;
     }
     else if ( hour == 12 && ampm == "pm")
       nHour = 12;
     else if( ampm == "pm")
       nHour = hour + 12;
      else 
	nHour = hour;
     t.setTime(hour,min);
   }
   return i;
   
   
}


ostream& operator<<(ostream& out,const timeType& time)
{
  int tmpHour = 0;
  int tmpMin = 0;
  int stHour = 0;
  tmpHour = time.getHours();
  tmpMin = time.getMinutes();
  string amPm = "";
  if (tmpHour == 0)
  {
    stHour = 12;

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
  out << stHour << ":";
  out << setfill('0') << setw (2) << right << tmpMin;
  out << amPm;
  return out;
}

bool timeType::operator==(const timeType& t) const
{
  if (getHours() == t.getHours() && getMinutes() == t.getMinutes())
    return true;
  else return false;
    
  
}

bool timeType::operator<(const timeType& t) const
{
  if (getHours() < t.getHours())
  {
   return true; 
  }
  else if(getHours() == t.getHours() && getMinutes() < t.getMinutes())
  {
    return true;
  }
  else
    return false;
}

bool timeType::operator<=(const timeType& t) const
{
   return *this<t || *this==t;
}

bool timeType::operator>(const timeType& t) const
{
   return !(*this<=t);
}

bool timeType::operator>=(const timeType& t) const
{
   return !(*this<t);
}

bool timeType::operator!=(const timeType& t) const
{
   return !(*this==t);
}






