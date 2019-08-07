// File: dateType.h
// Author:  Joshua DeNio
// Program: 7
// Date:    03/27/18

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

using namespace std;
class dateType
{
   public:
      //constructors
      dateType();
      dateType(const int& month,const int& day, const int& year);
      
      
      //Build getters and setters
      void setDate(const int& month,const int& day, const int& year);
      int getMonth() const;
      
      int getDay() const;
      
      int getYear() const;
      
      // print function
      void print() const;
      

   private:
     //Declare veriables for date
      int  month;
      int day;
      int year;
      
};
#endif