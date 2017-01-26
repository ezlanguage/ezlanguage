//@author GARNIER Antoine
#include "DeclarationProcedure.h"
#include "String_addon.h"

DeclarationProcedure::DeclarationProcedure(std::string name, Node *args, Node* instructions)
    : procedure_name(name){

    this->setArguments(args);
    this->set_left_son(instructions);
}

std::string DeclarationProcedure::translate() {
    std::string res= "";

    res= "void " + getProcedureName() + " (";

    //translation of the arguments
    this->getArguments()->translate();

    res+= "){\n";

    //translation of the instructions
    res+= " "+ this->get_left_son()->translate();
    res+= "}";

    res= this->get_right_son()->translate();
    return res;
}