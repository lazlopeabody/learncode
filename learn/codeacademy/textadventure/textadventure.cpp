#include <iostream>

int main() {
    char u_input;

    std::cout << "Welcome! Its time to find your path.\n";
    std::cout << "\nThe first step is to make a choice which road to travel.\n A. Ave A?\n B. Ave B?\n C. Ave C?\n# ";
    std::cin >> u_input;

    /* for loop to validate user input */
    for (int i = 0; i < 3 && u_input != 'A' && u_input != 'B' && u_input != 'C'; i++) {

        if (u_input != 'A' || u_input != 'B' || u_input != 'C') {
            std::cout << "Not valid input! Re-Enter your Choice!\n";
            std::cin >> u_input;
        }
    }
    /* print statement to ensure u_input is validated. */
    std::cout << u_input << "\n";

    /* switch case statements */ 
    switch (u_input) {
        case 'A':
            std::cout << "Well that road leades to riches!\n";
            break;
        case 'B':
            std::cout << "This road leades to beaches, surf and friends!\n";
            break;
        case 'C':
            std::cout << "This is a path to enlightment and balance.\n";
            break;
    }

    std::cout << "\nI hope that you find your path. Play again, its a choice.\n";
}