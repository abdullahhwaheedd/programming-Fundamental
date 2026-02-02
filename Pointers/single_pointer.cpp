// usage of single pointer to access two variables

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int *p = &a;
    cout << *p << endl;
    
    p = &b;

    cout << *p;
}