CC = g++
CFLAGS= -Wall -O2 -std=c++11 -ggdb
LDFLAGS = 
EXEC = $(BUILD_DIR)/test

SRC =	main.cpp		\
	Node.cpp		\
	DeclarationContainer.cpp
    

OBJ_DIR = ./obj
SRC_DIR = ./src
BUILD_DIR = ./build
INC_DIR = ./include

OBJ = $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/main.o: $(INC_DIR)/DeclarationContainer.h
$(OBJ_DIR)/Node.o: $(INC_DIR)/Node.h
$(OBJ_DIR)/DeclarationContainer.o: $(INC_DIR)/DeclarationContainer.h $(INC_DIR)/Node.h




$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -o $@ -c $< $(CFLAGS)
clean:
	rm -f $(OBJ_DIR)/*.o

mrproper: clean
	rm -f $(EXEC)
	
