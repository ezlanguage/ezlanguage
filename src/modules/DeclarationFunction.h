#ifndef DECLARATION_FUNCTION_H
#define DECLARATION_FUNCTION_H

#include "Node.h"
#include "../hash_table/Variable.h"

#include <vector>

/**
 * @brief Allows the declaration of functions
 * @author : GARNIER Antoine
 *
 * usage : function Name_Fonction (arguments list) return type1
 *              type1 variable;
 *              instruction(s);
 *              return variable;
 *          end function
 */
class DeclarationFunction : public Node {

protected:
    std::string function_name;
    std::string return_type;
    std::vector<Variable> arguments;
    std::string return_variable;

public:

    /**
     * @brief Default constructor
     */
    DeclarationFunction();

    /**
     * @brief Constructor
     * @param name : function's name
     * @param arguments : arguments list of the function
     * @param type : return type of the function
     * @param instructions : instructions of the function
     * @param return_variable : name of the variable used as a return value
     */
    DeclarationFunction(std::string name, std::vector<Variable> arguments, std::string type, Node* instructions, std::string return_variable);

    /**
     * @brief Getter for the function's name
     * @return name of the function
     */
    std::string getFunctionName() const {return function_name;}

    /**
     * @brief Getter for the return's type
     * @return return's type
     */
    std::string getReturnType() const {return return_type;}

    /**
     * @brief Getter for the argument's list
     * @return List of arguments
     */
    std::vector<Variable> getArguments() const {return arguments;}

    /**
     * @brief Getter for the name of the variable used as the return variable
     * @return name of the variable returned by the function
     */
    std::string getVariable() const {return return_variable;}

    /**
     * @brief Setter of the function's name
     * @param name : name of the function
     */
    void setFunctionName(std::string name){function_name= name;}

    /**
     * @brief Setter of the return type
     * @param type : return type of the function
     */
    void setReturnType(std::string type){return_type= type;}

    /**
     * @brief Setter of the list of arguments
     * @param arguments : list of the arguments of the function
     */
    void setArguments(std::vector<Variable> args){arguments= args;}
//    void setArguments(Node* args){arguments= args;}

    /**
     * @brief Setter of the variable's name used as the return value
     * @param variable : variable's name used as the return value of the function
     */
    void setVariable(std::string variable){return_variable= variable;}
    
    /**
     * @brief Translate the begining part of the DeclarationFunction
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the DeclarationFunction
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;

};


#endif
