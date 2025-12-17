#include<iostream>
using namespace std;

int main()
{
    int element[10];
    int flag=0;
   
    int value;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter value="<<endl;
        cin>>element[i];
        
    }
    
    cout<<"Enter a value to find:"<<endl;
    cin >> value;
    for(int i=0;i<10;i++)
    {
    
    if(element[i]==value)
    {
        flag=1;
        cout<<"Number found";
        break;

    }
}
    
    if(flag==0)
    {
        cout<<value<<" Number not found";
    }


    return 0;
    
}