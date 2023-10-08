#pragma once

class GameBoard {
public:
    GameBoard();

    void display(char player,int currentRow, int currentCol);
    char getCell(int row, int col);
    void setCell(int row, int col, char value);

private:
    char board[3][3];
};
