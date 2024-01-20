#include <iostream>
#include <random>

using namespace std;

int main() {
    std::random_device rd; // Random seed
    std::uniform_int_distribution<int> dist(1, 9); // Random number generator

    int ans = dist(rd);

    int u_input;
    cout << "Guess a number from 1 to 9: ";
    cin >> u_input;
    if (u_input == ans) {
        cout << "You win";
    } else {
        cout << "You lose\n";
        cout << "The correct number was " << ans;
    }
    return 0;
}