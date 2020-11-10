CC=g++
CFLAGS= -c -O3
LDFLAGS= -o
ExecName= snake-fit
LIBS=-lsfml-graphics -lsfml-window -lsfml-system  `sdl2-config --cflags --libs`
DEPS = Game.h body.h food.h tile.h Sansita.h
OBJ = Game.o main.o score.o menu.o
SRCS= main.cpp  menu.cpp  Game.cpp score.cpp 
default:make


make:
	$(CC) $< $(CFLAGS) $(SRCS)
	$(CC) $^ $(LDFLAGS) $(ExecName) $(OBJ) $(LIBS)

.PHONY: clean

clean:
	rm -r $(OBJ) $(ExecName)
