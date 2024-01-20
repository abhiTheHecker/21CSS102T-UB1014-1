#include <iostream>

using namespace std;

int main()
{
    int num_rows;
    cout << "Enter the number of rows: ";
    cin >> num_rows;

    for (int i = num_rows; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}