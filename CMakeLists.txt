cmake_minimum_required(VERSION 3.7)
project(Snake)

find_package(SDL2  REQUIRED)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

include_directories(Snake ${SDL2_INCLUDE_DIRS})


add_executable(Snake Game.cpp  main.cpp   menu.cpp  score.cpp)

target_link_libraries(Snake ${SDL2_LIBRARIES} sfml-graphics sfml-system sfml-audio)