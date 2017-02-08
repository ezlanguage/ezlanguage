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
    /**
     * @brief Constructor
     */
    ExpressionConditionnelle();

    /**
     * @brief Constructor
     * @param operateur_unaire : unary operator (with one parameter)
     * @param operande : conditionnal expression
     */
    ExpressionConditionnelle(std::string operateur_unaire, const ExpressionConditionnelle* operande);

    /**
     * @brief Constructor
     * @param operateur_unaire : binary operator (with two parameters)
     * @param left_operande : conditionnal expression which is the first operand
     * @param right_operande : conditionnal expression which is the second operand
     */
    ExpressionConditionnelle(std::string operateur_binaire, const ExpressionConditionnelle* left_operande, const ExpressionConditionnelle* right_operande);

    /**
     * @brief Constructor
     * @param operande : value of the expression
     */
    ExpressionConditionnelle(std::string operande);

    /**
     * @brief Translate the begining part of the Forall
     * @return a string containing the C++ code of the node
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */

    virtual std::string preTranslate() const;
};

#endif
