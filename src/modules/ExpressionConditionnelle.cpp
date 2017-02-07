//@author : GINISTY Valentin && GARNIER Antoine
#include "ExpressionConditionnelle.h"
#include <iostream>

using namespace std;

/*
 * Différents cas à traiter
 * cas d'une variable
 * cas d'un booléen
 * cas d'une fonction
 * cas d'une comparaison (avec opérateur)
 * les différentes conditions bout à bout
 */

/* une condition est un ensemble d'expressions entrecoupées par des opérateurs logiques
 * Il faut donc split la chaîne de conditions sur chaque opérateur
 * Traduire chaque opérateur et traduire ce qu'il se trouve à droite et à gauche de chaque opérateur
 */
ExpressionConditionnelle::ExpressionConditionnelle(): operateur(""), valeur(""), left_part(nullptr), right_part(nullptr){

}
ExpressionConditionnelle::ExpressionConditionnelle(string operateur_unaire, const ExpressionConditionnelle* operande):
        operateur(operateur_unaire), valeur(""), left_part(operande), right_part(nullptr)
{ }
ExpressionConditionnelle::ExpressionConditionnelle(string operateur_binaire, const ExpressionConditionnelle* left_operande, const ExpressionConditionnelle* right_operande):
        operateur(operateur_binaire), valeur(""), left_part(left_operande), right_part(right_operande)
{
}
ExpressionConditionnelle::ExpressionConditionnelle(string operande):
        operateur(""), valeur(operande), left_part(nullptr), right_part(nullptr)
{

}

string ExpressionConditionnelle::preTranslate() const {
    string res= "";
    //cas où on a trois arguments
    if(right_part != nullptr) {
        cout << "cas trois arguments" << endl;
        res = res + left_part->translate() + operateur + right_part->translate();
    }
    //cas unaire
    else if(operateur != ""){
        cout << "cas unaire" << endl;
        res = operateur + left_part->translate();
    }
        //cas où on a juste une valeur
    else {
        cout << "cas  valeur" << endl;
        res = res + valeur;
    }
    return res;
};