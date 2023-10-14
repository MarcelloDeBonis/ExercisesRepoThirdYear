#pragma once
#include "../Enum/Direction.h"

class Snake {
public:
    Snake(int width = 20, int height = 17);  // Constructor
    ~Snake();                               // Destructor

    void Move();
    bool CheckCollision();
    void Grow();
    void SetDirection(Direction newDir);

    int x, y, length, height, width;
    int* tailX;  
    int* tailY;  
    Direction dir;
};

