#include <iostream>
#include "tictactoe_functions.hpp"



int main() { 

    char player = 'X';
    int choice = 0; 
    int endgame; 
    // reference this and access as pointer; maybe move grid into function. 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    board(grid);
    for (endgame = 0; endgame < 8; endgame++) {

        cout << "Provide Input" << endl;
        cin >> choice;

        if (choice == 1)
            if (grid[0][0] == choice) {
                cout << "Quad Set, Try Input Again." << endl;
                cin >> choice;
            }
            else if (grid[0][0] == choice && grid[0][1] == choice && grid[0][2] == choice) {
                cout << "Player " << player << " WINS!!" << endl;
            }

            else {
                grid[0][0] = choice; 
                board(grid);
                if (player == 'X') {
                    player = 'O';
                }
                else
                    player = 'X';
            }

        else if (endgame == 8) {
            cout << "Game is Draw" << endl;
        }
    }
}