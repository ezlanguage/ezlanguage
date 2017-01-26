//@author Ismail ELFAQIR
#include "ClassDeclaration.h"
#include <iostream>
using namespace std;

ClassDeclaration::ClassDeclaration():classname(""),public_functions(),static_functions(),public_variables(){
}

ClassDeclaration::ClassDeclaration(const string &name)
			:classname(name),public_functions(),static_functions(),public_variables()
{
}


ClassDeclaration::ClassDeclaration(const string &name,
				     		const vector<DeclarationFunction *> &functions, 
				     		const vector<DeclarationFunction *> &s_functions,  
				     		const vector<Variable *> &variables )
				   :classname(name),
					public_functions(functions),
					static_functions(s_functions),
					public_variables(variables) 
{
}

ClassDeclaration::ClassDeclaration(const string &name,
						const vector<DeclarationFunction *> &functions, 
						const vector<Variable *> &variables )
				   :classname(name),public_functions(functions),static_functions(),public_variables(variables) 
{
}

ClassDeclaration::ClassDeclaration(const string &name, const vector<DeclarationFunction *> &functions)
				   :classname(name),public_functions(functions),static_functions(),public_variables() 
{
}

ClassDeclaration::ClassDeclaration(const string &name, const vector<Variable *> &variables )
				   :classname(name),public_functions(),static_functions(),public_variables(variables) 
{
}

ClassDeclaration::ClassDeclaration(const ClassDeclaration & cpy)
				   :classname(cpy.name), public_functions(cpy.public_functions),static_functions(cpy.static_functions),
				    public_variables(cpy.public_variables)
{
}

ClassDeclaration::~ClassDeclaration(){
}

const string & ClassDeclaration::get_class_name() const{
	return classname;
}

const vector<Variable *>&  ClassDeclaration::get_variables() const{
	return public_variables;
}

const vector<DeclarationFunction *>&  ClassDeclaration::get_functions() const{
	return public_functions;
}

const vector<DeclarationFunction *>&  ClassDeclaration::get_static_functions() const{
	return static_functions;
}

void ClassDeclaration::set_class_name(const std::string &name){
	classname=name;
}

void ClassDeclaration::set_variable(const vector<Variable *>&variables){
	public_variables=variables;
}

void ClassDeclaration::set_functions(const vector<DeclarationFunction *>&functions){
	public_functions=functions;
}

void ClassDeclaration::set_static_functions(const vector<DeclarationFunction *>&s_functions){
	static_functions=s_functions;
}

void ClassDeclaration::add_function(DeclarationFunction *function) {
	if(!this->is_in_class(function)){
		public_functions.push_back(function);
	}
	else cout<<"already in class"<<endl;
}

void ClassDeclaration::add_static_function(DeclarationFunction *function) {
	if(!this->is_in_class(function)){
		static_functions.push_back(function);
	}
	else cout<<"already in class"<<endl;
}

void ClassDeclaration::add_variable(Variable * variable){
	if(!this->is_in_class(variable)){
		public_variables.push_back(variable);
	}
	else cout<<"already in class"<<endl;
}

bool ClassDeclaration::is_in_class(DeclarationFunction * function){
	
	for(unsigned int i=0;i<public_functions.size();i++){
		if(public_functions[i]==function) return true;
	}
	for(unsigned int i=0;i<static_functions.size();i++){
		if(static_functions[i]==function) return true;
	}
	return false;
}

bool ClassDeclaration::is_in_class(Variable * variable){

	for(unsigned int i=0;i<public_variables.size();i++){
		if(public_variables[i]==variable) return true;
	}
	return false;
}

string ClassDeclaration::translate() const{
	
	string classNameOnUpperCase=classname;
	transform(classNameOnUpperCase.begin(), classNameOnUpperCase.end(), classNameOnUpperCase.begin(), ::toupper);

	string res="#ifndef"+classNameOnUpperCase+"_H\n";
	res+="#define"+classNameOnUpperCase+"_H\n";
	res+"#include <iostream>\n";
	res+="class "+classname+" {\n";
		res+="\tpublic:\n";
		// the attributes
		for(unsigned int i=0;i<public_variables.size();i++) {
			res+="\t\t";
			res+=public_variables[i]->get_type()+" "+public_variables[i]->get_id()+";\n";
		}
		// the CONSTRUCTORS (according to classes.pdf default constructor and constructor with parameters are required )
		res+="\t\t"+classname+"(){}\n";

		res+="\t\t"+classname+"(";
		for(unsigned int i=0;i<public_variables.size();i++) {
			res+=public_variables[i]->get_type()+" arg_"+to_string(i);
			if(i+1<public_variables.size()-1) res+=",";
		}
		res+=")\n";
		res+="\t\t\t :";
		for(unsigned int i=0;i<public_variables.size();i++) {
			res+=public_variables[i]->get_id()+"(arg_"+to_string(i)+")";
			if(i+1<public_variables.size()-1) res+=",";
		}		
		res+="\n{}\n"; 

		// the Destructor
		res+="\t\t~"+classname+"(){}\n";
	
		// the static functions
		for(unsigned int i=0;i<static_functions.size();i++) {
			res+="\t\t";
			res+="static "+static_functions[i]->translate()+"\n";
		}

		// functions
		for(unsigned int i=0;i<public_functions.size();i++) {
			res+="\t\t";
			res+=public_functions[i]->translate()+"\n";
		}

	res+="};\n";
	res+="#endif";

	return res;
}

