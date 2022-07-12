CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all:app  valgrind

app: $(OBJ)/employee.o $(OBJ)/main.o 
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/employee.o $(OBJ)/main.o 				

$(OBJ)/employee.o: $(SRC)/employee.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/employee.cpp 
			mv employee.o $(OBJ)


$(OBJ)/main.o: $(SRC)/main.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/main.cpp 
			mv main.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
		rm -f a.out app
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)
						
