#include<iostream>
using namespace std;

int main()
{
    int elements[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter element="<<endl;
        cin>>elements[i];
    }
    for(int i=0;i<5;i++)
    {
        cout << "Elements are:"<<elements[i]<<endl;
    }
    return 0;
    
}
