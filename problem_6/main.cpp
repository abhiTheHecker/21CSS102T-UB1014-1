#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string u_in; // User input
    cout << "Enter the string: ";
    cin >> u_in;

    for (int i = u_in.length() - 1; i >= 0; i--)
    {
        cout << u_in[i];
    }

    return 0;
}