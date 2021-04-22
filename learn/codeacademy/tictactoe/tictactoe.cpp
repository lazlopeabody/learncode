#include <iostream>
#include "tictactoe_functions.hpp"
using namespace std;

int main() {

    char player1;
    char grid[3][3] = { {'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'} };
    bool endgame = false;    
    
    cout << "Player 1 select: ";
    cin >> player1;
    cout << player1 << "\n";


    grid[0][1] = player1;

    board(grid);

    return 0;
}