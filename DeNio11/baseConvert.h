// File: baseConvert.h
// Author:  Joshua DeNio
// Program: 11
// Date:    04/30/18

// Description: This file contains declarations for the class baseConvert

// Function: baseConvert
// Description: This .h file outlines the baseConvert class
//              The class has two functions Dec2Bin and Bin2Dec.
// Input:  
// Output: 
// Preconditions:  base input must be correct.
// Postconditions: converts base to decimal

#ifndef _BaseToDec_
#define _BaseToDec_
#include <iostream>

using namespace std;
#include "queueType.h"
#include "stackType.h"
class baseConvert
{
  public:
    //function: Dec2Bin
    //Description: converts a decimal to binary
    //Input: int decimal.
    //Output: int binary.
    //Precondition: The int input must be greater >= 0.
    //Postconditions: returns an int.
    static int Dec2Bin(int decimal);
    
    //function: Bin2Dec
    //Description: converts a binary to decimal.
    //Input: int binary.
    //Output: int decimal.
    //Precondition: The int input must be a valid binary number.
    //Postconditions: returns an int.
    static int Bin2Dec(int bin);

};
#endif