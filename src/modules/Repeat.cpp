//@author Antoine GARNIER
#include "Repeat.h"

using namespace std;

Repeat::Repeat(Node * left, Node* right , const string & cond) : Node(left, right), condition(cond)
{}

string Repeat::preTranslate() const
{
    return "do {";
}

string Repeat::postTranslate() const
{   
	string res = "} while(" + condition + ");"
    return res;
}

