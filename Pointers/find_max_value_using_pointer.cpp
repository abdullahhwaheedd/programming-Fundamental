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
    int largest = *p;
    for(int i = 0 ; i < 10 ; i ++)
    {
        if(largest < *(p+i))
        {
            largest = *(p+i);
        }
    }
    cout << "Largest = " << largest;

}