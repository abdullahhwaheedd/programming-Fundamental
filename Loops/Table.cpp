#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int m = 0;
    cout << "Enter a number you want the table of:";
    cin >> n;
    for (m = 1; m <= 10; m++)
    {

        cout << n << "x" << m << "=" << n * m << endl;
    }
    return 0;
}
