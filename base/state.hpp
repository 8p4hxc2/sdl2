#ifndef BASE_STATE_HPP
#define BASE_STATE_HPP

#include <SDL2/SDL.h>

class State {
public:
  virtual void load() = 0;
  virtual void destroy() = 0;
  virtual void update() = 0;
  virtual void draw(SDL_Surface *_screenSurface) = 0;
};

#endif