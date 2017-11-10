#include "./drawSprite.h"
#include <stdio.h>

void DrawSprite::init() { printf("hahahahahaha"); };
void DrawSprite::update() { printf("hahahahahaha"); };
void DrawSprite::draw() {
  for (auto &i : mEntities) {
    i->test();
  }
};
