/**
 * @author Kamal Badri
 */

#ifndef PDINSTRUCTIONS_H
#define PDINSTRUCTIONS_H


#include "Holder.h"

/**
 * This class represents the instructions declaration part
 */
class PDInstructions : public Holder {

public:
    PDInstructions();

    PDInstructions(const std::string &name);

    std::string translate();

};

#endif // PDINSTRUCTIONS_H
