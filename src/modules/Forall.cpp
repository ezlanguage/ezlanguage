//@author : GINISTY Valentin
#include "Forall.h"
#include <iostream>
#include <string>

using namespace std;

Forall::Forall(int indice_debut, int indice_fin, int step, int imbrication): indice_debut(indice_debut), indice_fin(indice_fin), step(step), imbrication(imbrication){
    name = "Forall";
}

string operator+ (string s, int i)
{
    return s+to_string(i);
}
string operator+ (string s, double i)
{
    return s+to_string(i);
}
string operator+ (string s, float i)
{
    return s+to_string(i);
}

//forall i in 1..10 (step X)
string Forall::traduire() {
    //solution temporaire avant la renommage des indices
    string i = "indice_" + to_string(imbrication);
    string res = "for(int "+i+" = "+(indice_debut-1)+"; "+i+" < "+(indice_fin-1)+"; "+i+" = "+i+"+"+step+"){";
    res = res + this->left_son->traduire();
    res = res + "}";
    return res;
}