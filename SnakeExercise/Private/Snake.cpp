#include "../Public/Snake.h"
#include <iostream>

Snake::Snake(int width, int height) {
    this->width = width;
    this->height = height;
    x = width / 2;
    y = height / 2;
    dir = RIGHT;
    length = 1;
    
    tailX = new int[100];
    tailY = new int[100];

    for(int i = 0; i < 100; i++) {
        tailX[i] = 0;
        tailY[i] = 0;
    }
}

Snake::~Snake() {
    delete[] tailX;
    delete[] tailY;
}

void Snake::Move() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < length; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    default:
        break;
    }

    
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;
}

bool Snake::CheckCollision() {
    for (int i = 0; i < length; i++) {
        if (tailX[i] == x && tailY[i] == y) {
            return true;
        }
    }
    return false;
}

void Snake::Grow() {
    length++;
    if (length >= 100) {
        std::cout << "You've reached the maximum snake length!";
        exit(0);
    }
}

void Snake::SetDirection(Direction newDir) {
    if ((dir == UP && newDir != DOWN) ||
        (dir == DOWN && newDir != UP) ||
        (dir == LEFT && newDir != RIGHT) ||
        (dir == RIGHT && newDir != LEFT)) {
        dir = newDir;
        }
}
