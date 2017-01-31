#ifndef DECLARATION_PROCEDURE_H
#define DECLARATION_PROCEDURE_H

#include "Node.h"
#include "Variable.h"

#include <vector>

/**
 * @brief Allows the declaration of procedures
 * @author : GARNIER Antoine
 *
 * usage : procedure Name_Procedure (arguments list)
 *              instruction(s);
 *         end procedure
 */
class DeclarationProcedure
    : public Node {

protected:
    std::string procedure_name;
    std::vector<Variable> arguments;

public:
    /**
     * @brief : Default constructor
     */
    DeclarationProcedure();

    /**
     * @brief : Constructor
     * @param name : procedure's name
     * @param args : arguments list of the procedure
     * @param instructions : instructions of the procedure
     */
    DeclarationProcedure(std::string name, std::vector<Variable> args, Node* instructions);

    /**
     * @brief Getter for the procedure's name
     * @return name of the procedure
     */
    std::string getProcedureName(){return procedure_name;}

    /**
     * @brief Getter for the argument's list
     * @return List of arguments
     */
    std::vector<Variable> getArguments(){return arguments;}

    /**
     * @brief Setter of the procedure's name
     * @param name : name of the procedure
     */
    void setProcedureName(std::string name){procedure_name= name;}

    /**
     * @brief Setter of the list of arguments
     * @param arguments : list of the arguments of the function
     */
    void setArguments(std::vector<Variable> args){arguments= args;}

    /**
    * @brief : translate the procedure in C++
    */
    std::string translate();

};


#endif