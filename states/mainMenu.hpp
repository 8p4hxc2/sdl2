#ifndef STATES_MAINMENU_HPP
#define STATES_MAINMENU_HPP

#include "../base/state.hpp"
#include <SDL2/SDL.h>

class MainMenu : public State {
private:
  SDL_Surface *gHelloWorld = NULL;

public:
  void load();
  void destroy();
  void update();
  void draw(SDL_Surface *_screenSurface);
};

#endif