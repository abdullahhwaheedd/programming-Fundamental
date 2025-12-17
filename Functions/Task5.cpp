#include <iostream>
using namespace std;
bool TestJackPot(string[]);
const int size = 4;

int main()
{
    string elements[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements:";
        cin >> elements[i];
    }

    cout << TestJackPot(elements);
}
bool TestJackPot(string elements[])
{

    if (elements[0] == elements[1] && elements[2] == elements[3])
    {
        return true;
    }
    else
    {
        return false;
    }
}