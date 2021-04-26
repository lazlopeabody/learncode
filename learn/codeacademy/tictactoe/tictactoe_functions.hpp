#include <iostream>
using namespace std;

// Declare functions
char board(char grid[][3]); //print the board
int userInput(); //function for userinput, return 
char chngPlayer(char player);

void mark_board(int choice, char grid[][3]); 
void (*check_choice)(int choice, char grid[][3]);