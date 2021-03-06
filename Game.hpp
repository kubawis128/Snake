#ifndef __GAME_H__

#define __GAME_H__

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics/Image.hpp>

#include <random>

#include <utility>

#include <vector>

enum class Direction {
  UP, RIGHT, DOWN, LEFT
};
enum class MoveEvent {
  EAT, COLLIDE
};

class Game {
  public:
    static int menu(bool menu);

  static void run();

  public:

    static sf::RenderWindow * window;
  static int level;
  static bool alive;
  static int score;

  static std::pair < int, int > foodLocation;

  // Random Number Generation for X
  static
  const int rangex_from;
  static
  const int rangex_to;
  static std::random_device rand_devX;
  static std::mt19937 generatorX;
  static std::uniform_int_distribution < int > distrX;

  static
  const int rangey_from;
  static
  const int rangey_to;
  static std::random_device rand_devY;
  static std::mt19937 generatorY;
  static std::uniform_int_distribution < int > distrY;

  static std::vector < std::pair < int, int >> snake_body;
  static Direction snake_direction;
  static Direction new_direction;

  static std::pair < int, int > getNewFoodLocation();
  static void moveSnake();
  static void draw();
  static void endscreen();
  static bool collides(std::pair < int, int > , std::vector < std::pair < int, int >> );

  static sf::Texture tile;
  static sf::Texture body;
  static sf::Texture food;
  static sf::Sprite tile_spr;
  static sf::Sprite body_spr;
  static sf::Sprite food_spr;
  static sf::Image iconnn;
  static sf::Vector2u iconnnn;
};

#endif
