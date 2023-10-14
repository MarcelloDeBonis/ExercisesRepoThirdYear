#include "../Public/Input.h"
#include <conio.h>

void Input::GetInput(Snake& snake) {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            snake.SetDirection(LEFT);
            break;
        case 'w':
            snake.SetDirection(UP);
            break;
        case 'd':
            snake.SetDirection(RIGHT);
            break;
        case 's':
            snake.SetDirection(DOWN);
            break;
        default:
            break;
        }
    }
}
