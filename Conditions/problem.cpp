#include <iostream>
using namespace std;

main()
{
    string temp, humidity;
    cout << "Enter temperrature:";
    cin >> temp;
    cout << "Enter huimidity:";
    cin >> humidity;
    if (temp == "warm")
        if (humidity == "dry")
            cout << "Play tennis";
    if (temp == "warm")
        if (humidity == "humid")
            cout << "Swim";
    if (temp == "cold")
        if (humidity == "dry")
            cout << "Play basketball";
    if (temp == "cold")
        if (humidity == "humid")
            cout << "Watch tv";
    return 0;
}