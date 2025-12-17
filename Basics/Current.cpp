//  Find current.

#include <iostream>
using namespace std;

main()
{
    float charge;
    float time;
    float current;
    cout << "Enter charge (Q) in coulombs :";
    cin >> charge;
    cout << "Enter time (t) in seconds :";
    cin >> time;
    current = charge / time;
    cout << "Current(Q)=" << current << "Amperes";
    return 0;
}