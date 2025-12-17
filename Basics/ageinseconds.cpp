// Convert age in years into days.

#include <iostream>
using namespace std;

main()
{
    int ageinyears;
    int ageindays;
    cout << "Enter age in years:";
    cin >> ageinyears;
    ageindays = ageinyears * 365;
    cout << "age" << ageinyears << " years in days is:" << ageindays;
    return 0;
}