#include <iostream>
#include "tictactoe_functions.hpp"



int main() { 

    char player = 'X';
    int choice; 
    // reference this and access as pointer; maybe move grid into function. 
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    
    board(grid);
    mark_board(userInput(), grid);

    board(grid);

}