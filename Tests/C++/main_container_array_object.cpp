//
// Created by Fatima AMZIL about test example of array container of type object in C++
//

#include "Array.h"

using namespace std;

class Person {

public:
    string name;
    int age;

    Person():name(""),age(0){};

    Person(string n, int a):name(n), age(a) {};

    Person(const Person &p):name(p.name), age(p.age){}

    ostream &print(ostream &out) {
        out << name << ", " << age;
    }
    /*overloading operator == to compare two persons*/
    friend bool operator==(const Person& lhs, const Person& rhs) {
        return (lhs.age == rhs.age && lhs.name == rhs.name);
    }
    /*overloading operator<< to print a person*/
    friend ostream &operator<<(ostream &out, Person &obj) {
        return out << obj.name << " " << obj.age;
    }
    /*overloading operator<< to read a person*/
    friend istream &operator>>(std::istream &is, Person &obj) {
        return is >> obj.name >> obj.age;
    }
};


int main(int argc, char* argv[]) {
    srand((unsigned int) time(NULL));
    /*declare an array of 10 Persons*/
    Array<Person> persons(10);

    /*randomize array with age value between 1 and 100*/
    for (int i = 0; i < persons.size(); ++i){
        persons[i].age=rand() % (100 - 1) + 1;
    }

    /*print persons*/
    persons.print();

    /*max age*/
    int max = 0;
    for (int i = 0; i < persons.size(); ++i)
            if  (persons[i].age > max)
                max = persons[i].age;

    /*sort by age*/
    std::sort(&persons[0], &persons[persons.size()], [](const Person& p1, const Person& p2){return p1.age < p2.age;});

    persons.print();


return 0;

}
