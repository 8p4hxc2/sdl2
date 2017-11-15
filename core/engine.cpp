#include "./engine.hpp"
#include "../constants.hpp"
#include "../states/mainMenu.hpp"
#include <iostream>

using namespace std;

Engine::Engine() {
  cout << "Init" << endl;
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
  } else {
    mWindow = SDL_CreateWindow("SDL2", SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                               SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    gScreenSurface = SDL_GetWindowSurface(mWindow);
  }
}

Engine::~Engine() {
  cout << "Destroy" << endl;
  // Destroy window
  SDL_DestroyWindow(mWindow);
  mWindow = NULL;

  for (auto &state : mStates) {
    state->destroy();
  }

  // Quit SDL subsystems
  SDL_Quit();
}

void Engine::addState(State *state) { mStates.insert(mStates.begin(), state); }

void Engine::load() {
  MainMenu *mainMenu = new MainMenu();
  addState(mainMenu);
  mainMenu->load();
}

void Engine::run() {
  while (mActive) {
    update();
    draw();
  }
}

void Engine::update() {
  while (SDL_PollEvent(&mEvent) != 0) {
    // User requests quit
    if (mEvent.type == SDL_QUIT) {
      mActive = false;
    }
  }

  for (auto &state : mStates) {
    state->update();
  }
}

void Engine::draw() {
  for (auto &state : mStates) {
    state->draw(gScreenSurface);
  }

  SDL_UpdateWindowSurface(mWindow);
}