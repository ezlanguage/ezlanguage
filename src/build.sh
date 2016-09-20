#!/bin/bash

PROGRAM_NAME="EZ_language_compiler"
# You need a valid <PROGRAM_NAME>.lex file in the current directory

if [ -z "$1" ]
then
    echo "Please, enter a yacc filename in argument"
else
    echo "bison $1"
    bison -d 	$1
    echo "flex $PROGRAM_NAME.lex"
    flex	$PROGRAM_NAME".lex"
    g++ -c	lex.yy.c	-o ../obj/lex.yy.o
    g++ -c	$PROGRAM_NAME".tab.cpp"	-o ../obj/$PROGRAM_NAME".tab.o"
    g++	-o	../EZL_compiler	../obj/lex.yy.o	../obj/$PROGRAM_NAME".tab.o" -lm -ll -lfl
fi
