#include <iostream>
#include <string>

using namespace std;

int main()
{
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int num_days[12] = {31, 27, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    string user_input;
    cout << "Enter the month name: ";
    cin >> user_input;

    int index;

    for (int i = 0; i < 12; i++)
    {
        if (months[i] == user_input)
        {
            index = i;
        }
    }

    cout << "The number of days is " << num_days[index];

    return 0;
}

//! Question is unclear
