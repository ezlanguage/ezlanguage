#ifndef GLOBAL_H
#define GLOBAL_H


typedef struct s_mon_type{
    int		valeur_numerique;
    bool 	booleen;
    char*	texte;
}mon_type;

#define YYSTYPE mon_type
extern YYSTYPE yylval;

#endif
