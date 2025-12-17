#include<iostream>
using namespace std;

main(){
    float speed;
    cout<<"Enter speed:";
    cin>>speed;
    if(speed<=10)
    {
        cout<<"Slow";
    }
    else if(speed<=50)
    {
        cout<<"average";
    }
    else if(speed<=150)
    {
        cout<<"Fast";
    }
    else if(speed<=1000)
    {
        cout<<"Ultra fast";
    }
    else 
    {
        cout<<"Extremely fast";
    }
}