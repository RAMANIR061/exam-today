CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all:$(BIN)/app $(BIN)/app1 valgrind
$(BIN)/app: $(OBJ)/employee.o 
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/employee.o					

$(BIN)/app1:$(OBJ)/main.o 
	$(CC) $(LFLAGS) $(BIN)/app1 $(OBJ)/main.o


$(OBJ)/employee.o: $(SRC)/employee.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/employee.cpp -o $(OBJ)/employee.o
			mv *.o $(OBJ)


$(OBJ)/main.o: $(SRC)/main.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/main.cpp -o $(OBJ)/main.o
			mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
		rm -f a.out app*.o
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/employee $(BIN)/main 
		@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)
						
								
