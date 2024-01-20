#include <iostream>
#include <string>
#include <cstring>

namespace string_functions
{
    int has_caps(char str[])
    {
        char cap_letters[] = {
            'A',
            'B',
            'C',
            'D',
            'E',
            'F',
            'G',
            'H',
            'I',
            'J',
            'K',
            'L',
            'M',
            'N',
            'O',
            'P',
            'Q',
            'R',
            'S',
            'T',
            'U',
            'V',
            'W',
            'X',
            'Y',
            'Z'};

        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            char letter = str[i];
            for (int j = 0; j < 26; j++)
            {
                if (letter == cap_letters[j])
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    int has_small(char str[])
    {
        char small_letters[] = {
            'a',
            'b',
            'c',
            'd',
            'e',
            'f',
            'g',
            'h',
            'i',
            'j',
            'k',
            'l',
            'm',
            'n',
            'o',
            'p',
            'q',
            'r',
            's',
            't',
            'u',
            'v',
            'w',
            'x',
            'y',
            'z'};
        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            char letter = str[i];
            for (int j = 0; j < 26; j++)
            {
                if (letter == small_letters[j])
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    int has_special(char str[])
    {
        char special_letters[] = {'#', '$', '@'};
        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            char letter = str[i];
            for (int j = 0; j < 26; j++)
            {
                if (letter == special_letters[j])
                {
                    return 1;
                }
            }
        }
        return 0;
    }
}

using namespace std;

int main()
{
    int hasCapital = 0, hasSmall = 0, hasDigit = 0, hasSpecial = 0;
    char password[100];
    cout << "Enter your password: ";
    scanf("%s", &password);

    hasCapital = string_functions::has_caps(password);
    hasSmall = string_functions::has_small(password);
    hasSpecial = string_functions::has_special(password);

    if (hasCapital && hasSmall && hasSpecial)
    {
        cout << password << " is a strong password";
    }
    else
    {
        cout << password << " is a weak password";
    }

    return 0;
}

//! BUGS: Input RandomPassword123 shud be weak but the program says it's strong
//? Refer to: namespaces