#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char board[3][3];
char currentPlayer;

void initBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
    currentPlayer = 'X';
}

void displayBoard() {
    printf("\n");
    printf("     0   1   2\n");
    printf("   +---+---+---+\n");
    for (int i = 0; i < 3; i++) {
        printf(" %d | %c | %c | %c |\n", i, board[i][0], board[i][1], board[i][2]);
        printf("   +---+---+---+\n");
    }
    printf("\n");
}

int isValidMove(int row, int col) {
    if (row < 0 || row >= 3 || col < 0 || col >= 3) {
        return 0;
    }
    return board[row][col] == ' ';
}

int checkWin() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && 
            board[i][1] == currentPlayer && 
            board[i][2] == currentPlayer) {
            return 1;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == currentPlayer && 
            board[1][i] == currentPlayer && 
            board[2][i] == currentPlayer) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == currentPlayer && 
        board[1][1] == currentPlayer && 
        board[2][2] == currentPlayer) {
        return 1;
    }
    if (board[0][2] == currentPlayer && 
        board[1][1] == currentPlayer && 
        board[2][0] == currentPlayer) {
        return 1;
    }

    return 0;
}

int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    int row, col;
    int gameOver = 0;

    printf("╔════════════════════════╗\n");
    printf("║ Welcome to Tic Tac Toe ║\n");
    printf("╚════════════════════════╝\n");

    initBoard();

    while (!gameOver) {
        displayBoard();
        printf("Player %c's turn\n", currentPlayer);
        printf("Enter row (0-2) and column (0-2): ");

        if (scanf("%d %d", &row, &col) != 2) {
            // Clear input buffer
            while (getchar() != '\n');
            printf("Invalid input! Please enter two numbers.\n");
            continue;
        }

        if (!isValidMove(row, col)) {
            printf("Invalid move! That cell is already taken or out of bounds.\n");
            continue;
        }

        board[row][col] = currentPlayer;

        if (checkWin()) {
            displayBoard();
            printf("🎉 Player %c wins! 🎉\n", currentPlayer);
            gameOver = 1;
        } else if (isBoardFull()) {
            displayBoard();
            printf("It's a draw!\n");
            gameOver = 1;
        } else {
            switchPlayer();
        }
    }

    printf("\nThanks for playing!\n");
    return 0;
}