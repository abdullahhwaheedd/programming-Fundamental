// Find sum of sides of polygon.

#include <iostream>
using namespace std;

main()
{
    int n, sum;
    cout << "enter sides n:";
    cin >> n;
    sum = (n - 2) * 180;
    cout << "sum=" << sum << "degrees";
}
