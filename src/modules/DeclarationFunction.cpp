//@author Antoine GARNIER
#include "DeclarationFunction.h"
#include "String_addon.h"

DeclarationFunction::DeclarationFunction(std::string name, std::vector<Variable> args, std::string type, Node* instructions, std::string return_variable)
    :function_name(name), return_type(type), arguments(args) {

    this->setLeftSon(instructions);
}

std::string DeclarationFunction::translate() {
    std::string res= "";
    std::vector<Variable> args= this->getArguments();

    res= getReturnType() + " " + getFunctionName() + " (";

    //translation of the arguments
    if(!args.empty()) {
        Variable current_var;
        std::string current_type, current_val, tmp;

        if(args.size() == 1){
            current_var = args[0];
            current_type= current_var.get_type();
            current_val= current_var.get_id();
            tmp= current_type + " " + current_val;

            res+= tmp;
        } else {
            current_var = args[0];
            current_type= current_var.get_type();
            current_val= current_var.get_id();
            tmp= current_type + " " + current_val;

            res+= tmp;
            for (unsigned int i = 1; i < args.size(); ++i) {
                current_var = args[i];
                current_type= current_var.get_type();
                current_val= current_var.get_id();
                tmp= "," + current_type + " " + current_val;

                res+= tmp;
            }
        }
    }

    res+= "){\n";
    res+= getReturnType() + " " + getVariable() + ";";

    //translation of the instructions
    res+= " "+ this->getLeftSon()->translate();


    res+= "return " + getVariable() + ";\n";
    res+= "}";

    res= this->getRightSon()->translate();
    return res;
}