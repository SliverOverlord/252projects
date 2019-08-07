// File: main.cpp
// Author:  Joshua DeNio
// Program: 11
// Date:    04/16/18

// Description: This file contains code for the main program.

// Function: main
// Description: This file contains the main
//		program and tests the baseConvert class.
// Input:  none
// Output: print to terminal.
// Preconditions:  <none>
// Postconditions: Uses the baseConvert class to conver decimals to binary
//		and binary to decimal.

#include <iostream>
#include "baseConvert.h"
using namespace std;


int main()
{
cout << "0 decimal is " << baseConvert::Dec2Bin(0) << " binary" << endl;
cout << "0 binary is " << baseConvert::Bin2Dec(0) << " decimal" << endl;

cout << "1 decimal is " << baseConvert::Dec2Bin(1) << " binary" << endl;
cout << "1 binary is " << baseConvert::Bin2Dec(1) << " decimal" << endl;

cout << "5 decimal is " << baseConvert::Dec2Bin(5) << " binary" << endl;
cout << "101 binary is " << baseConvert::Bin2Dec(101) << " decimal" << endl;

cout << "10 decimal is " << baseConvert::Dec2Bin(10) << " binary" << endl;
cout << "1010 binary is " << baseConvert::Bin2Dec(1010) << " decimal" << endl;

cout << "16 decimal is " << baseConvert::Dec2Bin(16) << " binary" << endl;
cout << "10000 binary is " << baseConvert::Bin2Dec(10000) << " decimal" << endl;

cout << "20 decimal is " << baseConvert::Dec2Bin(20) << " binary" << endl;
cout << "10100 binary is " << baseConvert::Bin2Dec(10100) << " decimal" << endl;

cout << "200 decimal is " << baseConvert::Dec2Bin(200) << " binary" << endl;
cout << "11001000 binary is " << baseConvert::Bin2Dec(11001000) << " decimal" << endl;


return 0;
}