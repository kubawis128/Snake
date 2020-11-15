# Snake:
It just simple clone of popular game *Snake*

![ScreenShot](https://github.com/kubawis128/Snake/screenshots/1.png)
# Requirements:
```SDL``` =< 2

```SFML``` =< 2.5

```cmake```=< 3.7

```g++```

```make```
# Before Building:
*Ubuntu*:
```
sudo apt-get install g++ cmake make libsfml-dev libsdl-dev libsdl2-dev
```
*Arch linux*:
```
sudo pacman -S sfml sdl gcc cmake make
```
# Building:
Use CMake for this job:
```
  mkdir build
  cd build
  cmake ..
  make
```
If you get error it may mean that you have not meet requirements:
Repeat step: Before Building

# Run:
*Linux*:
```
  ./Snake
```
*Windows*:

Double click ```Snake.exe```
