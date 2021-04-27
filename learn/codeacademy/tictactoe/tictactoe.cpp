#include <iostream>
#include "tictactoe_functions.hpp"

int main() { 

    char player = 'X';
    int choice = 0; 
    int endgame = 0;
    // reference this and access as pointer; maybe move grid into function. 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    board(grid);

    for (endgame; endgame < 8; endgame++) {

        bool gc = gridCheck(player, userInput(choice), grid);
        cout << endgame << " - " << gc << " Player " << player << endl;
        while (gc == 0)
            break;

        winCheck(player, grid);
        player = chngPlayer(player);
        board(grid);

    } 
        
}