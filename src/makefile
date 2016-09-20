#compilation
CC = g++				
CC_FLAGS = -ggdb -Wall 		#flags de compilation
EXT_SRC = -ll 				#-ll pour yyparse yyerror...

LEX_EXT = lex				#extension des fichiers lex (.XXX)
LEX = flex				
LEX_FlAGS =  

YACC_EXT = ypp				#extension des fichiers yacc (.XXX)
YACC = bison 
YACC_FLAGS = -d

EXEC = EZ					#nom de l'exe qui doit avoir le meme nom que le fichier lex

#compilateur
all: $(EXEC)
all: $(SPEC:%.$(LEX_EXT)=%)

$(EXEC): yylex.c yyparse.cpp
	$(CC)   -o $@ yylex.c yyparse.cpp $(EXT_SRC) $(CC_FLAGS)

yylex.c ::  yyparse.cpp %.$(LEX_EXT)
	$(LEX)  -o yylex.c  $*.$(LEX_EXT) $(LEX_FLAGS) 

yyparse.cpp :: %.$(YACC_EXT)
	$(YACC) -o yyparse.cpp $*.$(YACC_EXT) $(YACC_FLAGS)


#clean  
clean :
	rm -rf yylex.c yyparse.cpp yyparse.h 
	rm -rf *.tab*
	rm -rf *~ a.out lex.yy.c
	rm -rf ../obj/*
	
mrproper: clean	
	rm -rf $(EXEC)


#aide
aide: help
help:
		@echo "Compiler ce projet : make "
		@echo "Nettoyer les fichier objets : clean"
		@echo "Nettoyer les fichier objets + executable : mrproper"
