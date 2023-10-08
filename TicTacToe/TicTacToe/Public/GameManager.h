#pragma once
#include "GameBoard.h"
#include "Player.h"

class GameManager {
public:
    GameManager();
    void run();

private:
    bool makeMove(GameBoard& gameBoard);
    bool checkWin(GameBoard& gameBoard, Player& player);
    bool isBoardFull(GameBoard& gameBoard);
    void switchPlayer();

    Player currentPlayer;
    int currentRow;
    int currentCol;
};
