#include "./system.hpp"
#include <stdio.h>

void System::add(Entity *entity) {
  printf("add");
  mEntities.insert(mEntities.begin(), entity);
};