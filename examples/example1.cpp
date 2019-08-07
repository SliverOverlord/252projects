#include <iostream>
using namespace std;
int main(){
  int smaller, larger, temp;
  cout << "Enter smaller and larger: ";
  cin >> smaller >> larger;
  if (smaller > larger){
    temp = smaller;
    smaller = larger;
    larger = temp;
  }
  cout << "Smaller =  " << smaller << "Larger = " << larger << endl;


  return 0;
}