// File: studentType.cpp
// Author: Joshua DeNio
// Program: 10
// Date: 04/23/18

// Description: This file contains the code for the studentType class.
// Function: studentType class
// Input: 
// Output:
// Preconditions:
// Postconditions: This code produces an item of the studentType as well as 
// getters and setters for the score. It also overides the relational operators.

#include "studentType.h"
using namespace std;

studentType::studentType()
{
    
    setScore(0);
}

studentType::studentType(int tmpScore)
{
 setScore(tmpScore); 
}
void studentType::setScore(int tmpScore)
{
    score = tmpScore;
}

int studentType::getScore() const
{
    return score;
}

bool studentType::operator==(const studentType& s) const
{
  return getScore() == s.getScore();
}

bool studentType::operator<(const studentType& s) const
{
  return getScore() < s.getScore();
}

bool studentType::operator<=(const studentType& s) const
{
   return *this<s || *this==s;
}

bool studentType::operator>(const studentType& s) const
{
   return !(*this<=s);
}

bool studentType::operator>=(const studentType& s) const
{
   return !(*this<s);
}

bool studentType::operator!=(const studentType& s) const
{
   return !(*this==s);
}


istream& operator>>(istream& i,studentType& s)
{
  int tmpScore;
  string tmpName;
  
  dateType birthday;
  
  getline(i, tmpName);
  
  s.setName(tmpName);
  i >> tmpScore;
  i.ignore(80,'\n');
  s.setBirthday(birthday);
  return i;
}

ostream& operator<<(ostream& out,const studentType& s)
{
   
   out << s.getName() << " " << s.getScore();
   return out;
}