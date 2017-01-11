#ifndef GLOBAL_H
#define GLOBAL_H

#include "./modules/Node.h"
typedef struct s_mon_type {
    int numerical_value;
    double reel_value;
    bool booleen;
    std::string texte;
    Node* arbre;
//    MaClasse	une_maclasse;
} mon_type;

#define YYSTYPE mon_type
extern YYSTYPE yylval;

#endif
