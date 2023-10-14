#include "../Public/Screen.h"
#include <iostream>

#ifdef _WIN32
#include <windows.h>  // For Windows specific functions
#endif

Screen::Screen(int width, int height)
{
    this->width = width;
    this->height = height;
}

void Screen::Draw(const Snake& snake, const Fruit& fruit) {
    system("cls"); // Clear the screen (Windows specific)

    for (int i = 0; i < width + 2; i++)
        std::cout << "#";
    std::cout << std::endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                std::cout << "#";
            if (i == snake.y && j == snake.x)
                std::cout << "O";  // Head of the snake
            else if (i == fruit.y && j == fruit.x)
                std::cout << "F";  // Fruit
            else {
                bool print = false;
                for (int k = 0; k < snake.length; k++) {
                    if (snake.tailX[k] == j && snake.tailY[k] == i) {
                        std::cout << "o";  // Tail of the snake
                        print = true;
                    }
                }
                if (!print)
                    std::cout << " ";
            }

            if (j == width - 1)
                std::cout << "#";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < width + 2; i++)
        std::cout << "#";
    std::cout << std::endl;
}

void Screen::DrawMenu() {
    system("cls");  // Clear the screen (Windows specific)

    std::cout << "#############################################" << std::endl;
    std::cout << "#              SNAKE GAME                   #" << std::endl;
    std::cout << "#############################################" << std::endl;
    std::cout << "#               1. Play                     #" << std::endl;
    std::cout << "#         Press any key to Exit             #" << std::endl;
    std::cout << "#############################################" << std::endl;
}
