// File: timeType.h
// Author:  Joshua DeNio
// Program: 7
// Date:    03/27/18

// Description: This file contains declarations for the class timeType

// Function: timeType
// Description: This .h file outlines the time class
// Input:  
// Output: 
// Preconditions:  Time input must be correct.
// Postconditions: creates an object of the timeType.


using namespace std;
class timeType
{
   public:
     
      timeType();
      timeType(const int& hour,const int& min);
      
      
      //Getters and setters
      int getHours() const;
      //void setHours(int);
      int getMin() const;
      //void setMin(int);
      void setTime(const int& hour,const int& min);
      // print function
      void print() const;
      

   private:
     //Declare veriables for time
      int  hours;
      int minutes;
      
};