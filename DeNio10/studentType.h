// File: studentType.h
// Author:  Joshua DeNio
// Program: 10
// Date:    04/23/18

// Description: This file contains declarations for the class studentType

// Function: studentType
// Description: This .h file outlines the student class
//              this class inherits from the personType class.
// Input:  
// Output: 
// Preconditions:  None.
// Postconditions: creates an object of the studentType.

#ifndef _STUDENTTYPE_
#define _STUDENTTYPE_
#include "dateType.h"
#include "personType.h"


class studentType : public personType
{
public:
  // method - default constructor
  // description - creates an object of the class
  // preconditions - none
  // postconditions - creates a studentType object
  // method input - none
  // method output - none
  studentType();
  
  // method - constructor
  // description - creates an object of the class
  // preconditions - none
  // postconditions - creates a studentType object
  // method input - int score
  // method output - none
  studentType(int);
  
  //Getters and setters
      
  // method - setScore
  // description - sets the score
  // preconditions - there must be a valid object
  // postconditions - sets the score
  // method input - int tmpScore
  // method output - none
  void setScore(int);
  
  // method - getScore
  // description - getter for score
  // preconditions - there must be a valid object
  // postconditions - none
  // method input - none
  // method output - int score
  int getScore() const;
  
  bool operator<(const studentType&) const; 
  // method - < overload
  // description - adds new definition to <
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
   
  bool operator<=(const studentType&) const; 
  // method - <= overload
  // description - adds new definition to <=
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
      
  bool operator>(const studentType&) const; 
  // method - > overload
  // description - adds new definition to >
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
      
  bool operator>=(const studentType&) const; 
  // method - >= overload
  // description - adds new definition to >=
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
      
  bool operator==(const studentType&) const; 
  // method - == overload
  // description - adds new definition to ==
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
  bool operator!=(const studentType&) const; 
  // method - != overload
  // description - adds new definition to !=
  // preconditions - none
  // postconditions - none
  // method input - studentType
  // method output - bool
private:
  //Declare veriables for studentType.
  int score;
};
ostream& operator<<(ostream&,const studentType&);
istream& operator>>(istream&,studentType&);
#endif