#ifndef EXPRESSIONCONDITIONNELLE_H
#define EXPRESSIONCONDITIONNELLE_H

#include <string>
#include "Node.h"
#include "../addons/String_addon.h"

/**
 * @brief
 * @author Antoine GARNIER && Valentin GINISTY
 */
class ExpressionConditionnelle :
        public Node {

private:
    std::string operateur;
    std::string valeur;
    const ExpressionConditionnelle * left_part;
    const ExpressionConditionnelle * right_part;
protected:

public:
    ExpressionConditionnelle();
    ExpressionConditionnelle(std::string operateur_unaire, const ExpressionConditionnelle* operande);
    ExpressionConditionnelle(std::string operateur_binaire, const ExpressionConditionnelle* left_operande, const ExpressionConditionnelle* right_operande);
    ExpressionConditionnelle(std::string operande);

    virtual std::string preTranslate() const;
};

#endif
