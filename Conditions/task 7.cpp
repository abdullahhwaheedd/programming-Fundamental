#include <iostream>
using namespace std;

main()
{
    float stdMO = 50;
    float stdJS = 75.20;
    float stdJA = 76;
    float apMO = 65;
    float apJS = 68.70;
    float apJA = 77;
    string month;
    int stays;
    float tsmo, tsjs, tsja, tamo, tajs, taja, stdfees, apfees;
    cout << "Enter your month :";
    cin >> month;
    cout << "Enter no of stays: ";
    cin >> stays;
    tsmo = stdMO * stays;
    tsjs = stdJS * stays;
    tsja = stdJA * stays;
    tamo = apMO * stays;
    tajs = apJS * stays;
    taja = apJA * stays;
    if (month == "may" || month == "october")
    {
        stdfees = tsmo;
        apfees = tamo;
        if (stays > 14)
        {
            stdfees = tsmo - (30.0 / 100) * tsmo;
            apfees = tamo - (10.0 / 100) * tamo;
        }
        else if (stays > 7)
        {
            stdfees = tsmo - (5.0 / 100) * tsmo;
        }
    }
    else if (month == "june" || month == "september")
    {
        stdfees = tsjs;
        apfees = tajs;

        if (stays > 14)
        {
            stdfees = tsjs - (20.0 / 100) * tsjs;
            apfees = tajs - (10.0 / 100) * tajs;
        }
    }
    else if (month == "july" || month == "august")
    {
        stdfees = tsja;
        apfees = taja;

        if (stays > 14)
        {
            apfees = taja - (10.0 / 100) * taja;
        }
    }
    cout << "Apartment:" << apfees << "$." << endl;
    cout << "Studio fees:" << stdfees << "$." << endl;

    return 0;
}
