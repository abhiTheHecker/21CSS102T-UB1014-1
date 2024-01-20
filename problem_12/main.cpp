#include <iostream>

namespace solution
{
    int sum(int a, int b)
    {
        int res = a + b;
        if (res >= 105 && res <= 200)
        {
            return 200;
        }
        return res;
    }
}

using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    int res = solution::sum(a, b);
    cout << res;
    return 0;
}