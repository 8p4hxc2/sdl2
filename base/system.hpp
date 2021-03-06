#ifndef BASE_SYSTEM_HPP
#define BASE_SYSTEM_HPP

#include "./entity.hpp"
#include <vector>

class System {
protected:
  std::vector<Entity *> mEntities;

public:
  // init the system
  virtual void init() = 0;

  // update the system
  virtual void update() = 0;

  // draw the system
  virtual void draw() = 0;

  // add an entity to the system
  void add(Entity *);
};

#endif