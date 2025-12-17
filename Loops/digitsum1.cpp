#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int count = 0;
    int rem;
    cout << "Enter a number:" << endl;
    cin >> n;
    n = abs(n);
    while (n > 0)
    {
        n = n / 10;
        rem = n % 10;
        count = count + 1;
    }
    cout << "The number of digits are:" << count;
}