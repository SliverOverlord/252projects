// File: timeType.h
// Author:  Joshua DeNio
// Program: 8
// Date:    04/10/18

// Description: This file contains declarations for the class timeType

// Function: timeType
// Description: This .h file outlines the time class
// Input:  none
// Output: none
// Preconditions:  Time input must be correct.
// Postconditions: creates an object of the timeType.
#ifndef _timeType_
#define _timeType
#include <iostream>

using namespace std;
class timeType
{
   public:
     
      // method - default constructor
      // description - creates an object of the class
      // preconditions - none
      // postconditions - creates a timeType object
      // method input - none
      // method output - none
      timeType();
      
      // method - constructor
      // description - creates an object of the class
      // preconditions - none
      // postconditions - creates a timeType object
      // method input - int hour, int min
      // method output - none
      timeType(const int& hour,const int& min);
      
      
      //Getters and setters
      
      // method - getHours
      // description - getter for hours
      // preconditions - there must be a valid object
      // postconditions - none
      // method input - none
      // method output - int hours
      int getHours() const;
      
      // method - getMinutes
      // description - getter for minutes
      // preconditions - There must be a valid object
      // postconditions - none
      // method input - none
      // method output - int minutes
      int getMinutes() const;
      
      // method - setTime
      // description - setter for timeType
      // preconditions - there must be a valid object
      // postconditions - sets the hours and minutes
      // method input - int hour, int min
      // method output - none
      void setTime(const int& hour,const int& min);
      
      // method - print
      // description - prints out the hours and minutes
      // preconditions - there must be a valid object
      // postconditions - prints
      // method input - none
      // method output - none
      void print() const;
      
      // method - < overload
      // description - Adds deffinition to <
      // preconditions - none
      // postconditions - definition added to <
      // method input - timeType
      // method output - bool
      bool operator<(const timeType&) const; 
      // method - < overload
      // description - Adds deffinition to <
      // preconditions - none
      // postconditions - definition added to <
      // method input - timeType
      // method output - bool
      bool operator<=(const timeType&) const; 
      // method - <= overload
      // description - Adds deffinition to <=
      // preconditions - none
      // postconditions - definition added to <=
      // method input - timeType
      // method output - bool
      bool operator>(const timeType&) const; 
      // method - > overload
      // description - Adds deffinition to >
      // preconditions - none
      // postconditions - definition added to >
      // method input - timeType
      // method output - bool
      bool operator>=(const timeType&) const; 
      // method - >= overload
      // description - Adds deffinition to >=
      // preconditions - none
      // postconditions - definition added to >=
      // method input - timeType
      // method output - bool
      bool operator==(const timeType&) const; 
      // method - == overload
      // description - Adds deffinition to ==
      // preconditions - none
      // postconditions - definition added to ==
      // method input - timeType
      // method output - bool
      bool operator!=(const timeType&) const; 

   private:
     //Declare veriables for time
      int  hours;// Hours
      int minutes;//minutes
      
};
// method - << overload
// description - prints out the hours and minutes
// preconditions - there must be a valid object
// postconditions - prints
// method input - none
// method output - none
ostream& operator<<(ostream&,const timeType&);
// method - >> overload
// description - overloads >> instream
// preconditions - there must be a valid object
// postconditions - feeds input
// method input - instream, object
// method output - stream
istream& operator>>(istream&,timeType&);

#endif