#include <iostream>
#include <string>
using namespace std;

void Convert(string pin);

int main()
{

    string userPIN;
    cout << "Enter your 4-digit PIN: ";
    cin >> userPIN;

    Convert(userPIN);

    return 0;
}

void Convert(string pin)
{

    string MOVES[10] = {
        "Shimmy", "Shake", "Pirouette", "Slide", "Box Step",
        "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    if (pin.length() != 4)
    {
        cout << "Invalid input." << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (pin[i] < '0' || pin[i] > '9')
        {
            cout << "Invalid input." << endl;
            return;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i] - '0';
        int index = (digit + i) % 10;

        cout << "\"" << MOVES[index] << "\"";
        if (i < 3)
            cout << ", ";
    }

    cout << endl;
}
