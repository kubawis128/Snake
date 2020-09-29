#include "Game.hpp"
#include <iostream>
#include <sstream>
#include <string.h>
#include <string>
#include <SDL.h>
using namespace std;
int b = 0;
void Game::endscreen() {
        const SDL_MessageBoxButtonData buttons[] = {
        { SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT, 0, "I want play again" },
        { SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT, 1, "Exit" },
        };
            const SDL_MessageBoxColorScheme colorScheme = {
        { /* .colors (.r, .g, .b) */
            /* [SDL_MESSAGEBOX_COLOR_BACKGROUND] */
            { 255,   0,   0 },
            /* [SDL_MESSAGEBOX_COLOR_TEXT] */
            {   0, 255,   0 },
            /* [SDL_MESSAGEBOX_COLOR_BUTTON_BORDER] */
            { 255, 255,   0 },
            /* [SDL_MESSAGEBOX_COLOR_BUTTON_BACKGROUND] */
            {   0,   0, 255 },
            /* [SDL_MESSAGEBOX_COLOR_BUTTON_SELECTED] */
            { 255,   0, 255 }
        }
    };

            const SDL_MessageBoxData messageboxdata = {
        SDL_MESSAGEBOX_INFORMATION, /* .flags */
        NULL, /* .window */
        "Game Over", /* .title */
        "Do you want play again?", /* .message */
        SDL_arraysize(buttons), /* .numbuttons */
        buttons, /* .buttons */
        &colorScheme /* .colorScheme */
    };

    int buttonid;
    if (buttonid == 0) {
        printf("Run\n");
        Game::alive = true;
        Game::run();
    } else {
    SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
                         "Good bye!",
                         "BYE!",
                         NULL);
    }

        int int_score = Game::score;
        std::string points = std::to_string(int_score);
        std::string lose = "You Lose! Your score is:";
        std::string lose_points = lose + points;
        const char *c = lose_points.c_str(); 
  SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
                         "Game Over",
                         c,
                         NULL);
}
