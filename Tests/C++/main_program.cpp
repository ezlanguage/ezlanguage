/*
* Par ANDRES Hervé
*/

#include <iostream>

int max_i = 5;

void showData (int x, std::string c){
  std::cout << x << " fois " << c << std::endl;
}


int main(){
    int i = 0;
    
    std::string c = "hello";
    
    for(i=0; i < max_i; i++){
      showData(i, c);
    }
    
    return 0;
}
