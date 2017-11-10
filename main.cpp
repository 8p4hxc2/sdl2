#include "base/entity.h"
#include "components/transform.h"
#include "systems/drawSprite.h"
#include <stdio.h>

int main() {
  Transform huhu(1, 1, 1, 1);

  printf("%i", huhu.getX());
  Entity e;
  Entity f;
  DrawSprite t;
  t.add(&e);
  t.add(&f);
  t.draw();

  return 0;
}