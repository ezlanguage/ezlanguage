//@author Antoine GARNIER
#include "DeclarationFunction.h"
#include "String_addon.h"

DeclarationFunction::DeclarationFunction(std::string name, Node* arguments, std::string type, Node* instructions, std::string return_variable)
    :function_name(name), return_type(type), return_variable(return_variable) {

    this->setArguments(arguments);
    this->setLeftSon(instructions);
}

std::string DeclarationFunction::translate() {
    std::string res= "";

    res= getReturnType() + " " + getFunctionName() + " (";

    //translation of the arguments
    this->getArguments()->translate();

    res+= "){\n";
    res+= getReturnType() + " " + getVariable() + ";";

    //translation of the instructions
    res+= " "+ this->get_left_son()->translate();


    res+= "return " + getVariable() + ";\n";
    res+= "}";

    res= this->get_right_son()->translate();
    return res;
}