//
// Created by ROUINEB Hamza
//

#ifndef EZLANGUAGE_VARIABLE_HOLDER_H
#define EZLANGUAGE_VARIABLE_HOLDER_H

#include <string>

#include "Node.h"

/**
 * Mainly this class should be used only as a holder for other types
 * EX : for constants, an instance with 'constant' as its name (Node::name)
 * will be used to hold all constants declarations
 * */

class Holder : public Node {
    // This is an abstract class, tostring() function remained unimplemented

public:


    /**
     * I think, this enumeration should be generated based on a file
     * This way we could ensure that the program will be reusable & extandable into a certain point
     * ex:
     *      say that a new type should be added to this class like TT
     *      we will be forced to add it manually & recompile the source code
     *      but if we do it using a separate file, it will be done the first time
     *      we launch the make command.
     *      Further inforamtion will be given afterwards.
     * */
    enum TYPES {
        PROG = 1,
        CONST = 2,
        TYPE = 3,
        VAR = 4,
        FUNC = 5,
        INST = 6
    };

    // default constructor
    Holder();

    Holder(TYPES types);

    Holder(const std::string &name, TYPES type);

    Holder(const std::string &id, const std::string &name, TYPES type);

    // getters & setters
    int get_type() const;

    void set_type(TYPES type);

    virtual std::string translate() const = 0;

    ~Holder();

protected:
    // please be aware : use the right_son to point other class holders
    // and use the left to
    TYPES _type;

};


#endif //EZLANGUAGE_VARIABLE_HOLDER_H

