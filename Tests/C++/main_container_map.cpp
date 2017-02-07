//Created by NAJI Ibtissam

#include <iostream>
#include <map>

using namespace std;

int main() {
    //Declaration
    map<char, int> myMap;

    //Insert
    myMap.insert(pair<char, int>('a', 1));
    myMap.insert(pair<char, int>('b', 2));
    myMap.insert(pair<char, int>('c', 3));
    cout << "The values are inserted" << endl;

    //Print size
    cout << "The size of myMap : " << myMap.size() << endl;

    //Test if myMap is empty
    if (myMap.empty())
        cout << "The map is empty" << endl;
    else
        cout << "The map is not empty" << endl;

    //Print
    for (const auto &p : myMap) {
        std::cout << "myMap[" << p.first << "] = " << p.second << '\n';
    }

    //Check if key existed
    if (myMap.find('a') != myMap.end()) {
        cout << "Key a found" << endl;
    } else {
        cout << "Key a not found" << endl;
    }

    //Return value by key
    cout << "The value of the key a :  ";
    cout << myMap.at('a') << endl;

    //Delete pair by key
    myMap.erase('b');
    cout << "The pair with key b has erased " << endl;
    for (const auto &p : myMap) {
        std::cout << "myMap[" << p.first << "] = " << p.second << '\n';
    }


    //Clear the map
    myMap.clear();
    cout << "All pairs are removed " << endl;

    //Print size
    cout << "The size of myMap : " << myMap.size() << endl;


    return 0;
}


