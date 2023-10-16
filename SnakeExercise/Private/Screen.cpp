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
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    const int RED = FOREGROUND_RED | FOREGROUND_INTENSITY;
    const int BLUE = FOREGROUND_BLUE | FOREGROUND_INTENSITY;
    const int YELLOW = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;

    for (int i = 0; i < width + 2; i++) {
        SetConsoleTextAttribute(hConsole, RED);
        std::cout << "#";
    }
    std::cout << std::endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) {
                SetConsoleTextAttribute(hConsole, RED);
                std::cout << "#";
            }

            if (i == snake.y && j == snake.x) {
                SetConsoleTextAttribute(hConsole, BLUE);
                std::cout << "O";  // Head of the snake
            } else if (i == fruit.y && j == fruit.x) {
                SetConsoleTextAttribute(hConsole, YELLOW);
                std::cout << "F";  // Fruit
            } else {
                bool print = false;
                for (int k = 0; k < snake.length; k++) {
                    if (snake.tailX[k] == j && snake.tailY[k] == i) {
                        SetConsoleTextAttribute(hConsole, BLUE);
                        std::cout << "o";  // Tail of the snake
                        print = true;
                    }
                }
                if (!print) {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Bianco
                    std::cout << " ";
                }
            }

            if (j == width - 1) {
                SetConsoleTextAttribute(hConsole, RED);
                std::cout << "#";
            }
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < width + 2; i++) {
        SetConsoleTextAttribute(hConsole, RED);
        std::cout << "#";
    }
    std::cout << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset color to white
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
