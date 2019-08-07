/*
project 2
Joshua DeNio
*/
// imports
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int sentinal = -999;

// def main
int main(){
  // init veriabls
  string month;
  int day;
  int high;
  int low;
  int celHigh;
  int celLow;
  int count = 0;
  int maxHigh;
  int maxLow;
  int minHigh;
  int minLow;
  double highSum = 0;
  double lowSum = 0;
  double aveHigh;
  double aveLow;
  
  // get input
  cout << "Enter the month: ";
  cin >> month;
  
  cout << "Enter the day of the month: ";
  cin >> day;
  
  // prime the loop
  cout << "Enter The high temperature on "<< month << " " << day << ": ";
  cin >> high;
  maxHigh = high;
  minHigh = high;
  minLow = high;
  
  // while loop
  while (high != sentinal){
    cout << "Enter the low temperature on " << month << " " << day << ": ";
    cin >> low;
    celHigh = round((5.0/9)*(high - 32));
    celLow = round((5.0/9)*(low - 32));
    // display 
    cout << "High: " << high << " degrees F, " << celHigh << " degrees C" << endl;
    cout << "Low: " << low << " degrees F, " << celLow << " degrees C" << endl;

    
    //set max and mins
    if ( count == 0)
      maxLow = low;
    if ( high > maxHigh)
      maxHigh = high;
    if (low > maxLow)
      maxLow = low;
    
    if (high < minHigh)
      minHigh = high;
    if (low < minLow)
      minLow = low;
    
    count++;
    day++;
    highSum = highSum + high;
    lowSum = lowSum + low;
    
    //get new input
    cout << "Enter The high temperature on "<< month << " " << day << ": ";
    cin >> high;
  }
  // get averages
  aveHigh = highSum/count;
  aveLow = lowSum/count;
  
  //output summary
  cout << endl;
  cout << "Summary"<< endl;
  cout << "-------" << endl;
  cout << "Span of Days : " << month << " " << day - count << "-" << day - 1 << endl;
  cout << "Maximum high temperature: " << maxHigh << " F, " << round((5.0/9)*(maxHigh - 32)) << " C" << endl;
  cout << "Minimum high temperature: " << minHigh << " F, " << round((5.0/9)*(minHigh - 32)) << " C" << endl;
  cout << "Maximum low temperature: " << maxLow << " F, " << round((5.0/9)*(maxLow - 32)) << " C" << endl;
  cout << "Minimum low temperature: " << minLow << " F, " << round((5.0/9)*(minLow - 32)) << " C" << endl;
  cout << "Average high temperature: " << setprecision(2) << fixed << aveHigh << " F, " << setprecision(2) << fixed << (5.0/9)*(aveHigh - 32) << " C" << endl;
  cout << "Average low temperature: " << setprecision(2) << fixed << aveLow << " F, " << setprecision(2) << fixed << (5.0/9)*(aveLow - 32) << " C" << endl;
  
  return 0;
}