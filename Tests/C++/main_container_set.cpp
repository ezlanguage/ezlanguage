/**
 * Created by : Fatima AMZIL
 * About : this is a simple test program about set container in C++.
 */

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

/*PERSON CLASS*/
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

    friend bool operator==(const Person& lhs, const Person& rhs) {
        return (lhs.age == rhs.age && lhs.name == rhs.name);
    }

    friend ostream &operator<<(ostream &out, Person &obj) {
        return out << obj.name << " " << obj.age;
    }

    friend istream &operator>>(std::istream &is, Person &obj) {
        return is >> obj.name >> obj.age;
    }

    friend bool operator< (const Person &left, const Person &right)
    {
        return left.age < right.age;
    }
};


/*print set*/
template<class T>
void print(set<T> & s){
    cout << "[";
    for (T i : s) {
        cout<< i <<", ";
    }
    cout << "]" << endl;
}




int main(int argc, char* argv[]) {

    /* Declaring a set of integers and persons*/
    set<int> s={10,5,2};
    set<Person> persons;
    Person p1("person1",20);
    Person p2("person2",50);

    /*insert in set container*/
    s.insert(20);
    persons.insert(p1);
    persons.insert(p2);


    /*max and min in integer set*/
    int max=*(max_element(s.begin(), s.end()));
    cout<<"max integer= "<<max<<endl;
    int min= *(min_element(s.begin(), s.end()));
    cout<<"min integer= "<<min<<endl;

    /*max and min in persons set*/
    Person oldest=*(max_element(persons.begin(), persons.end()));
    cout<<"The oldest= "<< oldest <<endl;
    Person youngest=*(min_element(persons.begin(), persons.end()));
    cout<<"The youngest= "<< youngest <<endl;

    /*remove element*/
    s.erase(10);
    persons.erase(p2);

    /*print out sets*/
    print(s);
    print(persons);

    /*clear if empty*/
    if(s.empty()) s.clear();
    if(persons.empty()) persons.clear();

    return 0;
}
