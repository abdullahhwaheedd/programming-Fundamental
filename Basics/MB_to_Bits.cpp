// Convert megabytes into bits.

#include <iostream>
using namespace std;

main()
{
    float bits = 8388608;
    float megabytes;
    cout << "Enter Megabytes";
    cin >> megabytes;
    bits = megabytes * bits;
    cout << megabytes << "MB is equivalent to " << bits << "bits";
    return 0;
}