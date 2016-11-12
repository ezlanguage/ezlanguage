#include "Repeat.h"

Repeat::Repeat(Condition repeat_cond, std::vector<std::string> instructions)
        :repeat_condition(repeat_cond){
    std::vector<std::string> res;
    for(int i= 0; i < instructions.size(); ++i){
        res[i]= instructions[i];
    }
    instructions= res;
}

std::string Repeat::translate() {
    std::string res;
    Condition repeat_condition= get_condition();
    std::vector<std::string> instructions= get_instructions();

    res= "do{\n";

    for(int i= 0; i < instructions.size(); ++i){
        std::string instruction_raw;
        //white spaces here or not ?
        instruction_raw= "   "+instructions[i]+";\n";
        res+= instruction_raw;
    }
    std::string condition_raw;
    condition_raw= "}while(" + repeat_condition + ")\n";
    res+= condition_raw;
    return res;
}