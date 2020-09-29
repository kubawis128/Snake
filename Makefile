.PHONY = all install-lib run clean
default:all

install-libs:
	sudo apt-get install libsfml-dev g++ libsdl2-dev
all:
	g++ -c  main.cpp   menu.cpp  Game.cpp score.cpp 
	g++ main.o menu.o Game.o score.o  -o snake-game -lsfml-graphics -lsfml-window -lsfml-system  `sdl2-config --cflags --libs`
run:
	./snake-game 
