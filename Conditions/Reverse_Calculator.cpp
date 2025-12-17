// A calculator that performs operations in reverse order.

#include <iostream>
using namespace std;

main()
{
    int num1, num2, result;
    char op;
    cout << "Enter num1";
    cin >> num1;
    cout << "Enter op:";
    cin >> op;
    cout << "Enter num2";
    cin >> num2;

    if (op == '+')
    {
        result = num1 - num2;
    }
    if (op == '*')
    {
        result = num1 / num2;
    }
    if (op == '/')
    {
        result = num1 * num2;
    }
    if (op == '-')
    {
        result = num1 + num2;
    }
    cout << "Result=" << result;
    return 0;
}