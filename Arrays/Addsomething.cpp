/*
Program : A program in which a tring " something " with a space comes before the argument/sentence;
*/
#include <iostream>
using namespace std;

int main()
{
    char str[50];

    cout << "Enter argument :";
    cin.getline(str, 50);

    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << "Something" << " ";
    for (int i = 0; i < length; i++)
    {
        cout << str[i];
    }
    return 0;
}
