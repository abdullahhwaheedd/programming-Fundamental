#include <iostream>
using namespace std;

int main()
{
    char str[50];
    char ch;

    cout << "Enter string :";
    cin >> str;
    cout << "Enter a character:";
    cin >> ch;

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    int flag = 1;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ch)
        {
            cout << "Found ";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << " Not found";
    }
    return 0;
}