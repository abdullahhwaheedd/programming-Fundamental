#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double money;
    int year, agenew;
    int agepast = 18;
    double dollarseven = 0;
    double dollarsodd = 0;
    double totalmoneyspent;
    cout << "Enter the money ivan got:";
    cin >> money;
    cout << "Enter the year he will live:";
    cin >> year;
    agenew = year - 1800;

    for (int i = 0; i <= agenew; i++)
    {
        if ((1800 + i) % 2 == 0)
        {
            dollarseven += 12000;
        }
        else
        {
            int currentage = agepast + i;
            dollarsodd += 12000 + (50 * currentage);
        }
    }
    totalmoneyspent = dollarseven + dollarsodd;
    cout << fixed << setprecision(2);
    if (money >= totalmoneyspent)
    {
        cout << "He can live a happy life " << endl;
        cout << "The extra money he has is:" << money - totalmoneyspent;
    }
    else
    {
        cout << "He is short of: " << totalmoneyspent - money << " Dollars";
    }

    return 0;
}