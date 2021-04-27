#include <iostream>
using namespace std;

// print board, changes to array are made directly to array. This just prints what is in array. 
char board(char grid[][3]) {

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
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

// function checks if qaudrant is taken, if not will set the qaudtrant
// parameters are the player symbol, player choice,  
// and the tictactoe array 
char gridCheck(char player, int choice, char grid[][3]) 
{
    char plyr = player;

    switch (choice)
    {
    case 1:
        if (grid[0][0] == 'X' || grid[0][0] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[0][0] = player;

            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
            }
    case 2:
        if (grid[0][1] == 'X' || grid[0][1] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[0][1] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
            } 
    case 3:
        if (grid[0][2] == 'X' || grid[0][2] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[0][2] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
            }
    case 4:
        if (grid[1][0] == 'X' || grid[1][0] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[1][0] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
        }
    case 5:
        if (grid[1][1] == 'X' || grid[1][1] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[1][1] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
        }
    case 6:
        if (grid[1][2] == 'X' || grid[1][2] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[1][2] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
        }
    case 7:
        if (grid[2][0] == 'X' || grid[2][0] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[2][0] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
        }
    case 8:
        if (grid[2][1] == 'X' || grid[2][1] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[2][1] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break;
        }
    case 9:
        if (grid[2][2] == 'X' || grid[2][2] == 'O') {
            cout << "The QUAD is taken. Input your choice again." << endl;
            break;
        }
        else {
            grid[2][2] = player; 
            if (plyr == 'X')
                plyr == 'O';
            else 
                plyr == 'X';
            break; 
        }

    default:
        if (choice > 9 || choice == 0) {
            cout << "Your number is not good. Try again with Input [1-9] Player ..." << endl;
            break;
        }
    
    }
    return plyr;
}

// function is designed to ask user for choice and return this choice
int userInput(int choice) {

    cout << "Please enter your Grid Number: " << endl;
    cin >> choice;

    if (!cin) {
        cout << "Choice was not an int..." << endl;
    }

    return choice;

}

// function is designed to change the player, default is X first. 
char chngPlayer(char player) {

    if (player == 'X') {
        player = 'O';
        }
    else if (player == 'O') 
        player = 'X';
    
    return player;
}

// function to check if the player has won.  
bool winCheck(char player, char grid[][3]) {

    int i, j;
    if (grid[0][0] == player && grid[0][1] == player && grid[0][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }

    else
        return false;

}