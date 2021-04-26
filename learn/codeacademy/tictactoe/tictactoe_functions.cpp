#include <iostream>
using namespace std;

// print board, changes to array are made directly to array. This just prints what is in array. 
char board(char grid[][3]) {

    int r = 3;
    int c = 3;

    for (int i = 0; i < r; ++i) {
        
        for (int j = 0; j < c; ++j) {
        
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
// parameters are the choice of user, the fucntion that returns player type(X, O), 
// and the grid to be modified by player type. 
void mark_board(int choice, char grid[][3]) 
{

    switch (choice)
    {
    case 1:
        grid[0][0] = 'X';
        break;

    case 2:
        grid[0][1] = 'X';
        break;
    case 3:
        grid[0][2] = 'X';
        break;
    case 4:
        grid[1][0] = 'X';
        break;
    case 5:
        grid[1][1] = 'X';
        break;
    case 6:
        grid[1][2] = 'X';
        break;
    case 7:
        grid[2][0] = 'X';
        break;
    case 8:
        grid[2][1] = 'X';
        break;
    case 9:
        grid[2][2] = 'X';
        break;

    default:
        break;
    }
}

// youtube.com video reference for finding slot of player choice
void check_choice(int choice, char grid[][3]) {
    
    int row = (choice / 3);
    int col; 
    
    if (choice % 3 == 0) {
        row = row - 0;
        col = 2;
    }
    else {
        col = (choice % 3) - 1;
    }
    
}

int userInput() {
        int choice;
        std::cout << "Player select your quadrant: " << endl;
        std::cin >> choice;

        return choice;
    }

void chngPlayer(char player) {

        if (player == 'X') {
            player = 'O';
        }
        else 
            player = 'X';

}

/*
int check_board(){
// seperate function
    do {
        if (grid[row][col] = 'X') {
            cout << "Sorry, quad already filled. Select again.\n";
            cin >> choice;
        }
        else
            break;
    } while (choice != choice)


} */