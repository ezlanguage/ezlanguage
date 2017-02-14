#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


int main() {

    list<int> l;
    std::list<int>::iterator it;

    for (int i = 0; i < 10; ++i) {
        l.push_back(5);
    }


    cout << "The list contains : " << endl;
    for (auto it:l) {
        cout << "   " << it;
    }
    cout << endl;

    l.clear();

    cout << "The list contains : " << endl;
    for (auto it:l) {
        cout << "nothing..." << it;
    }
    cout << "nothing..." << endl;
    cout << endl;

    srand(time(NULL));
    for (int i = 0; i < 10; ++i) {
        l.push_back((rand() % (100 - 1) + 1));
    }

    cout << "The list contains : " << endl;
    for (auto it:l) {
        cout << "   " << it;
    }
    cout << endl;

    it = max_element(l.begin(), l.end());
    cout << "max element : " << *it << endl;

    it = min_element(l.begin(), l.end());
    cout << "min element : " << *it << endl;

    l.sort();

    cout << "The list contains : " << endl;
    for (auto it:l) {
        cout << "   " << it;
    }
    cout << endl;

    cout << "Sum : " << accumulate(l.begin(), l.end(), 0)<<endl;


    int nbr = 10;
    int i=0;
    for (it = l.begin(); it != l.end(); ++it) {
        if(*it==nbr)
            i++;
    }
    cout << "count : " <<i<<endl;

    l.remove(10);
    cout<<"Size : "<<l.size()<<endl;

    cout<<"First element : "<<l.front()<<endl;


    cout<<"Last element : "<<l.back()<<endl;


    return 0;
}


