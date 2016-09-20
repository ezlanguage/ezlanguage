#compilation
CC = g++				
CC_FLAGS = -ggdb -Wall 		#flags de compilation
EXT_SRC = -ll 				#-ll pour yyparse yyerror...

LEX_EXT = lex				#extension des fichiers lex (.XXX)
LEX = flex				
LEX_FlAGS =  

YACC_EXT = y				#extension des fichiers yacc (.XXX)
YACC = bison 
YACC_FLAGS = -d

EXEC = EZ					#nom de l'exe qui doit avoir le meme nom que le fichier lex

#compilateur
all: $(EXEC)
all: $(SPEC:%.$(LEX_EXT)=%)

%  parse-% :: %.$(YACC_EXT) %.$(LEX_EXT) 
	$(LEX)  -o yylex.c $*.$(LEX_EXT) $(LEX_FLAGS) 
	$(YACC) -o yyparse.c $*.$(YACC_EXT) $(YACC_FLAGS) 
	$(CC)   -o $@ yylex.c yyparse.c $(EXT_SRC) $(CC_FLAGS) 

%  lex-% :: %.$(LEX_EXT)  
	$(LEX)  -o yylex.c  $*.$(LEX_EXT) $(LEX_FLAGS) 
	$(CC)   -o $@  yylex.c $(EXT_SRC) $(CC_FLAGS) 

#clean  
clean :
	rm -rf yylex.c yyparse.c yyparse.h 
	rm -rf *.o *~ a.out lex.yy.c
	
mrproper: clean	
	rm -rf $(EXEC)


#aide
aide: help
help:
		@echo "Compiler ce projet : make "
		@echo "Nettoyer les fichier objets : clean"
		@echo "Nettoyer les fichier objets + executable : mrproper"
