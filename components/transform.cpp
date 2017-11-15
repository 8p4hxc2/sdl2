#include "./transform.hpp"

Transform::Transform(int _x, int _y, int _w, int _h) {
  x = _x;
  y = _y;
  w = _w;
  h = _h;
};

Transform::~Transform(){};

int Transform::getX() { return x; }
int Transform::getY() { return y; }
int Transform::getW() { return w; }
int Transform::getH() { return h; }