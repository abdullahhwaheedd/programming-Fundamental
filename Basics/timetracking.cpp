// Convert hours to seconds.

#include <iostream>
using namespace std;

main()
{
    int secs;
    int hours;
    cout << "Enter hours:";
    cin >> hours;
    secs = hours * 3600;
    cout << hours << "in secs are:" << secs << "secs";
    return 0;
}