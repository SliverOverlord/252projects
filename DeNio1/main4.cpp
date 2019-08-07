//Joshua DeNio
// Using the input from side a and be find the length of the other side of the triangle.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  double sideA, sideB, sideC;
  //get input
  cout << "Enter the length of side A: ";
  cin >> sideA;
  cout << "Enter the length of side B: ";
  cin >> sideB;
  
  //use the hypot function to get the length of the hypotenuse
  sideC = hypot(sideA, sideB);
  //display output
  cout << "The length of the hypotenuse is: " << setprecision(2) << fixed << sideC << endl;
  return 0;
}