#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> incorrect(10);
    char letter;

    cin >> letter;
    cout << letter;

    for (int i =0; i < incorrect.size(); i++) 
    {
        incorrect[i] = letter;
        cout << incorrect[i] << "\n";
    }
}