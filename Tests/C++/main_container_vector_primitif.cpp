/**
 * Created by : Fatima AMZIL
 * About : this is a simple C++ test program about vectors in EZ language on primitif type.
 */
#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

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
template <typename T>
void print(vector<T> & v){
    cout << "[";
    for (T i : v) cout << i << " ";
    cout << "]" << endl;
}


int main() {
    std::cout << "###### Programme de test des vectors sur type primitif ######" << std::endl;

    /*declare two vectors of int*/
    vector<int> v1(10);
    vector<int> v2(10);

    /*fill vector*/
    std::fill (v1.begin(),v1.begin()+v1.size(),1);

    /*fill in the vector with random values between 1..100*/
    srand((unsigned int) time(NULL));
    generate(v2.begin(), v2.end(), [](){ return rand() % (100 - 1)+1; });

    /*max element of vector*/
    *(max_element(begin(v2), end(v2)));

    /*min element of vector*/
    *(min_element(begin(v2), end(v2)));

    /*sort vector  */
    sort(v2.begin(), v2.end(), [](const int & a,const int & b){return a<b;});

    /*put first*/
    v2.insert(v2.begin(),44);

    /*put last*/
    v2.insert(v2.end(),77);

    /*remove first*/
    v2.erase(v2.begin());

    /*remove last*/
    v2.erase(v2.end()-1);

    /*sum*/
    accumulate(v2.begin(), v2.end(), 0);

    /*average*/
    accumulate(v2.begin(), v2.end(), 0)/v2.size();

    /*count*/
    count(v2.begin(), v2.end(), 60);

    /*remove*/
    v2.erase(std::remove(v2.begin(), v2.end(), 44), v2.end());
    /*remove at a given index as param*/
    v2.erase(v2.begin() + 4);

    /*find*/
    (find(v2.begin(), v2.end(), 44) != v2.end());


    /*store in file*/
    vector_store(v2, "../data/data.txt");

    /*restore from file*/
    vector<int> v;
    vector_restore(v, "../data/data.txt");

    /*print vector*/
    cout<<"print original vector"<<endl;
    print(v2);
    cout<<"print restored vector from file"<<endl;
    print(v);

    /*check if vector is empty and clear the vector if so*/
    if(v.empty()) v.clear();
    if(v1.empty()) v1.clear();
    if(v2.empty()) v2.clear();

    return 0;
}
