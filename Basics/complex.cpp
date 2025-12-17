// Find ultimate result.

#include <iostream>
using namespace std;

main()
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, sum1, mul, sub, sum2, result;
    cout << "Enter n1:";
    cin >> n1;
    cout << "Enter n2:";
    cin >> n2;
    cout << "Enter n3:";
    cin >> n3;
    cout << "Enter n4:";
    cin >> n4;
    cout << "Enter n5";
    cin >> n5;
    cout << "Enter n6:";
    cin >> n6;
    cout << "Enter n7:";
    cin >> n7;
    cout << "Enter n8:";
    cin >> n8;
    cout << "Enter n9:";
    cin >> n9;
    cout << "Enter n10:";
    cin >> n10;
    cout << "Enter n11:";
    cin >> n11;
    cout << "Enter n12:";
    cin >> n12;
    cout << "Enter n13:";
    cin >> n13;
    cout << "Enter n14:";
    cin >> n14;
    cout << "Enter n15:";
    cin >> n15;
    sum1 = n1 + n2 + n3 + n4 + n5;
    mul = n6 * n7 * n8 * n9 * n10;
    sub = n11 - n12 - n13 - n14 - n15;
    sum2 = (sum1 + mul) - sub;
    result = sum2;
    cout << "The ultimate result is:" << result;
    return 0;
}