//@author GARNIER Antoine
#include "DeclarationProcedure.h"
#include "String_addon.h"

DeclarationProcedure::DeclarationProcedure(std::string name, std::vector<Variable> args, Node* instructions)
    : procedure_name(name), arguments(args) {

    this->setLeftSon(instructions);
}

std::string DeclarationProcedure::translate() {
    std::string res= "";
    std::vector<Variable> args= this->getArguments();

    res= "void " + getProcedureName() + " (";

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

    //translation of the instructions
    res+= " "+ this->get_left_son()->translate();
    res+= "}";

    res= this->get_right_son()->translate();
    return res;
}