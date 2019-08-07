// File: main.cpp
// Author:  Joshua DeNio
// Program: 9
// Date:    04/16/18

// Description: This file contains code for the main program.

// Function: main
// Description: This file contains the main
// Input:  none
// Output: print to terminal.
// Preconditions:  <none>
// Postconditions: creates objects of the dateType.
//                 and of the personType and tests them.


#include "dateType.h"
#include "personType.h"

using namespace std;

int main()
{
  int d;
  int m;
  int y;
  
  dateType date1;
  dateType date2;
  
  m = 2;
  d= 3;
  y = 1988;
  date1.setDate(m,d,y);
  cout << date1 << endl;
  
  
  m = 3;
  d = 4;
  y = 2000;
  date2.setDate(m,d,y);
  if(date1 < date2)
    cout << date1 << " is < " << date2 << endl;
  personType person0("Bill Lee",date2);
  cout << "testing constructor with arguments:" << endl;
  cout << person0 << endl;
  
  cout << "Testing default constructor no input" << endl;
  personType person1;
  cout << person1 << endl;
  
  cout << "testing setName with default date" << endl;
  person1.setName( "Josh DeNio");
  cout << person1<< endl;
  
  cout << "testing setBirthday" << endl;
  person1.setBirthday(date1);
  cout << person1 << endl;
  
  cout << "new default entry" << endl;
  personType person2;
  cout << person2 << endl;
  
  cout << "testing setBirthday and setName" << endl;
  person2.setName("John Smith");
  person2.setBirthday(date2);
  cout << person2 << endl;
  string tf;
  cout << "Testing == should be true :" << endl;
  if (person1 == person1)
  {
    cout << "true" << endl;
  }
  cout << "Testing == should be false :" << endl;
  if (person1 == person2)
  {
    cout << "true" << endl;
  }
  else 
    cout << "false" << endl;
  cout << "Testing < should be false :" << endl;
  if (person2 < person1)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "Testing <= should be true :" << endl;
  if (person1 <= person2)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "Testing > should be false :" << endl;
  if (person1 > person2)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "Testing >= should be true :" << endl;
  if (person2 >= person1)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  cout << "Testing != should be true :" << endl;
  if (person1 != person2)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  
  
 return 0; 
}