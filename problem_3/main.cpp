#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[100]; // Every c program and datatype is also valid in c++

    cout << "Enter the string: ";
    scanf("%s", &str);

    strrev(str);

    cout << str;

    return 0;
}