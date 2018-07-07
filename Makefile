CC = g++ -using=std14 -c -g
CXXFLAGS = -pedantic -W -Wall -Wextra
SFML = -lsfml-system -lsfml-network -lsfml-window -lsfml-graphics

BASENAME = game gameStateManager gamestate splashscreen menustate playstate

SRC = $(addprefix src/, $(BASENAME))
INCLUDE = $(addprefix include/,  $(addsuffix .h, $(BASENAME)))
OBJ = $(addsuffix .o, $(BASENAME))

all: main.o $(OBJ)

main.o: main.cpp $(INCLUDE)
	$(CC) $(CXXFLAGS) main.cpp $(SFML)

game.o: src/game.cpp include/game.h
	$(CC) $(CXXFLAGS) src/game.cpp $(SFML)

gameStateManager.o: src/gameStateManager.cpp include/gameStateManager.h
	$(CC) $(CXXFLAGS) src/gameStateManager.cpp $(SFML)

gamestate.o: src/gamestate.cpp include/gamestate.h
	$(CC) $(CXXFLAGS) src/gamestate.cpp $(SFML)

splashscreen.o: src/splashscreen.cpp include/splashscreen.h
	$(CC) $(CXXFLAGS) src/splashscreen.cpp $(SFML)

menustate.o: src/menustate.cpp include/menustate.h
	$(CC) $(CXXFLAGS) src/menustate.cpp $(SFML)

playstate.o: src/playstate.cpp include/playstate.h
	$(CC) $(CXXFLAGS) src/playstate.cpp $(SFML)

.PHONY: clean

clean:
	rm *~ *.o include/*~ include/*.gch src/*~

