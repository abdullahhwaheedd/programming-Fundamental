// Calculate power.


#include <iostream>
using namespace std;

main()
{
    float voltage, current, power;
    cout << "Enter current in Amperes:";
    cin >> current;
    cout << "Enter voltage in volts:";
    cin >> voltage;
    power = current * voltage;
    cout << "Power in watts:" << power;
    return 0;
}