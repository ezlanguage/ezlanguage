//@author : GINISTY Valentin
#include "Foreach.h"
#include <iostream>

using namespace std;

Foreach::Foreach(string v, string e) {
    name= "Foreach";
    vector = v;
    element = e;
}

string Foreach::translate() {
    string res = "for(auto "+element+" : "+vector+"){";
    res = res + this->get_left_son()->translate();
    res = res + "}";
    return res;
}