// Find the sum of individual digits of a four digit number.

#include <iostream>
using namespace std;

main()
{
    int n, a, b, c, d, sum, rem;
    cout << "Enter a four digit number:";
    cin >> n;
    a = n / 1000;
    rem = n % 1000;
    b = rem / 100;
    rem = rem % 100;
    c = rem / 10;
    d = rem % 10;
    sum = a + b + c + d;
    cout << "The sum of the four digit number is:" << sum;
    return 0;
}