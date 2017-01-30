# EzLanguage

[![Build Status](https://travis-ci.org/ezlanguage/ezlanguage.svg?branch=compilateur)](https://travis-ci.org/ezlanguage/ezlanguage)

Dépôt du projet de compilateur du "EZ language".
Un simple compilateur qui traduit une partie du EZ Language

## Compilation du compilateur

La compilation du compilateur pour l'EZ language se fait à l'aide de l'outil _make_.
Un makefile est donc présent à la racine du projet pour créer celui-ci.

Si vous souhaitez :
	- ajouter des options de compilation au YACC : via la variable *YACC_FLAGS*
	- ajouter des options de compilation au LEX : via la variable *LEX_FLAGS*
	- ajouter des options lors de la compilation : via la variable *CC_FLAGS*
	- ajouter des fichiers de modules : via la variable *MOD_CPP*
	
Pour avoir une aide et les commandes disponibles, tapez : _make help_
