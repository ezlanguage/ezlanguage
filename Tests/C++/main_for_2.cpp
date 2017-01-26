#include <iostream>

int main(){
    int a = 0,
        b = 10,
        var = 0;
        
    for(int i = a; i < b; i++){
        var = var + 1;
    }
    
    std::cout << var << std::endl;
    
    return 0;
}
