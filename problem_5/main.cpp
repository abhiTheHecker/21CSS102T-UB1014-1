#include <iostream>

using namespace std;

int main()
{
    // User Input also will work
    int max_num = 5;
    for (int i = 1; i <= max_num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int i = (max_num - 1); i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}