#include <iostream>
#include <cstring>

namespace digit_funcs
{
    using namespace std;
    int digits_even(int num)
    {
        char str_num[100];
        itoa(num, str_num, 10);
        int length = strlen(str_num);

        int isEven = 1;
        int digit;

        for (int i = 0; i < length; i++)
        {
            digit = num % 10;
            num = num - digit;
            num = num / 10;
            if (digit % 2 != 0)
            {
                isEven = 0;
                break;
            }
        }

        if (isEven)
        {
            return 1;
        }
        return 0;
    }
}

using namespace std;

void checkNums(int num)
{
    int isEven = digit_funcs::digits_even(num);
    if (isEven)
    {
        cout << num << ", ";
    }
}

int main()
{
    for (int i = 100; i <= 400; i++)
    {
        checkNums(i);
    }
    return 0;
}

// TODO: Testing