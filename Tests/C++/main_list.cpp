/*
* Par ANDRES Hervé
*/

#include <iostream>
#include <list>

int main(){
    std::list<int> l;
    std::list<int>::iterator it;
    
    srand(time(NULL));
    for(int i = 0; i < 10; i++){
        l.push_back((rand()%(100-1)+1));
    }
    
    for(auto it:l){
        std::cout << " " << it << std::endl;
    }
    
    return 0;
}
