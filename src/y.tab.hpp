/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM_INTEGER = 258,
    NUM_REAL = 259,
    NAME = 260,
    RETOUR = 261,
    STRING = 262,
    COMMA = 263,
    DEGRE = 264,
    POURCENT = 265,
    DIESE = 266,
    POINT = 267,
    QUOTE = 268,
    TYPE_INTEGER = 269,
    TYPE_REAL = 270,
    TYPE_STRING = 271,
    TYPE_BOOLEAN = 272,
    EGAL = 273,
    NE = 274,
    LT = 275,
    LE = 276,
    GT = 277,
    GE = 278,
    PLUS = 279,
    MINUS = 280,
    MULT = 281,
    DIVISE = 282,
    LEFT_PARENTHESIS = 283,
    RIGHT_PARENTHESIS = 284,
    LEFT_ACCOLADE = 285,
    RIGHT_ACCOLADE = 286,
    LEFT_BRACKET = 287,
    RIGHT_BRACKET = 288,
    FIN = 289,
    BACK_LINE = 290,
    CONST = 291,
    LOCAL = 292,
    GLOBAL = 293,
    IS = 294,
    ARE = 295,
    IF = 296,
    DO = 297,
    ELSE = 298,
    ENDIF = 299,
    WHEN = 300,
    CASE = 301,
    ENDCASE = 302,
    DEFAULT = 303,
    ENDWHEN = 304,
    WHILE = 305,
    ENDWHILE = 306,
    REPEAT = 307,
    UNTIL = 308,
    ENDREPEAT = 309,
    FOR = 310,
    IN = 311,
    STEP = 312,
    ENDFOR = 313,
    FUNCTION = 314,
    PROCEDURE = 315,
    RETURN = 316,
    ENDFUNCTION = 317,
    ENDPROCEDURE = 318,
    PRINT = 319,
    END_OF_FILE = 320
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
