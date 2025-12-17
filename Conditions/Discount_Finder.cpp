// Find discount.

#include <iostream>
using namespace std;

main()
{
    float shopping, discount1, discount2, price1, price2;
    cout << "Enter your shopping bill price:";
    cin >> shopping;

    discount1 = (5.0 / 100) * shopping;
    discount2 = (10.0 / 100) * shopping;
    price1 = shopping - discount1;
    price2 = shopping - discount2;

    if (shopping <= 5000)
    {
        cout << " 5% discount for your shopping is:" << discount1 << endl
             << "your new price is:" << price1;
    }
    else
    {
        cout << " 10% dicount for your shopping is:" << discount2 << endl
             << "Your new price is" << price2;
    }
    return 0;
}