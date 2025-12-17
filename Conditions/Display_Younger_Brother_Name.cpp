// Display younger brother name.

#include <iostream>
using namespace std;

main()
{
    int age1, age2, age3;
    string name1, name2, name3, result;
    cout << "Enter name1:";
    cin >> name1;
    cout << "Enter age1:";
    cin >> age1;
    cout << "Enter name2:";
    cin >> name2;
    cout << "Enter age2:";
    cin >> age2;

    cout << "Enter name3:";
    cin >> name3;
    cout << "Enter age3:";
    cin >> age3;
    if (age1 < age2, age3)
    {
        result = name1;
    }
    if (age2 < age1, age3)
    {
        result = name2;
    }
    if (age3 < age1, age2)
    {
        result = name3;
    }
    cout << "The younger brother name is:" << result;
    return 0;
}