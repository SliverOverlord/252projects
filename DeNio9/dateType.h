// File: dateType.h
// Author:  Joshua DeNio
// Program: 8
// Date:    04/10/18

// Description: This file contains declarations for the class dateType

// Function: dateType
// Description: This .h file outlines the date class
//              The class stores the date with 3 ints, month, day, and year.
// Input:  
// Output: 
// Preconditions:  date input must be correct.
// Postconditions: creates an object of the dateType.
#ifndef _dateType_
#define _dateType_
#include <iostream>
using namespace std;
class dateType
{
   public:
      //constructors
     
      // method - default constructor
      // description - creates an object of the class
      // preconditions - none
      // postconditions - creates a dateType object
      // method input - none
      // method output - none
      dateType();
      
      // method - constructor
      // description - creates an object of the class
      // preconditions - none
      // postconditions - creates a dateType object
      // method input - int month, int day, int year
      // method output - none
      dateType(const int& month,const int& day, const int& year);
      
      
      //Build getters and setters
      
      // method - 
      // description - 
      // preconditions - there must be a valid object
      // postconditions - 
      // method input - none
      // method output - none
      void setDate(const int& month,const int& day, const int& year);
      
      // method - 
      // description - 
      // preconditions - there must be a valid object
      // postconditions - 
      // method input - none
      // method output - none
      int getMonth() const;
      
      // method - 
      // description - 
      // preconditions - there must be a valid object
      // postconditions - 
      // method input - none
      // method output - none
      int getDay() const;
      
      // method - 
      // description - 
      // preconditions - there must be a valid object
      // postconditions - 
      // method input - none
      // method output - none
      int getYear() const;
      
      // method - print
      // description - prints out the date
      // preconditions - there must be a valid object
      // postconditions - prints
      // method input - none
      // method output - none
      void print() const;
      
      bool operator<(const dateType&) const; 
      // method - < overload
      // description - adds new definition to <
      // preconditions - none
      // postconditions - none
      // method input - datetype
      // method output - bool
      bool operator<=(const dateType&) const; 
      // method - <= overload
      // description - adds new definition to <=
      // preconditions - none
      // postconditions - none
      // method input - datetype
      // method output - bool
      bool operator>(const dateType&) const; 
      // method - > overload
      // description - adds new definition to >
      // preconditions - none
      // postconditions - none
      // method input - datetype
      // method output - bool
      bool operator>=(const dateType&) const; 
      // method - >= overload
      // description - adds new definition to >=
      // preconditions - none
      // postconditions - none
      // method input - datetype
      // method output - bool
      bool operator==(const dateType&) const; 
      // method - == overload
      // description - adds new definition to ==
      // preconditions - none
      // postconditions - none
      // method input - datetype
      // method output - bool
      bool operator!=(const dateType&) const; 
      
      

   private:
     //Declare veriables for date
      int  month; // Month
      int day; // Day
      int year; // Year
      
};

ostream& operator<<(ostream&,const dateType&);
istream& operator>>(istream&,dateType&);
#endif