#include <iostream>
using namespace std;

main()
{
    float rfees = 10.00;
    float pfees = 25.00;
    char customer;
    string servtype;
    char time;
    int min;
    float fees;
    cout << "Enter which type of customer you are p/r:";
    cin >> customer;

    if (customer == 'r' || customer == 'R')
    {
        cout << "Enter service type used:";
        cin >> servtype;
        cout << "Enter no of minutes used:";
        cin >> min;
        if (min <= 50)
        {
            fees = rfees;
            cout << "Your fees is:" << fees << "$";
        }
        else
        {
            fees = rfees * min;
            cout << "Your fees is:" << fees << "$";
        }
    }
    if (customer == 'p' || customer == 'P')
    {
        cout << "Enter 'n' for night or 'd' for day:";
        cin >> time;

        if (time == 'd' || time == 'D')
        {
            cout << "Enter service type used:";
            cin >> servtype;
            cout << "Enter no of minutes used:" << endl;
            cin >> min;
            if (min <= 75)
            {
                fees = pfees;
                cout << "Your fees is:" << fees << "$";
            }
            else
            {
                fees = pfees * min;
            }
            cout << "Your fees is:" << fees << "$";
        }
        else if (time == 'n' || time == 'N')
            cout << "Enter service type used:";
        cin >> servtype;
        cout << "Enter no of minutes used:" << endl;
        cin >> min;
        if (min <= 100)
        {
            fees = pfees;
            cout << "Your fees is:" << fees << "$";
        }
        else

        {
            fees = pfees * min;
            cout << "Your fees =" << fees << "$";
        }
    }

    return 0;
}
