//@author : GINISTY Valentin
#include "Declaration.h"
#include <iostream>

using namespace std;

//exemple : ma_super_variable is integer
//variable correspond à la variable
//faire attention au type qui peut être un type objet
//faire attention à la portée de la variable
//faire attention si la variable est constante ou non
Declaration::Declaration(string var, string ty, string sco, bool iscon) {
    name= "Declaration";
    var = variable;
    ty = type;
    sco = scope;
    iscon = isconst;
}

string Declaration::translate() {
    string res = "";
    if(isconst){
        res = res + "const ";
    }
    if(scope == "global"){
        //ne rien ajouter
    }else if(scope == "local"){
        //ajouter quelque chose, mais je ne sais pas encore quoi
    }

    if(type == "integer"){
        res = res + "int ";
    }else if (type == "real"){
        res = res + "double ";
    }else if (type == "string"){
        res = res + "string ";
    }else{
        //cas de l'objet
        //exemple : kinder is chocolate
        res = res + type;
    }
    res = res + variable+";";
    return res;
}