#include <iostream>
using namespace std;

// print board
char board(char grid[][3]) {

    int col = 3;
    int row = 3;

    for (int i = 0; i < row; ++i) {
        
        for (int j = 0; j < col; ++j) {
        
            cout << " " << grid[i][j];
        
            if (j != 2) {
                cout << " | "; 
            }
            else { 
                cout << endl; 
            }
        }

        if (i != 2) {
            cout << "___|____|___" << "\n";
        }
        else {
            cout << endl; 
        }
    }
    return 0;
}

char player_choice(int choice, char grid[][3], char player){

    switch (choice)
    {
    case 1:
        grid[0][0] = player; 
            break;
    case 2:
        grid[0][1] = player; 
        break;
    case 3:
        grid[0][2] = player; 
        break;

    default:
        break;
    }

    return 0;
}
