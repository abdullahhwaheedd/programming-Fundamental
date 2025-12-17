// Calculate no of people after three decades.

#include <iostream>
using namespace std;

main()
{
    int population, n, afterdecade;
    cout << "Enter the population now:";
    cin >> population;
    cout << "Enter no of births monthly:";
    cin >> n;
    afterdecade = ((n * 12) * 30) + population;
    cout << "After decade population shall be:" << afterdecade;
    return 0;
}