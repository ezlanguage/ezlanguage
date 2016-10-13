//@author : GARNIER Antoine
#include "Operateur.h"
#include <iostream>

using namespace std;

Operateur::Operateur() {
}

Operateur::Operateur(int type_ope, string ope) {
    name= "Operateur";

    type_ope= type_ope;
    ope= ope;
}

string Operateur::traduire() {
    string res= "";

    switch(type_ope){
        //operateur logique (and, or, xor, not)
        case 1:
            cout << "Type d'operateur : logique" << endl;
            switch(nb_ope){
                case 1:
                    //operateur unaire
                    if(ope == "not"){res= "!" + this->left_son->traduire();} //TODO fils gauche ou droit ?
                    else {};//aucun operateur logique reconnu
                    break;

                case 2:
                    //operateur binaire
                    if(ope == "and"){res= this->left_son->traduire() + "&&" + this->right_son->traduire();} else
                    if(ope == "or"){res= this->left_son->traduire() + "||" + this->right_son->traduire();} else
                    if(ope == "xor"){res= this->left_son->traduire() + "^" + this->right_son->traduire();}
                    else {};//aucun operateur logique reconnu

                    break;

                default:
                    break;

            }
            break;
        //operateur arithmetique (-a, a+b, a-b, a*b, a/b, a mod b, a pow b)
        case 2:
            cout << "Type d'operateur : arithmetique" << endl;
            switch(nb_ope){
                case 1:
                    //operateur unaire
                    if(ope == "-"){res= "-" + this->left_son->traduire();} //recuperation fils gauche ou droit pour le "-a" ?
                    else {};//aucun operateur logique reconnu
                    break;

                case 2:
                    //operateur binaire
                    if(ope == "-"){res= this->left_son->traduire() + "-" + this->right_son->traduire();} else
                    if(ope == "+"){res= this->left_son->traduire() + "+" + this->right_son->traduire();} else
                    if(ope == "*"){res= this->left_son->traduire() + "*" + this->right_son->traduire();} else
                    if(ope == "/"){res= this->left_son->traduire() + "/" + this->right_son->traduire();} else
                    if(ope == "mod"){res= this->left_son->traduire() + "%" + this->right_son->traduire();} else
                    if(ope == "pow"){res= this->left_son->traduire() + "pow" + this->right_son->traduire();}
                    else {};//aucun operateur logique reconnu
                    break;

                default:
                    break;

            }
            break;

        //operateur d'affectation (=, +=, -=, *=, /=)
        case 3:
            cout << "Type d'operateur : affectation" << endl;
            if(ope == "="){res= this->left_son->traduire() + "=" + this->right_son->traduire();} else
            if(ope == "+="){res= this->left_son->traduire() + "+=" + this->right_son->traduire();} else
            if(ope == "-"){res= this->left_son->traduire() + "-=" + this->right_son->traduire();} else
            if(ope == "*="){res= this->left_son->traduire() + "*=" + this->right_son->traduire();} else
            if(ope == "/="){res= this->left_son->traduire() + "/=" + this->right_son->traduire();}
            else {};//aucun operateur logique reconnu
            break;

        //operateur de comparaison (==, !=, <, >, <=, >=)
        case 4:
            cout << "Type d'operateur : comparaison" << endl;
            if(ope == "=="){res= this->left_son->traduire() + "==" + this->right_son->traduire();} else
            if(ope == "!="){res= this->left_son->traduire() + "!=" + this->right_son->traduire();} else
            if(ope == "<"){res= this->left_son->traduire() + "<" + this->right_son->traduire();} else
            if(ope == ">"){res= this->left_son->traduire() + ">" + this->right_son->traduire();} else
            if(ope == "<="){res= this->left_son->traduire() + "<=" + this->right_son->traduire();} else
            if(ope == ">="){res= this->left_son->traduire() + ">=" + this->right_son->traduire();}
            else {};//aucun operateur logique reconnu
            break;

        //operateur d'incrementation/decrementation (a++, ++a, a--, --a)
        case 5:
            cout << "Type d'operateur : incrementation/decrementation" << endl;
            if(ope == "++"){res= "++" + this->left_son->traduire();} else
            if(ope == "--"){res= "--" + this->left_son->traduire();} else {};//aucun operateur logique reconnu
            break;

    }


    return res;
}