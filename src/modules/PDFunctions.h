/**
 * @author Kamal Badri
 */

#ifndef DFUNCTIONS_H
#define DFUNCTIONS_H


#include "PDInstructions.h"

/**
 * This class represents the functions declaration part
 */
class PDFunctions : public Holder {

public:
    PDFunctions();

    PDFunctions(const std::string &name, PDInstructions *right_son);

    PDFunctions(const std::string &name);

    std::string translate();

};


#endif
