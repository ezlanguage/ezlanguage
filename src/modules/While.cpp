//@author Antoine GARNIER
#include "While.h"
#include "String_addon.h"

While::While(Condition* while_cond, Node* while_left_son, Node* while_right_son)
    :Iterative_instruction(while_cond){
    setLeftSon(while_left_son);
    setRightSon(while_right_son);
}

std::string While::translate() {
    std::string res;
    Condition* while_condition= getCondition();

//    The while condition is stored in the class
	res= "while(" + while_condition->translate() + "){\n";

//    The first instruction of the loop is the left son
//    The second instruction is the right son of this left son...etc
//    So here, we just translate the first one
    res+= "   "+ get_left_son()->translate();

//    The instructions are translated, the loop closes
    res+= "};";

//    don't forget to launch the translation of the instructions that follow this while
    if(get_right_son()) res+= get_right_son()->translate();

    return res;
}
