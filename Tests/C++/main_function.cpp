/*
* Par ANDRES Hervé
*/

#include <iostream>

int addition(int &A, int &B){
  int C = A + B;
  return C;
}

int main(){
    int a = 5;
    int b = 10;
    int c = addition(a,b);
    std::cout << c << std::endl;
    return 0;
}
