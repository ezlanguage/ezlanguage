/*
* Par ANDRES Hervé
*/

#include <iostream>
#include <set>
#include <algorithm>

int main(){
    std::set<int> s ={10, 5, 2};
    
    s.insert(20);
    
    for(auto it:s){
        std::cout << " " << it << std::endl;
    }
    
    int min, max, sum;
    min = *(min_element(s.begin(), s.end()));
    max = *(max_element(s.begin(), s.end()));
    sum = accumulate(s.begin(), s.end(), 0);
    
    std::cout << "Max : " << max << std::endl;
    std::cout << "Min : " << min << std::endl;
    std::cout << "Sum : " << sum << std::endl;
    
    s.erase(2);
    for(auto it:s){
        std::cout << " " << it << std::endl;
    }
    
    return 0;
}
