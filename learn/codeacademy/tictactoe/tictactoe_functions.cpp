#include <iostream>
using namespace std;

// print board, changes to array are made directly to array. This just prints what is in array. 
char board(char grid[][3]) {

    int row = 3;
    int col = 3;

    for (int i = 0; i < row; ++i) {
        
        for (int j = 0; j < col; ++j) {
        
            std::cout << " " << grid[i][j];
        
            if (j != 2) {
                std::cout << " | "; 
            }
            else { 
                std::cout << endl; 
            }
        }

        if (i != 2) {
            std::cout << "___|____|___" << "\n";
        }
        else {
            std::cout << endl; 
        }
    }
    return 0;
}

char player_choice(char player, int choice, char grid[][3]) 
{

    switch (choice)
    {
    case 1:
        grid[0][0] = player;
        break;
    
    default:
        break;
    }
    
    return choice;
}

// youtube.com video reference for finding slot of player choice
bool check_board(int choice, char grid[][3]) {
    int row = (choice / 2);
    int col; 
    
    if (choice % 2 == 0) {
        row = row - 0;
        col = 1;
    }
    else {
        col = (choice % 2) - 1;
    }
    cout << row << ", " << col << "\n";

    if (choice == grid[row][col])
    {
        return true;
    }
    else 
        return false;

}