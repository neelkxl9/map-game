#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    vector<string> countries = {
        "India", "USA", "Brazil", "Australia", "Canada",
        "Japan", "Germany", "France", "Russia", "South Africa"
    };

    srand(time(0));
    string secret = countries[rand() % countries.size()];

    cout << "=== MAP GAME ===\n";
    cout << "Guess the country!\n";

    string guess;
    while (true) {
        cout << "Your guess: ";
        getline(cin, guess);

        if (toLowerCase(guess) == toLowerCase(secret)) {
            cout << "Correct! It was " << secret << ".\n";
            break;
        } else {
            cout << "Wrong! Try again.\n";
        }
    }
}
