#include <iostream>

using namespace std;

int main() {
    int x, y, res, op;

    cout << "Enter a number: ";
    cin >> x;
    
    cout << "Enter another number: ";
    cin >> y;

    cout << "Enter: \n1. for Addition\n2. for Subtraction\n3. for Multiplication\n4. for Division\n5. for Modulus\n";
    cout << "Enter your choice: ";
    cin >> op;

    if (op == 1) {
        res = x + y;
    } else if ( op == 2){
        res = x - y;
    } else if (op == 3) {
        res = x * y;
    } else if (op == 4) {
        res = x / y;
    } else if (op == 5) {
        res = x % y;
    } else {
        cout << "Invalid choice";
    }

    cout << "The result is " << res;

    return 0;
}