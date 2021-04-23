#include <iostream>
#include "tictactoe_functions.hpp"
using namespace std;

int main() { 

    char player1 = 'X';
    char player2 = 'O';
    int choice1, choice2; 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    bool endgame = false;

    while (endgame != true)
    {
        cout << "Player 1 select: ";
        cin >> choice1;

        while (choice1 != choice2) {
                player_choice(choice1, grid, player1);
                break;
            if (choice1 == choice2) {
                cout << "That block is taken. Player 1 select: ";
                cin >> choice1;
            }
        }

        board(grid);

        cout << "Player 2 select: ";
        cin >> choice2;

        while (choice2 != choice1) {
            player_choice(choice2, grid, player2); 
            break;
            if (choice2 == choice1)
                cout << "That block is taken. Player 2 select: ";
                cin >> choice2;
        }
        board(grid); 
        endgame = true;
    }

    if (grid[0][0] == 'X') {
        cout << "Winner!\n";
    }

    return 0;

}