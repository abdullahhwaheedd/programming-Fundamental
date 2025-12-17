// Find time spent in houses.

#include <iostream>
using namespace std;

main()
{
    int age, move, spent1, spent2;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter the no of times you moved";
    cin >> move;
    spent1 = (age) / (move + 1);
    spent2 = age;
    cout << "time spent is:" << spent1;

    return 0;
}