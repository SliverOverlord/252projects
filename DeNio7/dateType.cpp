// File: dateType.cpp
// Author:  Joshua DeNio
// Program: 7
// Date:    03/27/18

// Description: This file contains code for the class dateType

// Function: dateType class
// Description: This file contains the dateType class
// Input:  
// Output: 
// Preconditions:  The date input must be accurate.
// Postconditions: creates an object of the dateType.

#include <iomanip>
#include <iostream>
#include <string>

#include "dateType.h"
using namespace std;

//default constructor
dateType::dateType()
{
   setDate(1,1,2000);
   
}


dateType::dateType(const int& month,const int& day, const int& year)
{
   setDate(month,day,year);
   
}

void dateType::setDate(const int& tmonth, const int& tday, const int& tyear)
{
 month = tmonth;
 day = tday;
 year = tyear; 
}

int dateType::getMonth() const
{
  return month;
}

int dateType::getDay() const
{
 return day; 
}

int dateType::getYear() const
{
 return year; 
}

void dateType::print() const
{
  int tmpMonth;
  int tmpDay;
  int tmpYear;
  string sMonth;
  //initualize tmp veriabls.
  tmpMonth = getMonth();
  tmpDay = getDay();
  tmpYear = getYear();
  //Use switch statment to find the month
  switch (tmpMonth)
  {
    case 1 : sMonth = "January"; break;
    case 2 : sMonth = "Febuary"; break;
    case 3 : sMonth = "March"; break;
    case 4 : sMonth = "April"; break;
    case 5 : sMonth = "May"; break;
    case 6 : sMonth = "June"; break;
    case 7 : sMonth = "July"; break;
    case 8 : sMonth = "August"; break;
    case 9 : sMonth = "September"; break;
    case 10 : sMonth = "October"; break;
    case 11 : sMonth = "November"; break;
    default : sMonth = "December"; break;
  }
  cout << sMonth << " " << tmpDay << ", " << tmpYear << endl;
    
  
}

