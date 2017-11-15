#ifndef CORE_ENGINE_HPP
#define CORE_ENGINE_HPP

#include "../base/state.hpp"
#include <SDL2/SDL.h>
#include <vector>

class Engine {
private:
  SDL_Window *mWindow;
  SDL_Event mEvent;
  bool mActive;
  std::vector<State *> mStates;
  SDL_Surface *gScreenSurface;

public:
  Engine();
  ~Engine();
  void load();
  void run();
  void update();
  void draw();
  void addState(State *);
};

#endif