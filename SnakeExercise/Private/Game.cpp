#include "../Public/Game.h"
#include <iostream>
#include <conio.h> // for _getch()
#include <cstdlib>
#include <ctime>
#include <sstream>

Game::Game(int width, int height) : snake(nullptr), gameOver(false) {
    srand(time(0));  // Initialize random seed
    Init(width, height);
}

Game::~Game() {
    delete snake;
    delete fruit;
    delete screen;
}

void Game::Init(int width, int height) {
    snake = new Snake(width, height);
    screen = new Screen(width, height);
    spawner = new FruitSpawner(width, height);
    Position pos = spawner->Spawn(*snake);
    fruit = new Fruit(pos.x, pos.y);
    
}

void Game::Menu()
{
    char key = ' ';
    screen->DrawMenu();
    std::cin >> key;
    if(key == '1')
    {
        Run();
    }
    else
    {
        exit(0);
    }
}

void Game::Run()
{
    while (!gameOver) {
        input.GetInput(*snake);
        snake->Move();

        if (snake->x == fruit->x && snake->y == fruit->y) {
            snake->Grow();
            delete fruit;  // deallocate the fruit
            Position pos = spawner->Spawn(*snake);
            fruit = new Fruit(pos.x, pos.y);
        }

        gameOver = snake->CheckCollision();
        
        system("cls");
        
        screen->Draw(*snake, *fruit);
        
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    
    std::cout << "Game Over! Your score: " << snake->length - 1 << std::endl;
    std::cout << "Press any key to return to the menu...";
    _getch();
    Reset();
    Menu();
}

void Game::Reset() {
    delete snake;
    gameOver = false;
    Init(20, 17);
}
