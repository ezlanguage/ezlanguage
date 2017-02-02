#include <iostream>

void addition(int &A, int &B, int &C){
  C = A + B;
}

int main(){
    int a = 5;
    int b = 10;
    int c;
    addition(a, b, c);
    std::cout << c << std::endl;
    return 0;
}
