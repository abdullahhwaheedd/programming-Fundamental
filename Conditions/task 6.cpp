#include <iostream>
using namespace std;

main()
{
    string fruit, day;
    float bp1 = 2.50;
    float ap1 = 1.20;
    float op1 = 0.85;
    float gfp1 = 1.45;
    float gp1 = 3.85;
    float pap1 = 5.50;
    float kp1 = 2.70;
    float bp2 = 2.70;
    float ap2 = 1.25;
    float op2 = 0.90;
    float gfp2 = 1.60;
    float gp2 = 4.20;
    float pap2 = 5.60;
    float kp2 = 3.00;
    cout << "Enter name of fruit:";
    cin >> fruit;
    cout << "Enter the day:";
    cin >> day;
    if (fruit == "Banana" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << bp1;
    }
    else if (fruit == "Banana" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << bp2;
    }
    else if (fruit == "Apple" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << ap1;
    }
    else if (fruit == "Apple" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << ap2;
    }
    else if (fruit == "Orange" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << op1;
    }
    else if (fruit == "Ornage" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << op2;
    }
    else if (fruit == "Grapefruit" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << gfp1;
    }
    else if (fruit == "Grapefruit" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << gfp2;
    }
    else if (fruit == "Kiwi" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << kp1;
    }
    else if (fruit == "Kiwi" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << kp2;
    }
    else if (fruit == "Pineapple" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << pap1;
    }
    else if (fruit == "Pineapple" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << pap2;
    }
    else if (fruit == "Grapes" && day == "Monday" || day == "Tuesday" || day == "wednesday" || day == "Thursday" || day == "Friday")
    {
        cout << "Your price:" << gp1;
    }
    else if (fruit == "Grapes" && day == "Saturday" || day == "Sunday")
    {
        cout << "Your price is:" << gp2;
    }
    return 0;
}