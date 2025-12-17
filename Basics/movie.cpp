// Find total amount got by selling tickets also the amount donated and amount earned.

#include <iostream>
using namespace std;

main()
{
    string name;
    float adultprice, childprice, noofadultticketssold,
        noofchildticketssold, amount, sum, donation, earned;
    cout << "Enter movie name:";
    cin >> name;
    cout << "Enter adult ticket price";
    cin >> adultprice;
    cout << "Enter child ticket price";
    cin >> childprice;
    cout << "Enter no of adult tickets sold:";
    cin >> noofadultticketssold;
    cout << "Enter no of child tickets sold:";
    cin >> noofchildticketssold;
    sum = (noofadultticketssold * adultprice) + (noofchildticketssold * childprice);
    cout << "Enter percentage amount you want to donate:";
    cin >> donation;
    amount = (donation / 100) * sum;
    earned = sum - amount;

    cout << "Total amount" << sum;
    cout << " amount donated =" << amount;
    cout << "The amount earned is:" << earned;
    return 0;
}