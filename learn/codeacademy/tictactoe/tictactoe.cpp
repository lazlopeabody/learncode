#include <iostream>
#include "tictactoe_functions.hpp"


int main() { 

    char player1, player2;
    int choice; 
    // reference this and access as pointer; maybe move grid into function. 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    bool endgame = false;

    // Select X or O; want to put this into a function need to return 2 variables or...
    std::cout << "Select X or O\n"; 
    std::cin >> player1; 
    if (player1 == 'X') {
        player2 = 'O';
    }
    else { player2 = 'X';}

    while (choice != '\0') {
        // First Player Go 
        std::cout << "Player select quadrant: ";
        std::cin >> choice;

        player_choice(player1, choice, grid);

        if (check_board(choice, grid) == true){
            std::cout << "Select your qaud again? ";
            std::cin >> choice; 
        }
        else 
            board(grid);
    }

    return 0;

}