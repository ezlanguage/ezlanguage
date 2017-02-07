#ifndef DECLARATION_H
#define DECLARATION_H

#include <string>

#include "Node.h"

/** 
 * @brief 
 * @author : GINISTY Valentin
 * 
 *exemple : ma_super_variable is integer             *
 * variable correspond à la variable
 * faire attention au type qui peut être un type objet
 * faire attention à la portée de la variable
 * faire attention si la variable est constante ou non
 */
class Declaration :
        public Node {
protected:
    std::string variable_name;
    std::string type;
    std::string scope;
    bool isconst;

public:
    Declaration(std::string, std::string, std::string, bool);
    
    /**
     * @brief Translate the begining part of the Declaration
     * @return a string containing the C++ code of the instruction
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
};
#endif
