#include "../Public//GameBoard.h"
#include <iostream>

GameBoard::GameBoard() {
    // Initialize the game board with empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void GameBoard::display(char player,int currentRow, int currentCol) {
    system("cls"); // Clear the screen
    std::cout << "Welcome to the Tic Tac Toe game!\n\n";

    // Display the game board with current positions
    for (int i = 0; i < 3; i++) {
        std::cout << " ";
        for (int j = 0; j < 3; j++) {
            if (i == currentRow && j == currentCol) {
                std::cout << "[*"<<player<<"*]";
            } else {
                std::cout << "[" << board[i][j] << "]";
            }
            if (j < 2) std::cout << "|";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "---+---+---\n";
    }
}


char GameBoard::getCell(int row, int col) {
    return board[row][col];
}

void GameBoard::setCell(int row, int col, char value) {
    board[row][col] = value;
}
