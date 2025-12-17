/*
Program : Add 7 at the end of each string ignore those which already ends with 7
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << " Enter size :";
    cin >> size;

    char str[size];

    for (int i = 0; i < size; i++)
    {
        cout << " Enter characters: ";
        cin >> str[i];
    }
    for (int i = 0; i < size; i++)
    {

        cout << str[i] << "7";
        if (str[i] == 7)
        {
            continue;
        }
    }
}
