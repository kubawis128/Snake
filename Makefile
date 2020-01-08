.PHONY = all install-lib run cool-editor
default:all

install-lib:
	sudo apt-get install libsfml-dev g++
cool-editor:
	sudo apt-get install sublime-text
	/opt/sublime_text/sublime_text
all:
	g++ -c  main.cpp   menu.cpp  Game.cpp score.cpp 
	g++ main.o menu.o Game.o score.o  -o snake-game -lsfml-graphics -lsfml-window -lsfml-system  `sdl2-config --cflags --libs`
	make run
run:
	./snake-game 