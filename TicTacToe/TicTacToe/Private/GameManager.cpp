#include "../Public/GameManager.h"
#include <iostream>
#include <conio.h>

GameManager::GameManager() : currentPlayer('X'), currentRow(1), currentCol(1) {}

void GameManager::run() {
    GameBoard gameBoard;
    Player playerX('X');
    Player playerO('O');

    while (true) {
        gameBoard.display(currentPlayer.getSymbol(),currentRow - 1, currentCol - 1);

        std::cout << "\nPlayer " << currentPlayer.getSymbol() << ", use W to move up, S to move down, D to move right, A to move left, and E to make your move: ";
        
        if (makeMove(gameBoard)) {
            if (checkWin(gameBoard, currentPlayer)) {
                gameBoard.display(currentPlayer.getSymbol(),currentRow - 1, currentCol - 1);
                std::cout << "Player " << currentPlayer.getSymbol() << " wins! Congratulations!\n";
                break;
            } else if (isBoardFull(gameBoard)) {
                gameBoard.display(currentPlayer.getSymbol(),currentRow - 1, currentCol - 1);
                std::cout << "The game ends in a draw.\n";
                break;
            } else {
                switchPlayer();
            }
        }
    }
}

bool GameManager::makeMove(GameBoard& gameBoard) {
    char move = _getch(); // Read a single key press without waiting for Enter

    switch (move) {
        case 'W': // Move up
            if (currentRow > 1) currentRow--;
            break;
        case 'S': // Move down
            if (currentRow < 3) currentRow++;
            break;
        case 'D': // Move right
            if (currentCol < 3) currentCol++;
            break;
        case 'A': // Move left
            if (currentCol > 1) currentCol--;
            break;
        case 'E': // Make the move
            if (gameBoard.getCell(currentRow - 1, currentCol - 1) == ' ') {
                gameBoard.setCell(currentRow - 1, currentCol - 1, currentPlayer.getSymbol());
                return true;
            }
            break;
    }
    return false;
}

bool GameManager::checkWin(GameBoard& gameBoard, Player& player) {
    char symbol = player.getSymbol();

    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        // Check rows
        if (gameBoard.getCell(i, 0) == symbol && gameBoard.getCell(i, 1) == symbol && gameBoard.getCell(i, 2) == symbol) {
            return true;
        }
        // Check columns
        if (gameBoard.getCell(0, i) == symbol && gameBoard.getCell(1, i) == symbol && gameBoard.getCell(2, i) == symbol) {
            return true;
        }
    }

    // Check diagonals
    if (gameBoard.getCell(0, 0) == symbol && gameBoard.getCell(1, 1) == symbol && gameBoard.getCell(2, 2) == symbol) {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (gameBoard.getCell(0, 2) == symbol && gameBoard.getCell(1, 1) == symbol && gameBoard.getCell(2, 0) == symbol) {
        return true; // Diagonal win (top-right to bottom-left)
    }

    return false;
}

bool GameManager::isBoardFull(GameBoard& gameBoard) {
    // Check if the game board is full
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameBoard.getCell(i, j) == ' ') {
                return false;
            }
        }
    }
    return true;
}

void GameManager::switchPlayer() {
    if (currentPlayer.getSymbol() == 'X') {
        currentPlayer = Player('O');
    } else {
        currentPlayer = Player('X');
    }
}
