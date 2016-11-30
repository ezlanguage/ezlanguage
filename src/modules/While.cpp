//@author Antoine GARNIER
#include "While.h"

While::While(Condition while_cond, std::vector<std::string> instructions)
    :while_condition(while_cond){
    std::vector<std::string> res;
    for(unsigned int i= 0; i < instructions.size(); ++i){
        res[i]= instructions[i];
    }
    instructions= res;
}

std::string While::translate() {
    std::string res;
    Condition while_condition= get_condition();
    std::vector<std::string> instructions= get_instructions();

	res= "while(" + while_condition.translate() + "){\n";

    for(unsigned int i= 0; i < instructions.size(); ++i){
        std::string instruction_raw;
        //white spaces here or not ?
        instruction_raw= "   "+instructions[i]+";\n";
        res+= instruction_raw;
    }
    res+= "}\n";
    return res;
}

