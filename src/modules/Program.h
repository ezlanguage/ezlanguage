//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_PROGRAM_H
#define PROJECT_PROGRAM_H

#include "DConstants.h"
#include <exception>

/**
 * Please don't forget to set the right son & it should be a constants's pointer
 * @see should the program node contain all other nodes (as left sons) ?
 * */
class Program : public Node {
private:
    std::string _program_name;

public:
    Program();

    Program(const std::string &program_name, Node *son);

    Program(const std::string &program_name);

    // normally we should have some sort of a function to get the reference of the program in question
    // stand by : waiting for the function to be implemented in class hashTable

    /**
     * @brief Translate the begining part of the While
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
};


#endif //PROJECT_PROGRAM_H
