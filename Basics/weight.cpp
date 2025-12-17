// Calculate the days in which one can lose their desired weight.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    float kg, loss;
    cout << "Enter name";
    getline(cin, name);
    cout << "Enter weight you want to lose";
    cin >> kg;
    loss = kg * 15;
    cout << "You shall lose" << kg << "kgs in" << loss << "days";
    return 0;
}