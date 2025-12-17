/*
 Program : Find position of each alphabet/character in an array
*/

#include <iostream>
using namespace std;

int main()
{
    char str[50];

    cout << "Enter string:" << endl;
    cin.getline(str, 50);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        cout << str[i] << " is at: " << i << endl;
    }
}