CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall 
INC = ./inc
IFLAGS=  -I$(INC)
BIN = ./bin
OBJ =./obj
SRC =./src

all: app
 
app: $(OBJ)/classroom.o
	$(CC) $(CFLAGS)classroom $(OBJ)/classroom.o
	mv app $(BIN)
$(OBJ)/classroom.o: $(SRC)/classroom.cpp
	 $(CC) $(CFLAGS) $(IFLAGS) $(SRC)/classroom.cpp
	 mv classroom.o $(OBJ)

clean:
         
	 rm -f a.out app
	 rm -f $(OBJ)/*.o
	 rm -f $(BIN)/app

