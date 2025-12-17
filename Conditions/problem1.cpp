#include <iostream>
using namespace std;

main()
{
    string name;
    float ticketprice, discount1, discount2, totalprice1, totalprice2;
    cout << "Enter country name";
    cin >> name;
    cout << "Enter ticket price:";
    cin >> ticketprice;
    discount1 = (5.0 / 100) * ticketprice;
    discount2 = (10.0 / 100) * ticketprice;
    totalprice1 = ticketprice - discount1;
    totalprice2 = ticketprice - discount2;
    if (name == "ireland")
    {
        cout << "Ater applying 10% dsicount your new price is:" << totalprice2;
    }
    else
    {
        cout << "after applying 5% discount your new price is:" << totalprice1;
    }
    return 0;
}
