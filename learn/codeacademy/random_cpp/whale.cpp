#include <iostream>
#include <vector>

int main() {

    std::string input = "turpentine and turtles";
    std::vector<char> vowels = { 'a', 'e', 'i', 'o', 'u' };
    std::vector<char> result;

    for (int i = 0; i < input.size(); i++) {
        /* std::cout << input[i] << "\n"; */
        for (int j = 0; j < vowels.size(); j++) {
            if (input[i] == vowels[j]) {
                result.push_back(input[i]);
            }
        }
    }

    for (int k = 0; k < result.size(); k++) {
        /* std::cout << result[k]; */
        if (result[k] == 'e' || result[k] == 'u') {
            std::cout << result[k];
        }
    }
    
}