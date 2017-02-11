//@author : GINISTY Valentin
#include "DeclarationVariable.h"
#include <iostream>

using namespace std;

DeclarationVariable(Node * left, Node * right, const string & n, const string & t, const string & s, bool co, bool st): Node(left, right), name(n), type(t), scope(s), isConst(co), isStatic(st)
{}

string DeclarationVariable::preTranslate() const {
    string res = "";
    if (isStatic) {
		res += "static ";
	}
    if(isConst){
        res = res + "const ";
    }
    // On ne s'occupe pas du scope

    if(type == "integer"){
        res = res + "int ";
    }else if (type == "real"){
        res = res + "double ";
    }else if (type == "string"){
        res = res + "string ";
    }else if (type == "boolean"){
        res = res + "bool ";
    }else{
        // Case of object
        res += type + " ";
    }
    res += name + ";";
    return res;
}
