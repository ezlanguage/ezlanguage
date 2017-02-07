//@author Antoine GARNIER
#include "Repeat.h"
#include "../addons/String_addon.h"

Repeat::Repeat(Condition* repeat_cond, Node* repeat_left_son, Node* repeat_right_son)
        :Iterative_instruction(repeat_cond){
    this->setLeftSon(repeat_left_son);
    this->setRightSon(repeat_right_son);
}

string Repeat::preTranslate() const
{
    return "do {";
}

string Repeat::postTranslate() const
{
    std::string res;
    Condition* repeat_condition= getCondition();
    
    //    The first instruction of the loop is the left son
    //    The second instruction is the right son of this left son...etc
    //    So here, we just translate the first one
    res+= "   " + this->getLeftSon()->translate();
    
    //    The repeat condition is stored in the class
    res+= "} while(" + repeat_condition->translate() + ")";

    return res;
}

