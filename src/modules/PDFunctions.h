/**
 * @author Kamal Badri
 */

#ifndef DFUNCTIONS_H
#define DFUNCTIONS_H


#include "Node.h"

/**
 * This class represents the functions declaration part
 */
class PDFunctions : public Node {

public:
    PDFunctions();

    PDFunctions(const std::string &name, PDInstructions *right_son);

    PDFunctions(const std::string &name);

};


#endif
