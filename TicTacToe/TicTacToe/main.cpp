#include <iostream>
#include <conio.h> // For _getch() function

class TicTacToe {
public:
    TicTacToe() {
        // Initialize the game board with empty spaces
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ' ';
            }
        }
        currentPlayer = 'X';
        currentRow = 1;
        currentCol = 1;
    }

    void displayBoard() {
        system("cls"); // Clear the screen
        std::cout << "Welcome to the Tic Tac Toe game!\n\n";
        
        // Display the game board with current positions
        for (int i = 0; i < 3; i++) {
            std::cout << " ";
            for (int j = 0; j < 3; j++) {
                if (i == currentRow - 1 && j == currentCol - 1) {
                    std::cout << "[" << board[i][j] << "]";
                } else {
                    std::cout << " " << board[i][j] << " ";
                }
                if (j < 2) std::cout << "|";
            }
            std::cout << "\n";
            if (i < 2) std::cout << "---+---+---\n";
        }
        
        std::cout << "\nPlayer " << currentPlayer << ", use 1 to move up, 2 to move down, 3 to move right, 4 to move left, and 's' to make your move: ";
    }

    bool makeMove() {
        char move = _getch(); // Read a single key press without waiting for Enter

        switch (move) {
            case '1': // Move up
                if (currentRow > 1) currentRow--;
                break;
            case '2': // Move down
                if (currentRow < 3) currentRow++;
                break;
            case '3': // Move right
                if (currentCol < 3) currentCol++;
                break;
            case '4': // Move left
                if (currentCol > 1) currentCol--;
                break;
            case 's': // Make the move
                if (board[currentRow - 1][currentCol - 1] == ' ') {
                    board[currentRow - 1][currentCol - 1] = currentPlayer;
                    return true;
                }
                break;
        }
        return false;
    }

    bool checkWin() {
        // Check rows, columns, and diagonals for a win
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
                return true; // Row win
            }
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
                return true; // Column win
            }
        }
        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
            return true; // Diagonal win (top-left to bottom-right)
        }
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
            return true; // Diagonal win (top-right to bottom-left)
        }
        return false;
    }

    bool isBoardFull() {
        // Check if the game board is full
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void switchPlayer() {
        // Switch between players (X and O)
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }
    }

    char getCurrentPlayer() {
        return currentPlayer;
    }

private:
    char board[3][3];
    char currentPlayer;
    int currentRow;
    int currentCol;
};

int main() {
    TicTacToe game;

    while (true) {
        game.displayBoard();

        if (game.makeMove()) {
            if (game.checkWin()) {
                game.displayBoard();
                std::cout << "Player " << game.getCurrentPlayer() << " wins! Congratulations!\n";
                break;
            } else if (game.isBoardFull()) {
                game.displayBoard();
                std::cout << "The game ends in a draw.\n";
                break;
            } else {
                game.switchPlayer();
            }
        }
    }

    return 0;
}
