#pragma once
#include "Snake.h"
#include "Position.h"
#include <vector>
#include <cstdlib>
#include <ctime>

class FruitSpawner {
public:
    FruitSpawner(int width, int height);
    Position Spawn(const Snake& snake);

private:
    int width, height;

    bool IsPositionOccupiedBySnake(const Snake& snake, const Position& pos);
};
