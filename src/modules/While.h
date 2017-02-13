#ifndef WHILE_H
#define WHILE_H

#include "Node.h"

/**
 * @brief Represent a node of the tree which will traduct the loop while
 * @details Using :
 * while condition do
 *    instruction_1
 *    instruction_2
 *    ...
 *    instruction_n
 * end while
 * 
 * @author Antoine GARNIER
 */
class While : public Node {
	
protected:
	std::string condition;
	
public:
    

    While(Node * left, Node * right, const std::string & cond);


    
    /*** Translations ***/
    
    /**
     * @brief Translate the begining part of the While
     * @return a string containing the C++ code of the instruction
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the While
     * @return a string containing the C++ code of the instruction
     */
    virtual std::string postTranslate() const;
};

#endif
