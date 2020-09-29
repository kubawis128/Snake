#include "Game.hpp"

#include <iostream>

#include <sstream>

#include <string.h>
#include "Sansita.hpp"

using namespace std;
int a = 0;
int Game::menu(bool menu) {
  //printf("menu.cpp run\n");

  sf::RenderWindow window(sf::VideoMode(800, 600), "Snake Menu");
  sf::Font font;
  font.loadFromMemory(&Sansita_ttf, Sansita_ttf_len);
  sf::Event event;
  window.clear(sf::Color::Red);
  while (window.pollEvent(event)) {
    // Close window: exit
    if (event.type == sf::Event::Closed) {
      window.close();
    }
    sf::Text text;
    sf::Text text1;
    // select the font
    text.setFont(font); // font is a sf::Font
    text1.setFont(font); // font is a sf::Font

    // set the string to display
    text.setString("Snake");
    text1.setString("Push enter to play or esc to exit.");
    // set the character size
    text.setCharacterSize(48); // in pixels, not points!
    text1.setCharacterSize(24);
    // set the color

    text.setFillColor(sf::Color::Green);
    text1.setFillColor(sf::Color::Blue);
    a = a + 1;
    text.setPosition(300, 200);
    text1.setPosition(300, 300);
    // set the text style

    // inside the main loop, between window.clear() and window.display()
    window.draw(text);
    window.draw(text1);
    window.display();
    while (a = 1) {
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        window.close();
        Game::window -> close();
        return(0);

      }
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {

        window.close();
        Game::run();
        return(0);

      }

    }

  }
}
