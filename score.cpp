#include "Game.h"

#include <iostream>

#include <sstream>

#include <string.h>

#include <string>

#include <SDL/SDL.h>

using namespace std;
int b = 0;
void Game::endscreen() {
  //printf("score.cpp run\n");
  const SDL_MessageBoxButtonData buttons[] = {
    {
      SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT,
      0,
      "I want play again"
    },
    {
      0,
      1,
      "NO!!!"
    },
    {
      SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT,
      2,
      "Exit"
    },
  };
  const SDL_MessageBoxColorScheme colorScheme = {
    {
      /* .colors (.r, .g, .b) */
      /* [SDL_MESSAGEBOX_COLOR_BACKGROUND] */
      {
        51,
        51,
        51
      },
      /* [SDL_MESSAGEBOX_COLOR_TEXT] */
      {
        209,
        207,
        205
      },
      /* [SDL_MESSAGEBOX_COLOR_BUTTON_BORDER] */
      {
        140,
        135,
        129
      },
      /* [SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND] */
      {
        105,
        102,
        99
      },
      /* [SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED] */
      {
        205,
        202,
        53
      }
    }
  };
  int int_score = Game::score;
  std::string points = std::to_string(int_score);
  std::string lose = "You Lose! Your score is:";
  std::string lose_points = lose + points;
  const char * c = lose_points.c_str();

  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
    "Game Over",
    c,
    NULL);

  const SDL_MessageBoxData messageboxdata = {
    SDL_MESSAGEBOX_INFORMATION,
    /* .flags */
    NULL,
    /* .window */
    "Game Over",
    /* .title */
    "Do you want to play again?",
    /* .message */
    SDL_arraysize(buttons),
    /* .numbuttons */
    buttons,
    /* .buttons */ &
    colorScheme /* .colorScheme */
  };

  int buttonid;
  if (SDL_ShowMessageBox( & messageboxdata, & buttonid) < 0) {
    SDL_Log("error displaying message box");

  }

  if (buttonid == 0) {
    SDL_Log("Run");
    Game::alive = true;
    if (Game::alive) {
      //printf("Alive\n");
    }
    system("./sfml-app --no-menu");
  } else {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
      "Good bye!",
      "BYE!",
      NULL);
  }
  return;

}
