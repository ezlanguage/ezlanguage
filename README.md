# EzLanguage

[![Build Status](https://travis-ci.org/ezlanguage/ezlanguage.svg?branch=compilateur)](https://travis-ci.org/ezlanguage/ezlanguage)

Repository of a project for the EZ language compiler.
A simple compiler for EZ-Language 

## To compile the compiler

Compilation of the compiler for EZ language is done with `make`
A makefile is present at the root of the project to help with the process.

In order to :
	* add options to the YACC compiler : use the variable *YACC_FLAGS*
	* add options to the LEXX compiler : use the variable *YACC_FLAGS*
	* add options for compilation : use the variable *YACC_FLAGS*
	* add files for the compilation of the compiler : use the variable *YACC_FLAGS*

To obtain some help and see all avaibles options, use : `make help`
