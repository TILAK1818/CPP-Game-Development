#include <iostream>
#include <vector>

using namespace std;

// Function to draw the Tic Tac Toe board
void drawBoard(const vector<vector<char> >& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Function to check if there's a winner
char checkWinner(const vector<vector<char> >& board) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    // Check columns
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return board[0][i];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];

    // No winner yet
    return ' ';
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // Initialize empty board

    bool isX = true; // Flag to keep track of current player
    char winner = ' '; // Variable to store winner

    // Main game loop
    while (winner == ' ') {
        drawBoard(board);

        char mark = isX ? 'X' : 'O'; // Current player's mark
        cout << "Player " << mark << ", enter your move (row and column): ";
        int row, col;
        cin >> row >> col;

        // Check if the chosen cell is valid and empty
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = mark;
            winner = checkWinner(board);
            isX = !isX; // Switch player
        } else {
            cout << "Invalid move. Try again." << endl;
        }
    }

    drawBoard(board);
    if (winner != ' ') {
        cout << "Player " << winner << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}
