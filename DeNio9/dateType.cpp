// File: dateType.cpp
// Author:  Joshua DeNio
// Program: 8
// Date:    04/10/18

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

istream& operator>>(istream& i,dateType& d)
{
   
   int month;
   int day;
   int year;
   char slash;
   
   i >> month;
   i >> slash;
   i >> day;
   i >> slash;
   i >> year;
   if(day > 31 || day < 1)
     cerr << " Invalid day" << endl;
   else if (month < 1 || month > 12)
     cerr << " Invalid month" << endl;
   else
    d.setDate(month,day,year);
   return i;
}

ostream& operator<<(ostream& out,const dateType& d)
{
   int tmpMonth;
   int tmpDay;
   int tmpYear;
   string sMonth;
   //initualize tmp veriabls.
   tmpMonth = d.getMonth();
   tmpDay = d.getDay();
   tmpYear = d.getYear();
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
   out << sMonth << " " << tmpDay << ", " << tmpYear;
   return out;
}

bool dateType::operator==(const dateType& d) const
{
   if ( getDay() == d.getDay() && getMonth() == d.getMonth() && getYear() == d.getYear())
     return true;
   else 
     return false;
}

bool dateType::operator<(const dateType& d) const
{
   if (getYear() < d.getYear())
     return true;
   else if(getYear() == d.getYear() && getMonth() < d.getMonth())
     return true;
   else if (getYear() == d.getYear() && getMonth() == d.getMonth() && getDay() < d.getDay())
     return true;
   else 
     return false;
}

bool dateType::operator<=(const dateType& d) const
{
   return *this<d || *this==d;
}

bool dateType::operator>(const dateType& d) const
{
   return !(*this<=d);
}

bool dateType::operator>=(const dateType& d) const
{
   return !(*this<d);
}


bool dateType::operator!=(const dateType& d) const
{
   return !(*this==d);
}




