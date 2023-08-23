#include <iostream>
#include <vector>
using namespace std;

char checkWinner(vector<string>& board, char currentPlayer) {
    // Check rows for a winner
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            return currentPlayer;
        }
    }

    // Check columns for a winner
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == currentPlayer && board[1][j] == currentPlayer && board[2][j] == currentPlayer) {
            return currentPlayer;
        }
    }

    // Check diagonals for a winner
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
        return currentPlayer;
    }
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
        return currentPlayer;
    }

    return ' '; // No winner yet
}

int main() {
    vector<string> board(3);
    for (int i = 0; i < 3; ++i) {
        cin >> board[i];
    }

    char winner = checkWinner(board, 'X');

    if (winner == 'X') {
        cout << "Bob wins" << endl;
    } else {
        cout << "Alice wins" << endl;
    }

    return 0;
}
