#include "base/entity.h"
#include "systems/drawSprite.h"
#include <stdio.h>

int main() {
  Entity e;
  Entity f;
  DrawSprite t;
  t.add(&e);
  t.add(&f);
  t.draw();

  return 0;
}