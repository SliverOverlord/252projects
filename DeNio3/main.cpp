// File:      <DeNio3>
// Name:      <Joshua DeNio>
// Class:     CSIS 252
// Program:   assignment #3
// Date:      <2/5/2018>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program deminstrates functions of arrays.
const int sentinel = 0;
const int arraySize = 20;

int main(){
  //Declare veriables.
  int posInts[arraySize];
  int negInts[arraySize];
  int absArray[arraySize];
  int evenArray[arraySize];
  int oddArray[arraySize];
  
  int posCount;
  int negCount;
  int num;
  
  int evenCount;
  int oddCount;
  int sumCount;
  int sumEven;
  int oddSumCount;
  int oddSum;
  
  int pos;
  bool found;
  
  double aveEven;
  double aveOdd;
  
  // get input
  cout << "Enter Ints or " << sentinel << " to quit: " << endl;
  cin >> num;
  // initualize counters.
  posCount = 0;
  negCount = 0;
  
  //step 1
  // get all input and sort it into two arrays.
  // only uses a maximum of 20 positive and 20 negitive numbers.
  while (num != sentinel)
  {
    if (num > 0 && posCount < arraySize)
    {
     posInts[posCount] = num; 
     posCount++;
     
    }
    if (num < 0 && negCount < arraySize)
    {
      negInts[negCount] = num;
      negCount++;
    }
    cin >> num;
  }
  
  //step 2
  // outputs the negitive array.
  for (int i =0; i<negCount; i++)
    cout << negInts[i] << ' ' ;
  cout << endl;
  
  //step 3
  //outputs the absolute value of each eliment in the negitive array in reverse order.
  for (int i =0; i<negCount; i++)
  {
    absArray[i] = abs(negInts[i]);
  }
  
  for (int i = negCount; i-- > 0;)
  {
   cout << absArray[i] << ' ' ;
  }
  cout << endl;
  
  
  //step 4
  // sort out the evens and odds in the positive array into seperate arrays.
  evenCount = 0;
  oddCount = 0;
  for (int i = 0; i < posCount; i++)
  {
    if (posInts[i] % 2 == 0)
    {
      
      evenArray[evenCount] = posInts[i];
      evenCount++;
    }
    else
    {
      oddArray[oddCount] = posInts[i];
      oddCount++;
      
    }
  }
  
  for (int i = 0; i < evenCount; i++)
  {
   cout << evenArray[i] << " "; 
  }
  cout << endl;
  for (int i = 0; i < oddCount; i++)
  {
   cout << oddArray[i] << ' '; 
  }
  cout << endl;
  
  //step 5
  //output the average of the even positive array.
  sumCount = 0;
  sumEven = 0;
  for (int i = 0; i < evenCount; i++)
  {
   sumEven = sumEven + evenArray[i];
   sumCount++;
  }
  aveEven = static_cast<double>(sumEven)/sumCount;
  cout << setprecision(2) << fixed << aveEven << endl;

  //step 6
  //output the average odd.
  oddSumCount = 0;
  oddSum = 0;
  for (int i; i < oddCount; i++)
  {
   oddSum = oddSum + oddArray[i];
   oddSumCount++;
  }
  aveOdd = static_cast<double>(oddSum) / oddSumCount;
  cout << aveOdd << endl;
  
  //Step 7
  // find the first number <= to the average
  found = false;
  pos = 0;
  while (!found && pos < evenCount)
  {
   if (evenArray[pos] <= aveEven)
     found = true;
   else
     pos++;
  }
  if (found)
      cout << evenArray[pos] << " found at position " << pos << endl;
   
  //Step 8
  //find the first value >= to the average of the odd numbers from the back.
  found = false;
  pos = oddCount;
  while (!found && pos >= 0)
  {
   if (evenArray[pos] >= aveOdd)
     found = true;
   else
     pos--;
  }
  if (found)
      cout << oddArray[pos] << " found at position " << pos << endl;

  return 0;
}
