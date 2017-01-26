#include <iostream>

int main(){
    int x = 10;
    switch(x){
        case 0 : std::cout << "Ouch !" << std::endl;
        break;
        case 10 : std::cout << "Vous avez juste la moyenne." << std::endl;
        break;
        case 20 : std::cout << "Parfait !" << std::endl;
        break;
        default : std::cout << "Il faut davantage travailler." << std::endl;
        break;
    }
    
    return 0;
}
