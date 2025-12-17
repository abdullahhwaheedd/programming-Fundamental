/*
Program: Largest number in an array
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the quantity of numbers you want to enter: ";
    cin >> size;
    int num[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number:";
        cin >> num[i];
    }
    int largest = num[0];
    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "Largest :" << largest;

    return 0;
}
