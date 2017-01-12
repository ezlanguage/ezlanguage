//@author Antoine GARNIER
#include "Repeat.h"
#include "String_addon.h"

Repeat::Repeat(Condition repeat_cond, Node* repeat_left_son, Node* repeat_right_son)
        :repeat_condition(repeat_cond){
    left_son= repeat_left_son;
    right_son= repeat_right_son;
}

std::string Repeat::translate() {
    std::string res;
    Condition repeat_condition= get_condition();

    res= "do{\n";

//    The first instruction of the loop is the left son
//    The second instruction is the right son of this left son...etc
//    So here, we just translate the first one
    res+= "   " + this->left_son->translate();

//    The repeat condition is stored in the class
    res+= "}while(" + repeat_condition.translate() + ")\n";

//    don't forget to launch the translation of the instructions that follow this while
    if(this->right_son) res+= this->right_son->translate();

    return res;
}

