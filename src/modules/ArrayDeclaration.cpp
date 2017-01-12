//@author : Ismail ELFAQIR
#include "ArrayDeclaration.h"
//#include "String_addon.cpp"

using namespace std;


ArrayDeclaration::ArrayDeclaration():var(NULL), size(0){
	name= "Array Declaration";
}

ArrayDeclaration::ArrayDeclaration(variable *v, int s):var(v), size(s){
	name= "Array Declaration";
}

ArrayDeclaration::ArrayDeclaration(variable *v):var(v), size(0){
	name= "Array Declaration";
}

ArrayDeclaration::ArrayDeclaration(const ArrayDeclaration & cpy):var(cpy.var), size(cpy.size){
	name= "Array Declaration";
}

ArrayDeclaration::~ArrayDeclaration(){
}

variable* ArrayDeclaration::get_variable() const {
	return var;
}

int ArrayDeclaration::get_size() const {
	return size;
}
void ArrayDeclaration::set_variable(variable *v){
	var=v;
}

void ArrayDeclaration::set_size(int s){
	size=s;
}

string ArrayDeclaration::translate() {
	string result="";
	if(size!=0) {
		result = var->get_type()+" "+var->get_id()+"["+std::to_string(size)+"]";
	}
	/*
		Here the array have no size that not possible for c++ it has to be a pointer (maybe)
	*/
	else result = var->get_type()+" *"+var->get_id();
	return result;
}
