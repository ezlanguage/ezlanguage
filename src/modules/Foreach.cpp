//@author : GINISTY Valentin
#include "Foreach.h"
#include <iostream>

using namespace std;

Foreach::Foreach(string v, string e) {
    name= "Foreach";
    vector = v;
    element = e;
}

string Foreach::preTranslate() const {
    return "for(auto "+element+" : "+vector+") {";
}

string Foreach::postTranslate() const {
    return "}";
}
