//Joshua DeNio
//Using the radius of a circle find the diameter, circumference, and area.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pie = 3.141592653589793238;

int main(){
  double radius, diameter, circumference, area;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  
  //Math out everything
  diameter = radius*2;
  circumference = 2*pie*radius;
  area = pie * pow(radius,2);

  //format and output results
  cout << "The diameter of the circle is: " << setprecision(2) << fixed << diameter << endl;
  cout << "The circumference of the circle is: " << setprecision(2) << fixed << circumference << endl;
  cout << "The area of the circle is: " << setprecision(2) << fixed << area << endl;
  

  return 0;
}