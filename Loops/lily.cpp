#include <iostream>
using namespace std;

int main()
{
    int age, even, odd, money, price, washingmachineprice, finalprice;
    cout << "Enter liliy's age:";
    cin >> age;
    cout << "Enter the price of the toys:";
    cin >> price;
    cout << "Enter the price of the washing machine:";
    cin >> washingmachineprice;
    int totalmoney = 0;
    int totaltoys = 0;
    int evenmoney = 10;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            totalmoney += evenmoney - 1;
            evenmoney += 10;
        }
        else
        {
            totaltoys += 1;
        }
    }
    finalprice = totalmoney + (price * totaltoys);

    if (finalprice == washingmachineprice)
    {

        cout << "Yes you can buy";
    }
    else if (finalprice < washingmachineprice)
    {
        cout << "No you cannot buy" << endl;
        cout << "you are short of this amount" << washingmachineprice - finalprice;
    }
    else if (finalprice > washingmachineprice)
    {
        cout << "Yes you can buy" << endl;
        cout << "you are above of this amount by " << finalprice - washingmachineprice;
    }
    return 0;
}