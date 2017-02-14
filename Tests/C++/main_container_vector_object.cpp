/**
 * Created by : Fatima AMZIL
 * About : this is a simple test program about vectors in EZ language on primitif type.
 */
#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

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


using namespace std;

/* Store vector content in a file */
template <typename T>
void vector_store(vector<T> &v,const char* filename){
    ofstream fout (filename);
    string line;

    if (fout.is_open()){
        fout<<v.size()<<";\n";
        for ( typename vector<T>::iterator it = v.begin(); it != v.end(); ++it ){
            fout<<*it<<"\n";
        }
        fout.close();
    } else{
        cout<<"[ERROR]: Couldn't open the file! ";
    }
}

/* Restore vector content from a file */
template <typename T>
void vector_restore(vector<T> &v,const char* filename){
    ifstream fin;
    fin.open(filename, ios::in); // open a file
    string line;

    if (fin.is_open()) {
        getline(fin, line,';');
        int size=stoi(line);

        for(int i=0; i<size;i++){
            T item;
            fin >> item ;
            v.push_back(item);
        }
        fin.close();
    } else{
        cout<<"[ERROR]: Couldn't open the file! ";
    }
}


/*print vector*/

template<class T>
void print(vector<T> & v){
    cout << "[";
    for (T i : v) {
            cout<< i <<", ";
    }
    cout << "]" << endl;
}



int main(int argc, char* argv[]) {
    std::cout << "###### Test program of vector of object ######" << std::endl;
    srand(time(NULL));

    /*declare two vectors of int*/
    vector<Person > v;

    /*initialize the vector*/
    for(int i=0; i<100;i++){
        Person p=Person();
        v.push_back(p);
    }

    /*fill vector with random values, require the vector to be initialised */
    for(int i=0; i<100 ;i++){
        ostringstream oss;
        for(int j=0; j<5 +rand() % 3; j++){
            char c=static_cast<char>(96 +rand()% 26);
            oss << c;
        }
        v[i].name=oss.str();
    }

    for(int i=0; i<100; i++){
        v[i].age=10+rand()%80;
    }

    /*print out vector's content */
    print(v);

    /*max element of vector*/
    int max = 0;
    for (int i = 0; i < v.size(); ++i)
        if  (v[i].age > max) max = v[i].age;

    cout << "max= "<<max<<endl;


    /*sort vector  */
    sort(v.begin(), v.end(), [](const Person & a,const Person & b){return a.age<b.age;});

    print(v);


    /*put first*/
    Person p("test",20);
    v.insert(v.begin(),p);

    /*put last*/
    v.insert(v.end(),p);

    /*count*/
    int occ= count(&v[0].age, &v[v.size()].age, 20);
    cout<<"Age 20 occurred "<<occ<<" time(s)"<<endl;

    /*remove first*/
    v.erase(v.begin());


    /*remove last*/
    v.erase(v.end()-1);
    print(v);

    /*sum of person's age for example*/
    int sum=accumulate(v.begin(), v.end(), 0,[](int sum,const Person & p){return sum + p.age;});
    cout<<"sum: "<<sum<<endl;


    /*remove*/
    //requires overloading operator==
    v.erase(std::remove(v.begin(), v.end(), p), v.end());
    print(v);
    /*remove at index 4 (3 as indexing starts from 0 in C++)*/
    v.erase(v.begin() + 3);


    /*find by age*/
    (find(&v[0].age, &v[v.size()].age, p.age));


    /*store in file*/
    vector_store(v, "../data/data.txt");

    /*restore from file*/
    vector<Person> v2;
    vector_restore(v2, "../data/data.txt");

    /*print vector*/
    cout<<"print original vector"<<endl;
    print(v);
    cout<<"print restored vector from file"<<endl;
    print(v2);

    /*check if vector is empty and clear the vector if so*/
    if(v.empty()) v.clear();
    if(v2.empty()) v2.clear();

    return 0;
}
