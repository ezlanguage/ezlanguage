#ifndef GLOBAL_H
#define GLOBAL_H


typedef struct s_mon_type {
    int valeur_numerique;
    double valeur_reel;
    bool booleen;
    std::string texte;
//    MaClasse	une_maclasse;
} mon_type;

#define YYSTYPE mon_type
extern YYSTYPE yylval;

#endif
