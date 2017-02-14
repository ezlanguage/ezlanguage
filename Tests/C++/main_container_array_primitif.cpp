//
//  Created by  Fatima AMZIL
//  About : Simple test program about array container for objects in C++
//

#include "Array.h"

/*Usage (in main function)*/

int main(int argc, char* argv[]) {

    cout<<"###### Test program of array of primitif ######"<endl;
    /*declare an array of 10 integers*/
    Array<int> tab(10);

    /*fill with value 1*/
    tab.fill(1);

    /*randomize array with value between 1 and 100*/
    tab.randomize(1, 100);


    /*print*/
    tab.print();

    /*max*/
    tab.max();

    /*min*/
    tab.min();

    /*sort*/
    tab.sort();
    tab.print();
    /*sum*/
    cout << "sum= "<<tab.sum() << endl;

    /*count*/
    cout <<"88 occurred "<< tab.count(88)<<" time(s)"<< endl;

    /*remove*/
    tab.remove(10);

    /*range*/
    for (int i; i < tab.size(); i++)
        cout << tab[i] << " ";

    /*clear*/
    if(!tab.is_empty())
        tab.clear();

    return 0;

};
