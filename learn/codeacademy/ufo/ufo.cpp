#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  
  std::vector<char> incorrect;
  bool guess = false;
  char letter;
  greet();

  while (answer != codeword && misses < 7) {

    display_misses(misses);
    display_status(incorrect, answer);
    
    std::cout << "Please enter your guess: ";
    std::cin >> letter;
    std::cout << letter << "\n";

    // loop to check user entered guesses against codeword. 
    for (int i = 0; i < codeword.length(); i++) {
        
        //check to see if letter entered, matches a letter in the codeword.
        if (letter == codeword[i]) {
            answer[i] = letter;
            guess = true;
            }
    }

    if (guess) {
      std::cout << "\nCorrect! You're closer to cracking the codeword.\n";
    }
    else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;

    end_game(answer, codeword);
  }
    
}