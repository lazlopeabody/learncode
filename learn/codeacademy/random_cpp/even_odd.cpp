#include <iostream>
#include <vector>
#include <typeinfo>

int main() {
    int even = 0;
    int product = 1;
    int set;

    std::vector<int> numbers(10);

    for (int i = 1; i < 11; i++) {

        numbers[i] = i;

        if (numbers[i] % 2 == 0) {
            even = even + numbers[i];
        }

        else {
            product = product * numbers[i];
        }
    }

    std::cout << even << "\n";
    std::cout << product << "\n";

    return 0;

}