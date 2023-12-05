#include <iostream>
#include <vector>
#include <future>

enum class Player { None, X, O };

struct Move {
    int row;
    int col;
};

struct GameState {
    std::vector<std::vector<Player>> board;
    Player currentPlayer;
};

bool isGameOver(const GameState& state) {
    // Check for a win
    for (int i = 0; i < 3; ++i) {
        // Check rows
        if (state.board[i][0] != Player::None && state.board[i][0] == state.board[i][1] && state.board[i][1] == state.board[i][2]) {
            return true;
            }
        // Check columns
        if (state.board[0][i] != Player::None && state.board[0][i] == state.board[1][i] && state.board[1][i] == state.board[2][i]) {
            return true;
            }
    }
    // Check diagonals
    if (state.board[0][0] != Player::None && state.board[0][0] == state.board[1][1] && state.board[1][1] == state.board[2][2]) {
        return true;
        }
    if (state.board[0][2] != Player::None && state.board[0][2] == state.board[1][1] && state.board[1][1] == state.board[2][0]) {
        return true;
        }

    // Check for a draw
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (state.board[i][j] == Player::None) {
                // Game is not over yet
                return false;
            }
        }
    }
    // If all cells are filled and there is no winner, it's a draw
    return true;
}

std::vector<Move> getPossibleMoves(const GameState& state) {
    std::vector<Move> possibleMoves;

    // Generate all possible moves for the current state
    for (int i = 0; i < state.board.size(); ++i) {
        for (int j = 0; j < state.board[i].size(); ++j) {
            if (state.board[i][j] == Player::None) {
                possibleMoves.push_back({i, j});
            }
        }
    }

    return possibleMoves;
}

int evaluate(const GameState& state) {
    // Evaluation for the game state
    int score = 0;

    // Check for a win
    for (int i = 0; i < 3; ++i) {
        if (state.board[i][0] != Player::None && state.board[i][0] == state.board[i][1] && state.board[i][1] == state.board[i][2]) {
            if (state.board[i][0] == Player::X) {
                // AI wins
                score = 10;
            } else {
                // Human wins
                score = -10;
            }
            return score;
            }
        if (state.board[0][i] != Player::None && state.board[0][i] == state.board[1][i] && state.board[1][i] == state.board[2][i]) {
            if (state.board[0][i] == Player::X) {
                score = 10;
            } else {
                score = -10;
            }
            return score;
            }
    }

    // Check diagonals
    if (state.board[0][0] != Player::None && state.board[0][0] == state.board[1][1] && state.board[1][1] == state.board[2][2]) {
        if (state.board[0][0] == Player::X) {
            score = 10;
        } else {
            score = -10;
        }
        return score;
        }
    if (state.board[0][2] != Player::None && state.board[0][2] == state.board[1][1] && state.board[1][1] == state.board[2][0]) {
        if (state.board[0][2] == Player::X) {
            score = 10;
        } else {
            score = -10;
        }
        return score;
        }

    // No winner, it's a draw
    return score;
}

int minimax(GameState state, int depth, bool maximizingPlayer) {
    if (isGameOver(state) || depth == 0) {
        return evaluate(state);
    }

    std::vector<Move> possibleMoves = getPossibleMoves(state);

    if (maximizingPlayer) {
        int bestScore = INT_MIN;
        for (const Move& move : possibleMoves) {
            GameState newState = state;
            newState.board[move.row][move.col] = Player::X;
            int score = minimax(newState, depth - 1, false);
            bestScore = std::max(bestScore, score);
        }
        return bestScore;
    } else {
        int bestScore = INT_MAX;
        for (const Move& move : possibleMoves) {
            GameState newState = state;
            newState.board[move.row][move.col] = Player::O;
            int score = minimax(newState, depth - 1, true);
            bestScore = std::min(bestScore, score);
        }
        return bestScore;
    }
}

Move findBestMove(const GameState& currentState, int depth) {
    std::vector<Move> possibleMoves = getPossibleMoves(currentState);
    int bestVal = INT_MIN;
    Move bestMove{-1, -1};

    for (const Move& move : possibleMoves) {
        GameState newState = currentState;
        newState.board[move.row][move.col] = Player::X;

        int moveVal = minimax(newState, depth, false);

        if (moveVal > bestVal) {
            bestVal = moveVal;
            bestMove = move;
        }
    }

    return bestMove;
}

std::string playerToString(Player player) {
    if (player == Player::X) return "X";
    if (player == Player::O) return "O";
    return " ";
}

void printBoard(const GameState& state) {
    system("cls || clear");

    // Print the board
    std::cout << "-------------\n";
    for (const auto& row : state.board) {
        std::cout << "|";
        for (const auto& cell : row) {
            std::cout << " " << playerToString(cell) << " |";
        }
        std::cout << "\n-------------\n";
    }
}

// Function to play the game
void playGame() {
    // Initializing the game state, assuming an empty board and AI (Player X) starts
    GameState currentState{
            {
                {Player::None, Player::None, Player::None},
                {Player::None, Player::None, Player::None},
                {Player::None, Player::None, Player::None}
            },
            Player::X
        };

    // Game loop that continues until the game is over
    while (!isGameOver(currentState)) {
        // Printing the game board
        printBoard(currentState);

        if (currentState.currentPlayer == Player::X) {
            // AI's turn (Player X)
            Move bestMove = findBestMove(currentState, 5);// Adjust depth as needed

            // Displaying the AI's best move
            std::cout << "Best move by the AI: (" << bestMove.row << ", " << bestMove.col << ")\n";

            // Updating the game state with AI's move
            currentState.board[bestMove.row][bestMove.col] = Player::X;
            currentState.currentPlayer = Player::O;
        } else {
            // Human player's turn (Player O)
            int row, col;
            std::cout << "Enter the row (0-2) and column (0-2) separated by space: ";
            std::cin >> row >> col;

            // Check if the move is valid and update the game state.
            if (row >= 0 && row < 3 && col >= 0 && col < 3 &&
                currentState.board[row][col] == Player::None) {
                currentState.board[row][col] = Player::O;
                currentState.currentPlayer = Player::X;
                } else {
                    std::cout << "Invalid move. Please try again.\n";
                }
        }
    }

    // Printing the final state of the game board
    printBoard(currentState);

    // Determining and displaying the game result
    int gameResult = evaluate(currentState);
    if (gameResult > 0) {
        std::cout << "The AI has won!\n";
    } else if (gameResult < 0) {
        std::cout << "You won against the AI!\n";
    } else {
        std::cout << "Game ended in a draw!\n";
    }

}


int main() {
    
    std::cout << "Welcome to the Tic-Tac-Toe game!\n";
    playGame(); // Start the game

    system("pause");
    return 0;
}
