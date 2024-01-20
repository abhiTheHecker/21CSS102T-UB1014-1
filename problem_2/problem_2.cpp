#include <iostream>

using namespace std;

int main() {
    for (int i = 1000; i <= 2000; i ++) {
        if (i % 40 == 0) {
            cout << i << "\n";
        }
    }
        return 0;
}