// Convert weight from pounds into kilograms.

#include <iostream>
using namespace std;

main()
{
    float lbs;
    float kgs;
    cout << "Enter weight in lbs:";
    cin >> lbs;
    lbs = lbs * 0.45;
    cout << "weight in kgs =" << lbs << "kgs";
    return 0;
}