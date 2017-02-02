//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_PROGRAM_H
#define PROJECT_PROGRAM_H

#include "DConstants.h"
#include <exception>

/**
 * Please don't forget to set the right son & it should be a constants's pointer
 *
 */
class Program : public Node {


public:
    Program();

    Program(const std::string &name, const DConstants *right_son);

    Program(const std::string &name);
};


#endif //PROJECT_PROGRAM_H
