#include "./mainMenu.hpp"

void MainMenu::load() {
  // Load splash image
  gHelloWorld = SDL_LoadBMP("hello.bmp");
}

void MainMenu::destroy() {
  SDL_FreeSurface(gHelloWorld);
  gHelloWorld = NULL;
}

void MainMenu::update() {}
void MainMenu::draw(SDL_Surface *_screenSurface) {
  SDL_BlitSurface(gHelloWorld, NULL, _screenSurface, NULL);
}