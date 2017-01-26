#include <iostream>

int main(){
    int Var = 2;
    if(Var > 3){
        std::cout << "variable supérieur à 3" << std::endl;
    }else if(Var < 0){
        std::cout << "variable négative" << std::endl;
    }else{
        std::cout << "variable positive inférieur à 3" << std::endl;
    }
    return 0;
}
