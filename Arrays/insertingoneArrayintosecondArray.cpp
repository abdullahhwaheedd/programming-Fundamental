/*
Program : Enter an array of two numbers than an array of n numbers after that insert the 
second array in the middle of first array.
*/

#include <iostream>
using namespace std;

int main()
{
    int size1 = 2;
    int array1[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter two elements for first array :";
        cin >> array1[size1];
    }

    int size2;

    cout << "Enter the size of second array :";
    cin >> size2;

    int array2[size2];

    for (int i = 0; i < size2; i++)
    {
        cout << "Enter numbers for second array :";
        cin >> array2[i];
    }
    cout << "{" << array1[0] << ",";
    for (int i = 0; i < size2; i++)
    {
        cout << array2[i] << ",";
    }
    cout << array1[1] << "}";
    return 0;
}