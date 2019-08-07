// File: dateType.cpp
// Author:  Joshua DeNio
// Program: 9
// Date:    04/10/18

// Description: This file contains code for the class personType

// Function: personType class
// Description: This file contains the personType class
// Input:  
// Output: 
// Preconditions:  The date input must be valid for the personType.
// Postconditions: creates an object of the personType.

#include <iomanip>
#include <iostream>
#include <string>

#include "dateType.h"
#include "personType.h"

using namespace std;

//default constructor
personType::personType()
{
  dateType bDay;
  bDay.setDate(1,1,2000);
  string tmpName = "default name";
  
  setName(tmpName);
  setBirthday(bDay);
  
}

personType::personType(const string& newName, const dateType& birthdate)
{
  setName(newName);
  setBirthday(birthdate);
  
}

void personType::setName(const string& newName)
{
  name = newName;
}

void personType::setBirthday(dateType birthDate)
{
  birthday = birthDate;
}

string personType::getName() const
{
  return name;
}

dateType personType::getBirthday() const
{
  return birthday;
}

bool personType::operator==(const personType& p) const
{
  return getBirthday() == p.getBirthday();
}

bool personType::operator<(const personType& p) const
{
  return getBirthday() < p.getBirthday();
}

bool personType::operator<=(const personType& p) const
{
   return *this<p || *this==p;
}

bool personType::operator>(const personType& p) const
{
   return !(*this<=p);
}

bool personType::operator>=(const personType& p) const
{
   return !(*this<p);
}

bool personType::operator!=(const personType& p) const
{
   return !(*this==p);
}



istream& operator>>(istream& i,personType& p)
{
  int month;
  int day;
  int year;
  char slash;
  string tmpName;
  
  dateType birthday;
  
  getline(i, tmpName);
  
  p.setName(tmpName);
  i >> month;
  i >> slash;
  i >> day;
  i >> slash;
  i >> year;
  birthday.setDate(month,day,year);
  p.setBirthday(birthday);
  return i;
}


ostream& operator<<(ostream& out,const personType& p)
{
   
   out << p.getName() << " " << p.getBirthday();
   return out;
}