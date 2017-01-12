//@author : Ismail ELFAQIR
#include <string>
#include "If.h"
using namespace std;

If::If():Conditionnal_instruction(), block_type(3){
}

If::If(int bt):Conditionnal_instruction(), block_type(bt) {
}

If::If(Condition *c):Conditionnal_instruction(c), block_type(3) {
}

If::If(Condition *c, int bt):Conditionnal_instruction(c),block_type(bt) {
}

If::If(const If &obj):Conditionnal_instruction(obj),block_type(obj.block_type){	
}

If::~If(){
}

int If::get_block_type() const{
	return block_type;
}

void If::set_block_type(int bt){
	block_type=bt;
}

string If::translate(){
	string res="", block;
		
	switch (block_type) {
		case block_if :
			block="if("+condition->translate()+")";
			break;
		case block_else_if :
			block= "else if("+condition->translate()+")";
			break;
		case block_else :
			block= "else";
			break;	
	}
	
	res=block+"{\n";
		/*
			here the first instruction is in the left_son the other are in his right_son ( of the left_son)
		*/
		if(this->left_son!= NULL ) {
			res += this->left_son->translate()+"\n";
			Node *my_instruction = this->left_son->get_right_son();
			while(my_instruction != NULL ) {
				res += my_instruction->translate()+"\n";
				my_instruction = my_instruction->get_right_son();
			}			
		}
	res+="\n}";
	
	return res;
}
