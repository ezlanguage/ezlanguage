//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_PROGRAM_H
#define PROJECT_PROGRAM_H

#include "Holder.h"
#include "DConstants.h"
#include <exception>

/**
 * Please don't forget to set the right son & it should be a constants's pointer
 *
 * */
class Program : public Node {


public:
    Program();

    Program(const string &name, Constants *son);

    Program(const string &name);

    /*
     * This will be the entry point to the other children
     * */
    void set_son();

    // normally we should have some sort of a function to get the reference of the program in question
    // stand by : waiting for the function to be implemented in class hashTable
    string translate();

};


#endif //PROJECT_PROGRAM_H
