//@author Antoine GARNIER
#include "While.h"
#include "String_addon.h"

While::While(Condition while_cond, Node* while_left_son, Node* while_right_son)
    :while_condition(while_cond){
    left_son= while_left_son;
    right_son= while_right_son;
}



std::string While::translate() {
    std::string res;
    Condition while_condition= get_condition();

//    The while condition is stored in the class
	res= "while(" + while_condition.translate() + "){\n";

//    The first instruction of the loop is the left son
//    The second instruction is the right son of this left son...etc
//    So here, we just translate the first one
    res+= "   "+ this->left_son->translate();

//    The instructions are translated, the loop closes
    res+= "};";

//    don't forget to launch the translation of the instructions that follow this while
    if(this->right_son) res+= this->right_son->translate();

    return res;
}
