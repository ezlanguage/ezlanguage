//@author Antoine GARNIER
#include "Repeat.h"
#include "String_addon.h"

Repeat::Repeat(Condition* repeat_cond, Node* repeat_left_son, Node* repeat_right_son)
        :Iterative_instruction(repeat_cond){
    this->setLeftSon(repeat_left_son);
    this->setRightSon(repeat_right_son);
}

std::string Repeat::translate() {
    std::string res;
    Condition* repeat_condition= getCondition();

    res= "do{\n";

//    The first instruction of the loop is the left son
//    The second instruction is the right son of this left son...etc
//    So here, we just translate the first one
    res+= "   " + this->get_left_son()->translate();

//    The repeat condition is stored in the class
    res+= "}while(" + repeat_condition->translate() + ")\n";

//    don't forget to launch the translation of the instructions that follow this while
    if(this->get_right_son()) res+= this->get_right_son()->translate();

    return res;
}

