%option nounput
%option yylineno

%{
#include <iostream>
//#include "MyClasses/maclasse.h"
#include "global.h"

#include "EZ_language_compiler.tab.hpp"

extern "C" int yylex(void);

%}

separateurs     [ \t]+
chiffre         [0-9]
entier          {chiffre}+

reel			{entier}("."{entier})?

mot 		    [A-z]+

variable 		([a-z])([A-z]|[0-9])*

commentaire		(\/\*(.*)\*\/)|(\/\/(.*))

%%

{separateurs}   { /* On ignore */ }
{commentaire}   { /* On ignore */ }
{entier}		{ yylval.valeur_numerique=atoi(yytext); return(NOMBRE);}
{reel}        	{ yylval.valeur_numerique=atof(yytext); return(NOMBRE);}

"fin"	return(END);

"\n"	return (FIN);

","		return(VIRGULE);

"°"		return(DEGRE);
"%"		return(POURCENT);
"="		return(EGAL);
"#"		return(DIESE);

"("		return (PARENTHESE_GAUCHE);
")"		return (PARENTHESE_DROITE);

"{"		return (ACCOLADE_GAUCHE);
"}"		return (ACCOLADE_DROITE);

"["		return (CROCHET_GAUCHE);
"]"		return (CROCHET_DROIT);

{variable}	{	yylval.texte= strdup(yytext);
	    		return (VARIABLE);
			}

%%
