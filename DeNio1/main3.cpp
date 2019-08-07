//Joshua DeNio
//find the area of a triangle using the length of the three sides.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  double side1, side2, side3, area, totalLength, halfPerimeter;
  
  cout << "Enter the length of side1: ";
  cin >> side1;
  cout << "Enter the length of side2: ";
  cin >> side2;
  cout << "Enter the length of side3: ";
  cin >> side3;
  
  //sum up all sides
  totalLength = side1+side2+side3;
  //find the halfPerimeter
  halfPerimeter = totalLength/2;
  //use Heron's formula
  area = sqrt(halfPerimeter*(halfPerimeter-side1)*(halfPerimeter-side2)*(halfPerimeter-side3));
  cout << "The area of the triangle is: " << setprecision(2) << fixed << area << endl;
  return 0;

}