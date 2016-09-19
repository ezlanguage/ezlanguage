#!/bin/bash

PROGRAM_NAME="EZ_language_compiler"
# You need a valid <PROGRAM_NAME>.lex file in the current directory

if [ -z "$1" ]
then
    echo "Please, enter a flex filename in argument"
else
    echo "bison $1"
    bison -d 	$1
    echo "flex $PROGRAM_NAME.lex"
    flex	$PROGRAM_NAME".lex"
    g++ -c	lex.yy.c	-o lex.yy.o
    g++ -c	$PROGRAM_NAME".tab.c"	-o $PROGRAM_NAME".tab.o"
    g++	-o	EZL_compiler	"lex.yy.o"	$PROGRAM_NAME".tab.o"  -lm -ll -lfl
fi
