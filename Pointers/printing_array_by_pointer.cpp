#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for(int i = 0 ; i < 10 ; i ++)
    {
        cout << "Enter value:"<< endl;
        cin >> arr[i];
    }
    int *p = arr;
    cout << "Showing by using the pointer the values of array are:"<< endl;
    for(int i = 0 ; i < 10 ; i ++)
    {
        cout << *(p+i) << endl;
    }
}