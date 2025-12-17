#include <iostream>
using namespace std;

main()
{
    string month;
    int date;
    cout << "Enetr your birth month  ";
    cin >> month;
    cout << "Enter date:";
    cin >> date;
    if (month == "march")
        if (date >= 21)
            cout << "your sign is: Aries " << endl
                 << "Your symbol is : The Ram";
    if (month == "April")
        if (date <= 19)
            cout << "your sign is:Aries " << endl
                 << "Your symbol is :The Ram";
    if (month == "April")
        if (date >= 20)
            cout << "your sign is:Taurus " << endl
                 << "Your symbol is : The Bull";
    if (month == "May")
        if (date <= 20)
            cout << "your sign is:Taurus " << endl
                 << "Your symbol is : The bull";
    if (month == "May")
        if (date >= 21)
            cout << "your sign is:Gemini " << endl
                 << "Your symbol is : The twins";
    if (month == "June")
        if (date <= 20)
            cout << "your sign is: Gemini " << endl
                 << "Your symbol is : The Twins";
    if (month == "June")
        if (date >= 21)
            cout << "your sign is:Cancer " << endl
                 << "Your symbol is :The crab";
    if (month == "July")
        if (date <= 22)
            cout << "your sign is:Cancer " << endl
                 << "Your symbol is :The crab";
    if (month == "July")
        if (date >= 23)
            cout << "your sign is:Leo " << endl
                 << "Your symbol is : The lion";
    if (month == "August")
        if (date <= 22)
            cout << "your sign is:Leo " << endl
                 << "Your symbol is : The lion";
    if (month == "August")
        if (date >= 23)
            cout << "your sign is: Virgo " << endl
                 << "Your symbol is : The virgin";
    if (month == "September")
        if (date <= 22)
            cout << "your sign is:Virgo " << endl
                 << "Your symbol is : The virgin";
    if (month == "September")
        if (date >= 23)
            cout << "your sign is:Libra " << endl
                 << "Your symbol is :The Scales";
    if (month == "October")
        if (date <= 22)
            cout << "your sign is:Libra " << endl
                 << "Your symbol is :The Scales";
    if (month == "October")
        if (date >= 23)
            cout << "your sign is:Scorpio " << endl
                 << "Your symbol is : The scorpion";
    if (month == "November")
        if (date <= 21)
            cout << "your sign is:Scorpio " << endl
                 << "Your symbol is :The scorpion";
    if (month == "November")
        if (date >= 22)
            cout << "your sign is: Sagittarius " << endl
                 << "Your symbol is : The Archer";
    if (month == "December")
        if (date <= 21)
            cout << "your sign is:Sagittarius " << endl
                 << "Your symbol is : The Archer";
    if (month == "December")
        if (date >= 22)
            cout << "your sign is: Capricon " << endl
                 << "Your symbol is : The Goat";
    if (month == "January")
        if (date <= 19)
            cout << "your sign is:Capricon " << endl
                 << "Your symbol is : The Got";
    if (month == "January")
        if (date >= 20)
            cout << "your sign is:Aquarius " << endl
                 << "Your symbol is : The Water Bearer";
    if (month == "Feburary")
        if (date <= 18)
            cout << "your sign is:Aquarius " << endl
                 << "Your symbol is : The Water bearer";
    if (month == "February")
        if (date >= 19)
            cout << "your sign is: Pisces " << endl
                 << "Your symbol is : The Fishes";
    if (month == "March")
        if (date <= 20)
            cout << "your sign is:Pisces " << endl
                 << "Your symbol is : The Fishes";
    return 0;
}