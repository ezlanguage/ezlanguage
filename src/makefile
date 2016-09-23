#compilation
CC = g++				
CC_FLAGS = -ggdb -Wall -ll 			#flags de compilation
EXT_SRC = 

LEX_EXT = lex						#extension des fichiers lex (.XXX)
LEX = flex				
LEX_FlAGS =  

YACC_EXT = ypp						#extension des fichiers yacc (.XXX)
YACC = bison 
YACC_FLAGS = 

EXEC = EZ_language_compiler			#nom de l'exe qui doit avoir le meme nom que le fichier lex

#compilateur
all: $(EXEC)

EZ_language_compiler : ./cpp_files/lex.yy.c ./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/EZ_language_compiler.tab.hpp
	$(CC) -o ../bin/$@ ./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/lex.yy.c $(CC_FLAGS)

./cpp_files/lex.yy.c: EZ_language_compiler.$(LEX_EXT) ./cpp_files/EZ_language_compiler.tab.hpp
	$(LEX) -o ./cpp_files/lex.yy.c $^ $(LEX_FLAGS) 
	
./cpp_files/EZ_language_compiler.tab.cpp ./cpp_files/EZ_language_compiler.tab.hpp:  EZ_language_compiler.$(YACC_EXT)
	$(YACC) $^ --defines=./cpp_files/EZ_language_compiler.tab.hpp --output=./cpp_files/EZ_language_compiler.tab.cpp $(YACC_FLAGS) 
	

#clean  
clean :
	rm -rf *.o *~ ./cpp_files/lex.yy.c ./cpp_files/*.tab.cpp ./cpp_files/*.tab.hpp 
	
mrproper: clean	
	rm -rf ../bin


#aide
aide: help
help:
		@echo "Compiler le projet : make "
		@echo "Nettoyer les fichier objets : clean"
		@echo "Nettoyer les fichier objets + executable : mrproper"
