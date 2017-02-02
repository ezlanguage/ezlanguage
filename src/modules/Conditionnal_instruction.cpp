//@author : ELFAQIR Ismail
#include "Conditionnal_instruction.h"
#include <iostream>

using namespace std;

Conditionnal_instruction::Conditionnal_instruction(){
	name= "Conditionnal instruction";
}

Conditionnal_instruction::Conditionnal_instruction(Condition *c):condition(c){
	name= "Conditionnal instruction";
}

Conditionnal_instruction::Conditionnal_instruction(const Conditionnal_instruction &c):condition(c.condition){
	name= "Conditionnal instruction";
}

Conditionnal_instruction::~Conditionnal_instruction() {
}

const Condition & Conditionnal_instruction::get_condition() const {
	return *condition;
}

void Conditionnal_instruction::set_condition(Condition * c) {
	condition=c;
}

<<<<<<< HEAD
=======
// std::string Conditionnal_instruction::preTranslate() const {
//
//     string res = "";
//
//     switch (condition_type) {
//         case CIf || CIfElse :
//             res += "if(" + conditions[0].translate() + ")"; // in this case vector of conditions has only one condition
//             res += "{";
//             for (unsigned int i = 0; i <
//                                      instructions[0].size(); i++) { // in this case vector of instructions has only the instructions of (if)
//                 // here \t and \n for the view of the code c++
//                 res += "\t" + instructions[0][i].translate();
//                 res += "\n";
//             }
//             res += "\n";
//             res += "}";
//             break;
//
//         case CIfElse :
//             res += "else"; // in this case vector of conditions has only one condition
//             res += "{";
//             for (unsigned int i = 0; i <
//                                      instructions[1].size(); i++) { // instructions[0] for the bloc (if) and instructions[1] for the bloc (else)
//                 // here \t and \n for the view of the code c++
//                 res += "\t" + instructions[1][i].translate();
//                 res += "\n";
//             }
//             res += "\n";
//             res += "}";
//             break;
//
//         case CWhen :
//             // here the left_son normally has the variable that we were willing to compare
//             //TODO ERREUR ICI
//             //res+="switch("+this->left_son+")";
//             res += "{";
//             for (unsigned int i = 0; i < conditions.size(); i++) {
//                 res += "\tcase " + conditions[i].translate() + " :\n";
//                 for (unsigned int j = 0; j < instructions[i].size(); j++) {
//                     res += "\t\t" + instructions[i][j].translate() + "\n";
//                 }
//                 res += "\t\tbreak;\n";
//             }
//             // if the size instructions > size of conditions then we have a default case
//             if (instructions.size() > conditions.size()) {
//                 res += "\tdefault :\n";
//                 for (unsigned int i = 0; i < instructions[instructions.size() - 1].size(); i++) {
//                     res += "\t\t" + instructions[instructions.size() - 1][i].translate() + "\n";
//                 }
//                 res += "\t\tbreak;\n";
//             }
//             res += "}";
//             break;
//
//     }
//
//     return res;
// }
>>>>>>> 1a45e51389529b3fbc0c442410e5193e9e546708
