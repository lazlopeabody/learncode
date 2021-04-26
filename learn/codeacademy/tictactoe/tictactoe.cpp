#include <iostream>
#include "tictactoe_functions.hpp"

int main() { 

    char player = 'X';
    int choice = 0; 
    int endgame = 0;
    // reference this and access as pointer; maybe move grid into function. 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    board(grid);

    while (endgame < 8) {

        choice = userInput(choice);
        
        while (choice != 0) {

            if (grid[0][0] == 'X' || grid[0][0] == 'O') {
                cout << "Quad Set, Try Input Again." << endl;
                break;
            }

            else if (grid[0][0] == player && grid[0][1] == player && grid[0][2] == player) {
                cout << "Player " << player << " WINS!!" << endl;
            }

            else {
                grid[0][0] = player; 
                board(grid);

                if (player == 'X') {
                    player = 'O';
                }
                else
                    player = 'X';

            }

            cout << player << endl; 

        if (endgame != 8) {
            endgame += 1;
            }
        else 
            cout << "Game is Draw" << endl;
            break;
        }
    }
}