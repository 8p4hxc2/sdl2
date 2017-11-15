#ifndef COMPONENTS_TRANSFORM_H
#define COMPONENTS_TRANSFORM_H

#include "../base/component.hpp"

class Transform : public Component {
private:
  int x, y, w, h;

public:
  Transform(int _x, int _y, int _w, int _h);
  ~Transform();
  int getX();
  int getY();
  int getW();
  int getH();
};

#endif