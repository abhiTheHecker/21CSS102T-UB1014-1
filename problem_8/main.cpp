#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int alphabeCount = 0, digitCount = 0;
    char str[100];

    int length = strlen(str);

    cout << "Enter a string: ";
    scanf("%s", str);

    for (int i = 0; i < length; i++)
    {
        char letter = str[i];
        if (isalpha(letter))
        {
            alphabeCount += 1;
        }
        else if (isdigit(letter))
        {
            digitCount += 1;
        }
        else
        {
            ;
        }
    }

    cout << "Number of alphabets is " << alphabeCount << "\n";

    cout << "Number of digits is " << digitCount << "\n";
    return 0;
}

//! Bugs: Strings with spaces are not accepted for some reason