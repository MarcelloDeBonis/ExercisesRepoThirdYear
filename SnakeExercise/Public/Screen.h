#pragma once

#include "Snake.h"
#include "Fruit.h"

class Screen {
public:
    int width, height;
    Screen(int width, int height);
    void Draw(const Snake& snake, const Fruit& fruit);
    void DrawMenu();
};

