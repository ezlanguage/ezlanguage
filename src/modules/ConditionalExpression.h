#ifndef CONDITIONALEXPRESSION_H
#define CONDITIONALEXPRESSION_H

#include <string>
#include "Node.h"
#include "../addons/String_addon.h"

/**
 * @brief
 * @author Antoine GARNIER && Valentin GINISTY
 */
class ConditionalExpression :
        public Node {

private:
    std::string operateur;
    std::string valeur;
    const ConditionalExpression * left_part;
    const ConditionalExpression * right_part;
protected:

public:
    /**
     * @brief Constructor
     */
    ConditionalExpression();

    /**
     * @brief Constructor
     * @param operateur_unaire : unary operator (with one parameter)
     * @param operande : conditionnal expression
     */
    ConditionalExpression(std::string operateur_unaire, const ConditionalExpression* operande);

    /**
     * @brief Constructor
     * @param operateur_unaire : binary operator (with two parameters)
     * @param left_operande : conditionnal expression which is the first operand
     * @param right_operande : conditionnal expression which is the second operand
     */
    ConditionalExpression(std::string operateur_binaire, const ConditionalExpression* left_operande, const ConditionalExpression* right_operande);

    /**
     * @brief Constructor
     * @param operande : value of the expression
     */
    ConditionalExpression(std::string operande);

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
