/*
Program :
*/

#include <iostream>
using namespace std;

int main()
{
    double quarters[1];
    double dimes[1];
    double nickels[1];
    double pennies[1];
    double totalquarters;
    double totaldimes;
    double totalnickels;
    double totalpennies;
    double sum;
    

    cout << "Enter quarters : " << endl;
    cin >> quarters[1];
    cout << "Enter dimes :" << endl;
    cin >> dimes[1];
    cout << "Enter nickels: " << endl;
    cin >> nickels[1];
    cout << "Enter pennies:" << endl;
    cin >> pennies[1];

    totalquarters = quarters[1] / 4;
    totaldimes = dimes[1] / 10;
    totalnickels = nickels[1] / 20;
    totalpennies = pennies[1] / 100;

    sum = totalquarters + totaldimes + totalnickels + totalpennies;

    cout << " Total amount due: " << sum << endl;

    if (sum >= 4.25 )
    {
        cout << " You can pay the due";
    }
    else
    {
        cout << " You cannot pay the due";
    }
}