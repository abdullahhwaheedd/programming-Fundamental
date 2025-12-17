#include <iostream>
using namespace std;

main()
{
    string country;
    cout << "Enter country name:";
    cin >> country;
    if (country == "germany" || country == "australia")
        ;
    else
    {
        cout << "You should come to visit these countries";
    }
    return 0;
}