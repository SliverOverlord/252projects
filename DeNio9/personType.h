// File: personType.h
// Author:  Joshua DeNio
// Program: 9
// Date:    04/16/18

// Description: This file contains declarations for the class personType

// Function: personType
// Description: This .h file outlines the person class
// Input:  none
// Output: none
// Preconditions:  birthdate must be valid.
// Postconditions: creates an object of the personType.

#ifndef _personType_
#define _personType_
#include <iostream>
#include <string>

using namespace std;
class personType
{
  public:
    // method - default constructor
    // description - creates an object of the class
    // preconditions - none
    // postconditions - creates a personType object
    // method input - none
    // method output - none
    personType();
    
      // method - constructor
      // description - creates an object of the class
      // preconditions - none
      // postconditions - creates a personType object
      // method input - string firstName string lastName, dateType birthdate
      // method output - none
      personType(const string& newName, const dateType& birthdate);
      
      //Getters and setters
      
      // method - setName
      // description - sets first and last name
      // preconditions - there must be a valid object
      // postconditions - sets first and last name
      // method input - string firstName string lastName
      // method output - none
      
      void setName(const string& newName);
      
      // method - setBirthday
      // description - sets the birthdate
      // preconditions - there must be a valid object
      // postconditions - sets the objects birthdate
      // method input - string newName
      // method output - none
      
      void setBirthday(const int& month, const int& day, const int& year);
      
      // method - setBirthday
      // description - sets the birthdate
      // preconditions - there must be a valid object
      // postconditions - sets the objects birthdate
      // method input - int month, int day, int year
      // method output - none
      void setBirthday(const dateType birthday);
      
      // method - getName
      // description - getter for name
      // preconditions - there must be a valid object
      // postconditions - none
      // method input - none
      // method output - string name
      string getName() const;
      
      // method - getBirthday
      // description - getter for birthday
      // preconditions - there must be a valid object
      // postconditions - none
      // method input - none
      // method output - dateType bithday
      dateType getBirthday() const;
      
      bool operator<(const personType&) const; 
      // method - < overload
      // description - adds new definition to <
      // preconditions - none
      // postconditions - none
      // method input - persontype
      // method output - bool
      
      bool operator<=(const personType&) const; 
      // method - <= overload
      // description - adds new definition to <=
      // preconditions - none
      // postconditions - none
      // method input - personType
      // method output - bool
      
      bool operator>(const personType&) const; 
      // method - > overload
      // description - adds new definition to >
      // preconditions - none
      // postconditions - none
      // method input - persontype
      // method output - bool
      
      bool operator>=(const personType&) const; 
      // method - >= overload
      // description - adds new definition to >=
      // preconditions - none
      // postconditions - none
      // method input - persontype
      // method output - bool
      
      bool operator==(const personType&) const; 
      // method - == overload
      // description - adds new definition to ==
      // preconditions - none
      // postconditions - none
      // method input - persontype
      // method output - bool
      bool operator!=(const personType&) const; 
      
      private:
     //Declare veriables for person
      dateType birthday;
      string name;
      
};
  
ostream& operator<<(ostream&,const personType&);
istream& operator>>(istream&,personType&);
#endif
