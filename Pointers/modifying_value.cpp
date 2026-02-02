//modify the value of a variable by using pointer

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    *p = 25;

    cout << a;
    
}