// File: baseConvert.cpp
// Author:  Joshua DeNio
// Program: 11
// Date:    04/30/18

// Description: This file contains the class baseConvert

// Function: baseConvert
// Description: This file is the baseConvert class
//              The class has two functions Dec2Bin and Bin2Dec.
// Input:  int
// Output: int
// Preconditions:  base input must be correct.
// Postconditions: converts base to decimal

#include "baseConvert.h"
using namespace std;
#include "queueType.h"
#include "stackType.h"

int baseConvert::Dec2Bin(int decimal)
{
  int bin = 0;
  int dec = decimal;
  stackType<int> theStack;
  
  while(dec > 0 && !theStack.isFullStack())
  {
    theStack.push(dec%2);
    dec = dec / 2;
  }
  
  while ( !theStack.isEmptyStack())
  {
   bin = bin*10 + theStack.top();
   theStack.pop();
  }
  return bin;
}


int baseConvert::Bin2Dec(int bin)
{
  int decimal = 0;
  int binary = bin;
  int position = 1;
  queueType<int> que;
  
  while(binary > 0 && !que.isFullQueue())
  {
   que.addQueue(binary%10);
   binary = binary / 10;
  }
  
  while(!que.isEmptyQueue())
  {
   decimal = decimal + que.front()*position;
   que.deleteQueue();
   position = position * 2;
  }
  
  return decimal;
}

