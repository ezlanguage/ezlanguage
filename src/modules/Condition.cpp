//@author : GINISTY Valentin
#include "Condition.h"
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