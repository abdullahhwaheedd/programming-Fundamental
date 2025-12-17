#include<iostream>
using namespace std;

int main()
{
    int array[10];
    int smallest;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter value:"<<endl;
        cin>>array[i];

    }
    smallest=array[0];
    for(int i=0;i<10;i++)
    {
      if(smallest>array[i])
      {
        smallest=array[i];
      }
      
    }
    cout<<"Smallest number ="<<smallest;
}