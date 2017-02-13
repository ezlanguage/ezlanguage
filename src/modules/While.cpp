//@author Antoine GARNIER
#include "While.h"

using namespace std;

While::While(Node * left, Node * right, const string & cond) : Node(left, right), condition(cond)
{}

string While::preTranslate() const {
    string res = "while (" + condition + ") {";
    return res;
}

string While::postTranslate() const
{
    return "}";
}
