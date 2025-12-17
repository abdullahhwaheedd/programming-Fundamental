// Find that Ali can buy the laptop or not.

#include <iostream>
using namespace std;

main()
{
    int salary, advance, advcal, correctadvance;
    salary = 10000;
    cout << "Enter salary:" << salary;
    advance = 10000.0 / 2;
    advcal = advance * 6;
    correctadvance = advance * 10;
    if (advcal == 50000)
    {
        cout << "he can buy the laptop";
    }
    else
    {
        cout << " He cannot buy the laptop" << endl;
        cout << "If you want then you should ask for 10 months = " << correctadvance << "advance for laptop ";
    }

    return 0;
}