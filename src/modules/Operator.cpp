//@author : GARNIER Antoine
#include "Operator.h"
#include <iostream>

using namespace std;

Operator::Operator() {
}

Operator::Operator(int ope_type, string ope) {
    name= "Operator";

    ope_type= ope_type;
    ope= ope;
}

string Operator::translate() {
    string res= "";

    switch(ope_type){
        //Logical operators (and, or, xor, not)
        case LOGICAL:
            cout << "Operator's type : logical" << endl;
            switch(ope_nb){
                case UNARY:
                    //Unary operator
                    if(ope == "not"){res= "!" + this->left_son->translate();} //TODO left son or right son here ?
                    else {};//unknown operator
                    break;

                case BINARY:
                    //Binary operators
                    if(ope == "and"){res= this->left_son->translate() + "&&" + this->right_son->translate();} else
                    if(ope == "or"){res= this->left_son->translate() + "||" + this->right_son->translate();} else
                    if(ope == "xor"){res= this->left_son->translate() + "^" + this->right_son->translate();}
                    else {};//unknown operator

                    break;

                default:
                    break;

            }
            break;
        //Arithmetic operators (-a, a+b, a-b, a*b, a/b, a mod b, a pow b)
        case ARITHMETIC:
            cout << "Operator's type : arithmetic" << endl;
            switch(ope_nb){
                case UNARY:
                    //Unary operator
                    if(ope == "-"){res= "-" + this->left_son->translate();} //TODO left son or right son to use "-a" ?
                    else {};//unknown operator
                    break;

                case BINARY:
                    //Binary operator
                    if(ope == "-"){res= this->left_son->translate() + "-" + this->right_son->translate();} else
                    if(ope == "+"){res= this->left_son->translate() + "+" + this->right_son->translate();} else
                    if(ope == "*"){res= this->left_son->translate() + "*" + this->right_son->translate();} else
                    if(ope == "/"){res= this->left_son->translate() + "/" + this->right_son->translate();} else
                    if(ope == "mod"){res= this->left_son->translate() + "%" + this->right_son->translate();} else
                    if(ope == "pow"){res= this->left_son->translate() + "pow" + this->right_son->translate();}
                    else {};//unknown operator
                    break;

                default:
                    break;

            }
            break;

        //Allocation's operators (=, +=, -=, *=, /=)
        case ALLOCATION:
            cout << "Operator's type : allocation" << endl;
            if(ope == "="){res= this->left_son->translate() + "=" + this->right_son->translate();} else
            if(ope == "+="){res= this->left_son->translate() + "+=" + this->right_son->translate();} else
            if(ope == "-"){res= this->left_son->translate() + "-=" + this->right_son->translate();} else
            if(ope == "*="){res= this->left_son->translate() + "*=" + this->right_son->translate();} else
            if(ope == "/="){res= this->left_son->translate() + "/=" + this->right_son->translate();}
            else {};//unknown operator
            break;

        //Comparison's operators (==, !=, <, >, <=, >=)
        case COMPARISON:
            cout << "Operator's type : comparison" << endl;
            if(ope == "=="){res= this->left_son->translate() + "==" + this->right_son->translate();} else
            if(ope == "!="){res= this->left_son->translate() + "!=" + this->right_son->translate();} else
            if(ope == "<"){res= this->left_son->translate() + "<" + this->right_son->translate();} else
            if(ope == ">"){res= this->left_son->translate() + ">" + this->right_son->translate();} else
            if(ope == "<="){res= this->left_son->translate() + "<=" + this->right_son->translate();} else
            if(ope == ">="){res= this->left_son->translate() + ">=" + this->right_son->translate();}
            else {};//unknown operator
            break;

        //Increment operators (a++, ++a, a--, --a)
        case INCREMENT:
            cout << "Operator's type : increment" << endl;
            if(ope == "++"){res= "++" + this->left_son->translate();} else
            if(ope == "--"){res= "--" + this->left_son->translate();} else {};//unknown operator
            break;
    }


    return res;
}