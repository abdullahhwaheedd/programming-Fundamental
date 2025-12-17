#include<iostream>
using namespace std;

int main()
{
    int elemnt[10];
    int scalar;
    int product;
    for(int i=0;i<10;i++)
    {
      cout<<"Enter value:"<<endl;
      cin>>elemnt[i];
    }
    cout<<"Enter a scalar number:";
    cin>>scalar;

    for(int i=0;i<10;i++)
    {
     cout<<elemnt[i]<<"\t"<<scalar*elemnt[i]<<endl;
      
    }
    return 0;
}