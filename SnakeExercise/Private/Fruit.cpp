#include "../Public/Fruit.h"
#include <ctime>
#include <cstdlib>

Fruit::Fruit(int x, int y) {
   Spawn(x, y);
}

void Fruit::Spawn(int x, int y) {
    this->x = x;
    this->y = y;
}
