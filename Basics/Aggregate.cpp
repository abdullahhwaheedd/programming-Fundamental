// Find aggregate score for UET.

#include <iostream>
using namespace std;

main()
{
    string name;
    int matricmarks;
    int intermarks;
    int ecatmarks;
    float aggregate;
    cout << "Enter Name:";
    cin >> name;
    cout << "Enter matric marks out of 1100:";
    cin >> matricmarks;
    cout << "Enter inter marks out of 555:";
    cin >> intermarks;
    cout << "Enter ecat marks out of 400:";
    cin >> ecatmarks;
    aggregate = (ecatmarks / 400.0) * 50 + (intermarks / 555.0) * 40 + (matricmarks / 1100.0) * 10;
    cout << "Your ecat aggregate is:" << aggregate;
    return 0;
}