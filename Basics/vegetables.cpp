// Find total earnings in ruppes

#include <iostream>
using namespace std;

main()
{
    float fruitprice, vegetableprice;
    float totalkgveg, totalkgfruits, priceveg, pricefruit;
    int total;
    cout << "Enter fruit price per kg (in coins):";
    cin >> fruitprice;
    cout << "Enter vegetable price per kg (in coins):";
    cin >> vegetableprice;
    cout << "EnterTotal kg vegetables:";
    cin >> totalkgveg;
    cout << "Enter total kg fruits:";
    cin >> totalkgfruits;
    pricefruit = (1 / 1.94) * 0.194;
    priceveg = (1 / 1.94) * 19.4;
    total = (pricefruit) * 10 + (priceveg) * 10;

    cout << "Total earnings in ruppes (Rps)=" << total;
    return 0;
}