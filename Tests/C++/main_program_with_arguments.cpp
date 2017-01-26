/*
* @author dbenmoumen
* N'oubliez pas à passer les parametres en ligne de commande ex: ./hello_arg.exe "hello"
*
*
*/
#include <iostream>

int max_i = 5;

void showData (int x, std::string c){
  std::cout << x << " fois " << c << std::endl;
}


int main(int argc, char *argv[]){
    int i = 0;
    
    
    for(i=0; i < max_i; i++){
      showData(i, argv[1]);
    }
    
    return 0;
}
