#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    string input = "a whale of a deal!\n";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result_vowels;

    /*
    cout << "Please enter a phrase to translate to whales\n";
    cin >> input;
    */
    cout << input;

    for (int i = 0; i < input.size(); i++) {
       //* cout << test_input[i] << "\n"; *//

        for (int j = 0; j < vowels.size(); j++) {
            //* cout << input[j] << "\n"; *//
            if (input[i] == vowels[j]) {
                if (input[i] == 'u' || input[i] == 'e'){
                    result_vowels.push_back(input[i]);
                }
                result_vowels.push_back(input[i]);
            }
        }
    }

    for (int k = 0; k < result_vowels.size(); k++) {
        cout << result_vowels[k];
    }
    cout << "\n";

}