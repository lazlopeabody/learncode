#include <iostream>
#include "tictactoe_functions.hpp"

int main() { 

    char player = 'X';
    int choice = 0; 
    bool endgame = false;
    bool gc = false;
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    board(grid);

    while (endgame != true) {

        bool gc = gridCheck(player, userInput(choice), grid);

        cout << endgame << " - " << gc << " Player " << player << endl;
        player = gc;
        cout << endgame << " - " << gc << " Player " << player << endl;

        winCheck(player, grid);
        board(grid);

    } 
        
}