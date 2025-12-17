#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    int f, rem;
    int count = 0;
    cout << "Enter a number :" << endl;
    cin >> n;
    cout << "Enter the digit you want frequency of:" << endl;
    cin >> f;
    n = abs(n);
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;

        if (rem == f)
        {
            count = count + 1;
        }
    }
    cout << "the frequency of the digit is:" << count << endl;
    return 0;
}