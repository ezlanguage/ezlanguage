%option nounput
%option yylineno

%{
#include <stdlib.h> /* pour atoi - atof */
#include <string.h> /* pour strdup */
#include <iostream>
#include "../src/global.h" // on part du dossier ../obj car il y est necessaire

#include "EZ_language_compiler.tab.hpp"

extern "C" int yylex(void);

%}

separateurs     [ \t]+
number         [0-9]
entier          {number}+

reel			{entier}("."{entier})?

mot 		    [A-z]+

ID ([a-z]|[A-Z])([a-z]|[A-Z]|[0-9])*

commentaire		(\/\*(.*)\*\/)|(\/\/(.*))

backLine 	\n
%%

{separateurs}   { /* On ignore */ }
{commentaire}   { /* On ignore */ }
{entier}	{ yylval.numerical_value=atoi(yytext); return(NOMBRE);}  // integer
{reel}      { yylval.reel_value=atof(yytext); return(NUMBRE);}		 // reel

{backLine}	return(backLine);




","		return(COMMA);

"°"		return(DEGRE);
"%"		return(POURCENT);
"#"		return(DIESE);

"="		return(EGAL);
"!="            return NE; 
"<"             return LT; 
"<="            return LE; 
">"             return GT; 
">="            return GE; 
"+"             return PLUS; 
"-"             return MINUS; 
"*"             return MULT; 
"/"   	        return DIVISE; 

"("		return (LEFT_PARENTHESIS);
")"		return (RIGHT_PARENTHESIS);

"{"		return (LEFT_ACCOLADE);
"}"		return (RIGHT_ACCOLADE);

"["		return (LEFT_BRACKET);
"]"		return (RIGHT_BRACKET);
"."	        return (POINT);


(const|CONST)        return(CONST);
(local|LOCAL)        return(LOCAL);
(global|GLOBAL)      return(GLOBAL);
(is|IS)              return(IS) ;
(are|ARE)            return(ARE) ;
(integer|INTEGER)    return(INTEGER);
(real|REAL)          return(REAL);
(string|STRING)      return(STRING);
(boolean|BOOLEAN)    return(BOOLEAN);

(if|IF)              return(IF);
(else|ELSE)          return(ELSE);
(endif|ENDIF)        return(ENDIF);

(when|WHEN)           return(WHEN);
(case|CASE)           return(CASE);
(endcase|ENDCASE)     return(ENDCASE);
(default|DEFAULT)     return(DEFAULT);
(endwhen|ENDWHEN)     return(ENDWHEN);

(while|WHILE)         return(WHILE);
(do|DO)               return(DO);
(endwhile|ENDWHILE)   return(ENDWHILE);

(repeat|REPEAT)         return(REPEAT);
(until|UNTIL)           return(UNTIL);
(endrepeat|ENDREPEAT)   return(ENDREPEAT);

(for|FOR)        return(FOR);
(in|IN)          return(IN);
(step|STEP)      return(STEP);
(endfor|ENDFOR)  return(ENDFOR);

(function|FUNCTION)         return(FUNCTION);
(procedure|PROCEDURE)       return(PROCEDURE);
(return|RETURN)             return(RETURN);
(endfunction|ENDFUNCTION)   return(ENDFUNCTION);
(endprocedure|ENDPROCEDURE) return(ENDPROCEDURE);


(print|PRINT)     { return(PRINT);        }

{ID}	{	yylval.texte= strdup(yytext);
	    		return (NAME);
		}



%%
