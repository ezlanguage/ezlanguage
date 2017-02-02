/*
* Par ANDRES Hervé
*/

#include <iostream>

void addition(int &A, int &B, int &C){
  C = A + B;
}

void addition(int &A, int &B, int &D, int &C){
  C = A + B + D;
}

int main(){
    int a = 5;
    int b = 10;
    int d = 10;
    int c;
    addition(a, b, c);
    std::cout << c << std::endl;
    addition(a, b, d, c);
    std::cout << c << std::endl;
    return 0;
}
