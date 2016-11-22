#compilation
# compilateur utilisé
CC = g++-5
# flags de compilation
CC_FLAGS = -ggdb -Wall -std=c++11
EXT_SRC = 

# extension des fichiers lex (.XXX)
LEX_EXT = lex
# interpréteur du fichier Lex : analyse lexicale
LEX = flex
LEX_FlAGS =

# extension des fichiers yacc (.XXX)
YACC_EXT = ypp
# interpréteur des fichiers Yacc : analyse syntaxique et sémantique
YACC = bison
YACC_FLAGS = 

# nom de l'exe, doit avoir le meme nom que le fichier lex
EXEC = EZ_language_compiler

# dossier de modules
MOD= modules

#compilateur
all: help $(EXEC)

version:
	g++ --version

EZ_language_compiler : ./obj/lex.yy.c ./obj/EZ_language_compiler.tab.cpp ./obj/EZ_language_compiler.tab.hpp
	@echo  "\033[1;33mCréation du compilateur en compilant ses sources\033[0m"
	$(CC) -o ./bin/$@ ./obj/EZ_language_compiler.tab.cpp ./obj/lex.yy.c -ll $(CC_FLAGS)

./obj/lex.yy.c: ./src/EZ_language_compiler.$(LEX_EXT) ./obj/EZ_language_compiler.tab.hpp
	@echo "\033[1;33mInterprétation du fichier Lex\033[0m"
	$(LEX) -o $@ $^ $(LEX_FLAGS) 
	@echo ""
	
./obj/EZ_language_compiler.tab.cpp ./obj/EZ_language_compiler.tab.hpp:  ./src/EZ_language_compiler.$(YACC_EXT)
	@echo "\033[1;33mInterprétation et compilation intermédiaire des fichiers Yacc\033[0m"
	$(YACC) $^ --defines=./obj/EZ_language_compiler.tab.hpp --output=./obj/EZ_language_compiler.tab.cpp $(YACC_FLAGS) 
	@echo ""
	
modules:
	 $(CC) -c src/$(MOD)/* $(CC_FLAGS)

#clean  
clean :
	@echo "\033[1;33mSuppression des fichiers générés et des fichiers objets\033[0m"
	rm -rf ./obj/lex.yy.c ./obj/*.tab.*
	@echo ""
	
mrproper: clean	
	@echo "\033[1;33mSuppression de l'exécutable\033[0m"
	rm -rf ./bin/$(EXEC)

launch: all
	@echo "\033[1;33mLancement du compilateur"
	@echo "\033[1;33m=============================="
	@echo ""
	@exec ./bin/$(EXEC) "${ARGS}"
	@echo "FIN\033[0m"

#aide
aide: help
help:
	@echo "\t\033[3mCompiler le projet : make\033[0m"	
	@echo "\t\033[3mNettoyer les fichier objets : clean\033[0m"	
	@echo "\t\033[3mNettoyer les fichier objets + executable : mrproper\033[0m"
