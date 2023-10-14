#pragma once

#include "Snake.h"
#include "Fruit.h"
#include "Screen.h"
#include "Input.h"
#include "FruitSpawner.h"
#include <chrono>
#include <thread>

class Game {
public:
    Game(int width = 20, int height = 17);
    ~Game();
    void Menu();

private:

    FruitSpawner* spawner;
    Snake* snake;
    Fruit* fruit;
    Screen* screen;
    Input input;
    bool gameOver;

    void Run();
    void Init(int width, int height);        // Initialize the game components
    void Reset();                            // Reset the game when player loses
};
