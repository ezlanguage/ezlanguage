//@author : GINISTY Valentin
#include "Foreach.h"
#include <iostream>

using namespace std;

Foreach::Foreach() {
}

Foreach::Foreach() {
    name= "Foreach";
}

string Operator::translate() {
    string res = "for(auto "+element+" : "+vector+"){";
    res = res + this->left_son->translate();
    res = res + "}";
    return res;
}