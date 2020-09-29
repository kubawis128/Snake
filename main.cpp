#include "Game.h"
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;

bool state = true;

int main(int argc, char ** argv) {

  std::string commandLineStr = "";
  for (int i = 1; i < argc; i++) commandLineStr.append(std::string(argv[i]).append(" "));

  // printf("main.cpp run\n");
  if (commandLineStr == "-no") {
    state = false;
    //printf("Game run\n");
    Game::run();
    //printf("Game run\n");
    return (0);

  } else {
    //printf("else run\n");
    Game::menu(state);
  }

}
