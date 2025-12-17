/* 
Program:Reverse the numbers in an array
*/

#include<iostream>
using namespace std;

int main()
{   int size;

    cout << "Enter the quantity of numbers you want to enter: ";
    cin >> size;
    int num[size];

    for ( int i = 0 ; i<size ; i++)
    {
        cout << "Enter Number:" ;
        cin >> num[i];
    }
    cout << "After reversing numbers:";
    for(int j = size-1 ; j>=0 ; j--)
    {
        cout << num[j];
    }

    return 0;
}