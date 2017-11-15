#ifndef SYSTEMS_DRAWSPRITE_H
#define SYSTEMS_DRAWSPRITE_H

#include "../base/system.hpp"

class DrawSprite : public System {
private:
public:
  void init();
  void update();
  void draw();
};

#endif