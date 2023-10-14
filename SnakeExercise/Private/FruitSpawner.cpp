#include "../Public/FruitSpawner.h"

FruitSpawner::FruitSpawner(int width, int height) : width(width), height(height) {
    srand(time(0));  // Initialize random seed
}

Position FruitSpawner::Spawn(const Snake& snake) {
    Position fruitPos;
    do {
        fruitPos.x = 1 + rand() % (width-1);  // 1 to width-1
        fruitPos.y = 1 + rand() % (height-1); // 1 to height-1
    } while (IsPositionOccupiedBySnake(snake, fruitPos));
    return fruitPos;
}

bool FruitSpawner::IsPositionOccupiedBySnake(const Snake& snake, const Position& pos) {
    // Check snake head
    if (snake.x == pos.x && snake.y == pos.y) {
        return true;
    }
    // Check snake tail
    for (int i = 0; i < snake.length; i++) {
        if (snake.tailX[i] == pos.x && snake.tailY[i] == pos.y) {
            return true;
        }
    }
    return false;
}
