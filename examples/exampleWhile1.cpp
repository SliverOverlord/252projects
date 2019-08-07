#include <iostream>
using namespace std;
const sentinal = 0;
int main(){
  int count = 0;
  int sum = 0;
  int num;
  double average;
  
  while(num != sentinal){
      cin >> num;
      
      
      cerr << "here \n";
      cerr << "sum: " << sum << endl;
      
      
      sum = sum+num;
      count = count +1;
  }
    return 0;
}