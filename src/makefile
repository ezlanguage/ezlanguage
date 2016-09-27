#compilation
CC = g++				# compilateur utilisé
CC_FLAGS = -ggdb -Wall -ll 		# flags de compilation
EXT_SRC = 

LEX_EXT = lex				# extension des fichiers lex (.XXX)
LEX = flex				# interpréteur du fichier Lex : analyse lexicale
LEX_FlAGS =  

YACC_EXT = ypp				# extension des fichiers yacc (.XXX)
YACC = bison				# interpréteur des fichiers Yacc : analyse syntaxique et sémantique
YACC_FLAGS = 

EXEC = EZ_language_compiler		# nom de l'exe, doit avoir le meme nom que le fichier lex

#compilateur
all: $(EXEC)

EZ_language_compiler : ./cpp_files/lex.yy.c ./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/EZ_language_compiler.tab.hpp
	@echo  "- Création du compilateur $(EXEC) en compilant ses sources"
	$(CC) -o ../bin/$@ ./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/lex.yy.c $(CC_FLAGS)

./cpp_files/lex.yy.c: EZ_language_compiler.$(LEX_EXT) ./cpp_files/EZ_language_compiler.tab.hpp
	@echo "- Interprétation du fichier Lex"
	$(LEX) -o ./cpp_files/lex.yy.c $^ $(LEX_FLAGS) 
	
./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/EZ_language_compiler.tab.hpp:  EZ_language_compiler.$(YACC_EXT)
	@echo "- Interprétation et compilation intermédiaire des fichiers Yacc"
	$(YACC) $^ --defines=./cpp_files/EZ_language_compiler.tab.hpp --output=./cpp_files/EZ_language_compiler.tab.cpp $(YACC_FLAGS) 
	

#clean  
clean :
	@echo "- Suppression des fichiers générés et des fichiers objets"
	rm -rf *.o *~ ./cpp_files/lex.yy.c ./cpp_files/*.tab.cpp ./cpp_files/*.tab.hpp 
	
mrproper: clean	
	@echo "- Suppression de l''exécutable"
	rm -rf ../bin

launch: all
	@echo "- Lancement du compilateur :"
	@echo "=============================="
	@echo ""
	@exec ../bin/$(EXEC) ${ARGS}
	@echo "-FIN-"

#aide
aide: help
help:
		@echo "Compiler le projet : make "
		@echo "Nettoyer les fichier objets : clean"
		@echo "Nettoyer les fichier objets + executable : mrproper"
