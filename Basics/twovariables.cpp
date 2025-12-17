// Find sum of 5 integers using two variables only.

#include <iostream>
using namespace std;

main()
{
    int n, sum;
    cout << "Enter integer1:";
    cin >> n;
    cout << "Enter sum:";
    cin >> sum;
    sum = n + sum;
    cout << "Enter integer 2: ";
    cin >> n;
    sum = n + sum;
    cout << "Enter integer 3:";
    cin >> n;
    sum = n + sum;
    cout << "Enter integer 4:";
    cin >> n;
    sum = n + sum;
    cout << "Enter integer 5:";
    cin >> n;
    sum = n + sum;

    cout << "sum of all integers =" << sum;
    return 0;
}