#ifndef GLOBAL_H
#define GLOBAL_H

//#include "MyClasses/maclasse.h"

typedef struct s_mon_type {
    int valeur_numerique;
    bool booleen;
    char *texte;
//    MaClasse	une_maclasse;
} mon_type;

#define YYSTYPE mon_type
extern YYSTYPE yylval;

#endif
