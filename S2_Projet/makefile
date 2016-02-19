CXXFLAGS=-g -std=c++11 -Wall -pedantic

CC= g++

MainGame: Main.o CoreEngine.o Game.o Time.o Fenetre.o Input.o Liste.o
	$(CC) Main.o CoreEngine.o Game.o Time.o Fenetre.o Input.o Liste.o -o MainGame

maingame.o: Main.cpp CoreEngine.h Game.h Time.h Fenetre.h Input.h
	$(CC) -c Main.cpp

coreengine.o: CoreEngine.cpp CoreEngine.h Game.h Time.h Fenetre.h Input.h
	$(CC) -c CoreEngine.cpp

game.o: Game.cpp Game.h
	$(CC) -c Game.cpp

time.o: Time.cpp Time.h
	$(CC) -c Time.cpp

fenetre.o: Fenetre.cpp Fenetre.h
	$(CC) -c Fenetre.cpp

input.o: Input.cpp Input.h
	$(CC) -c Input.cpp

liste.o: Liste.cpp Liste.h
	$(CC) -c List.cpp
clean:
	rm -f *.o
