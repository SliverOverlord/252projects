#include <iostream>
int main(){

  int score = 98;
  double height = 3.4;

  int *scorePtr = NULL;
  *scorePtr = 44;
  
  
  std::cout << &score << std::endl;
  std::cout << &height << std::endl;
}