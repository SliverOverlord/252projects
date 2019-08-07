// Johua DeNio
#include <iostream>
using namespace std;

#include <iomanip>
#include <cmath>

int main(){
  double distanceKM, fuelL, mpg;
  
  //get input
  cout << "Enter distance in KM: ";
  cin >> distanceKM;
  
  cout << "Enter amoutn of fuel used in liters: ";
  cin >> fuelL;
  
  //math out mileage
  mpg = distanceKM / fuelL;
  //mpg = mpg << fixed << showpoint << setprecision(2);
  cout << "MPG = " << setprecision(2) << fixed << mpg << endl;
  return 0;
}